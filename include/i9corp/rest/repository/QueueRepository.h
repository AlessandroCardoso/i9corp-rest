//
// Created by sobrito on 13/05/2019.
//

#ifndef MAMUTE_CLIENT_QUEUEREPOSITORY_H
#define MAMUTE_CLIENT_QUEUEREPOSITORY_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/Queue.h>

using namespace i9corp;
namespace i9corp {

    class DLL_EXPORT QueueRepository {
    public:
        virtual Queue *findQueue(const char *queueNumber) = 0;
        virtual bool appendQueue(Queue *queue) = 0;
    };
}

#endif //MAMUTE_CLIENT_QUEUEREPOSITORY_H
