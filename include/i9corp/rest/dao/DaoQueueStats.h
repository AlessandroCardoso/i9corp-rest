//
// Created by sobrito on 01/08/2019.
//

#ifndef MAMUTE_CORE_DAOQUEUESTATS_H
#define MAMUTE_CORE_DAOQUEUESTATS_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/dao/AbstractDao.h>
#include <i9corp/rest/model/QueueStats.h>
#include <map>
#include <string>
#include <mutex>

namespace i9corp {

    class DLL_EXPORT DaoQueueStats : public AbstractDao {
    public:
        DaoQueueStats(const char *queue, const char *date);

        ~DaoQueueStats();

        int rowCount() override;

        QueueStats *get(int period);

        void clear();

    private:
        char *queue;
        char *date;
        std::map<int, QueueStats *> list;
    };
}

#endif //MAMUTE_CORE_DAOQUEUESTATS_H
