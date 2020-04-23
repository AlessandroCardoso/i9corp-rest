//
// Created by sobrito on 05/08/2019.
//

#ifndef MAMUTE_CORE_DAOAGENT_H
#define MAMUTE_CORE_DAOAGENT_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/dao/AbstractDao.h>
#include <i9corp/rest/model/Agent.h>
#include <map>
#include <string>
#include <mutex>

#include <i9corp/rest/model/AbstractRow.h>

namespace i9corp {

    class DLL_EXPORT DaoAgent : public AbstractDao {
    public:
        DaoAgent();

        ~DaoAgent() override;

        int rowCount() override;

        AbstractRow *get(const char *number);

        Agent *getAgent(const char *number);

        bool add(Agent *agent);

    public:
        bool login(const char *number, long unixTimestamp, const char *device);

        bool logout(const char *number, long unixTimestamp);

        bool pause(const char *number, long unixTimestamp, int reason);

        bool unpause(const char *number, long unixTimestamp, int reason);

        bool queueMemberAdd(const char *agent, const char *queue, int penalty, long unixTimestamp);

        bool queueMemberRemove(const char *agent, const char *queue, long unixTimestamp);

        std::map<std::string, Agent *> &getList();

        void clear();

    private:
        AbstractRow *doGet(const char *number, bool safe);

        std::map<std::string, Agent *> list;
    };
}

#endif //MAMUTE_CORE_DAOAGENT_H
