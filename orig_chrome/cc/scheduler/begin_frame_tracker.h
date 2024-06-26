// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_SCHEDULER_BEGIN_FRAME_TRACKER_H_
#define CC_SCHEDULER_BEGIN_FRAME_TRACKER_H_

#include <set>
#include <string>

#include "base/location.h"
#include "base/trace_event/trace_event.h"
//#include "base/trace_event/trace_event_argument.h"
#include "cc/output/begin_frame_args.h"

#define BEGINFRAMETRACKER_FROM_HERE FROM_HERE_WITH_EXPLICIT_FUNCTION("")

namespace cc {

// Microclass to trace and check properties for correct BeginFrameArgs (BFA)
// usage and provide a few helper methods.
//
// With DCHECKs enable, this class checks the following "invariants";
//  * BFA are monotonically increasing.
//  * BFA is valid.
//  * The BFA is only used inside a given period.
//  * A new BFA isn't used before the last BFA is finished with.
//
// With the tracing category "cc.debug.scheduler.frames" enabled the tracker
// will output the following trace information;
//  * Time period for which the BFA is in usage.
//  * The flow of BFA as they are passed between tracking objects.
//
// TODO(mithro): Record stats about the BeginFrameArgs
class CC_EXPORT BeginFrameTracker {
public:
    explicit BeginFrameTracker(const tracked_objects::Location& location);
    ~BeginFrameTracker();

    // The Start and Finish methods manage the period that a BFA should be
    // accessed for. This allows tight control over the BFA and prevents
    // accidental usage in the wrong period when code is split across multiple
    // locations.

    // Start using a new BFA value and check invariant properties.
    // **Must** only be called after finishing with any previous BFA.
    void Start(BeginFrameArgs new_args);
    // Finish using the current BFA.
    // **Must** only be called while still using a BFA.
    void Finish();

    // The two accessors methods allow access to the BFA stored inside the
    // tracker. They are mutually exclusive, at any time it is only valid to call
    // one or the other. This makes sure you understand exactly which BFA you are
    // intending to use and verifies that is the case.

    // Get the current BFA object.
    // **Must** only be called between the start and finish methods calls.
    const BeginFrameArgs& Current() const;
    // Get the last used BFA.
    // **Must** only be called when **not** between the start and finish method
    // calls.
    const BeginFrameArgs& Last() const;

    // Helper method to try and return a valid interval property. Defaults to
    // BFA::DefaultInterval() is no other interval can be found. Can be called at
    // any time.
    base::TimeDelta Interval() const;

    void AsValueInto(base::TimeTicks now,
        base::trace_event::TracedValue* dict) const;

    // The following methods violate principles of how BeginFrameArgs should be
    // used. These methods should only be used when there is no other choice.
    bool DangerousMethodHasStarted() const
    {
        return !current_updated_at_.is_null();
    }
    bool DangerousMethodHasFinished() const { return HasFinished(); }
    const BeginFrameArgs& DangerousMethodCurrentOrLast() const;

private:
    // Return if currently not between the start/end period. This method should
    // be used extremely sparingly and normal indicates incorrect management of
    // the BFA object. Can be called at any time.
    bool HasFinished() const { return !current_finished_at_.is_null(); }

    const tracked_objects::Location location_;
    const std::string location_string_;

    base::TraceTicks current_updated_at_;
    BeginFrameArgs current_args_;
    base::TraceTicks current_finished_at_;
};

} // namespace cc

#endif // CC_SCHEDULER_BEGIN_FRAME_TRACKER_H_
