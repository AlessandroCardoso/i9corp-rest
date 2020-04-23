//
// Created by sobrito on 21/05/2019.
//

#ifndef MAMUTE_CORE_QUEUESTATSTYPE_H
#define MAMUTE_CORE_QUEUESTATSTYPE_H

#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {

    class DLL_EXPORT QueueStatsType {
    public:
        enum Value {
            RECEIVED,
            ANSWERED,
            ABANDON,
            TRANSSHIPMENT,
            PAUSE,
            UNPAUSE,
            COMPLETED,
            ADD_QUEUE,
            REMOVE_QUEUE
        };

        ~QueueStatsType();

    private:
        explicit QueueStatsType();
    };
}

typedef i9corp::QueueStatsType::Value QueueStatsTypeValue;
#endif //MAMUTE_CORE_QUEUESTATSTYPE_H
