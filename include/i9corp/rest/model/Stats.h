//
// Created by sobrito on 01/08/2019.
//

#ifndef MAMUTE_CORE_STATS_H
#define MAMUTE_CORE_STATS_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/dao/DaoQueueStats.h>
#include <i9corp/rest/model/AgentStats.h>
#include <map>
#include <string>
#include <mutex>

namespace i9corp {
    class DLL_EXPORT Stats {


    private:
        std::map<std::string, DaoQueueStats *> queue;
        std::map<std::string, AgentStats *> agent;
        std::mutex *lockQueue;
        std::mutex *lockAgent;
        char *date;

        void setDate(const char *date);

    public:
        explicit Stats(const char *_date);

        ~Stats();

        char *getDate() const;

        void clear();

        DaoQueueStats *getQueue(const char *queue);

        bool addQueue(const char *number);

        AgentStats *getAgent(const char *agent);

        bool addAgent(const char *number);

    };
}

#endif //MAMUTE_CORE_STATS_H
