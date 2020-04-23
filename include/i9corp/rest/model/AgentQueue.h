#ifndef AGENTQUEUE_H
#define AGENTQUEUE_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/Queue.h>
#include <i9corp/rest/model/AgentQueue.h>
#include <i9corp/rest/model/DataTransfer.h>
#include <i9corp/rest/repository/QueueRepository.h>
#include <json/json.hpp>

using namespace i9corp;
using namespace nlohmann;

namespace i9corp {
    class DLL_EXPORT AgentQueue : public DataTransfer {
    public:
        AgentQueue();

        ~AgentQueue();

        char *getAgent() const;

        void setAgent(const char *agent);

        int getPenalty() const;

        void setPenalty(int value);

        bool isAutoLogin() const;

        void setAutoLogin(bool value);

        char *getQueue() const;

        void setQueue(const char *value);

        bool getAllowed() const;

        void setAllowed(bool value);

        char *toJsonString() override;

        void fromJson(json mData) override;

        bool isLoggedOn();

        long getAdded() const;

        void setAdded(long added);

        long getRemoved() const;

        void setRemoved(long removed);

        void setLoggedOn(bool loggedOn);

    private:
        char *agent;
        char *queue;
        bool autoLogin;
        int penalty;
        bool allowed;
        bool loggedOn;
        long added;
        long removed;
    };
}
#endif // AGENTQUEUE_H
