//
// Created by sobrito on 17/05/2019.
//

#ifndef I9CORP_REST_ICALLTRIGGER_H
#define I9CORP_REST_ICALLTRIGGER_H

#include <i9corp/rest/model/Call.h>

namespace i9corp {
    class ICallTrigger {
    public:
        virtual void onCallCreated(Call *call) = 0;

        virtual void onCallUpdated(Call *call) = 0;

        virtual void onCallRemove(Call *call) = 0;
    };
}

#endif //I9CORP_REST_ICALLTRIGGER_H
