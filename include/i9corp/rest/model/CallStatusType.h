//
// Created by sobrito on 21/05/2019.
//

#ifndef MAMUTE_CORE_CALLSTATUSTYPE_H
#define MAMUTE_CORE_CALLSTATUSTYPE_H

#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {

    class DLL_EXPORT CallStatusType {

    public:
        ~CallStatusType();

        enum Value {
            RECEIVED,
            DIALER,
            ANSWERED,
            NO_ANSWERED,
            BUSY,
            CONGESTION,
            FAILURE,
            HANGUP,
            RINGING,
            UNDEFINED,
        };

    private:
        explicit CallStatusType();
    };
}
typedef i9corp::CallStatusType::Value CallStatusTypeValue;

#endif //MAMUTE_CORE_CALLSTATUSTYPE_H
