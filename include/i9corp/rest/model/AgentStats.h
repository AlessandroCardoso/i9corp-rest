//
// Created by silen on 03/08/2019.
//

#ifndef MAMUTE_CLIENT_AGENTSTATS_H
#define MAMUTE_CLIENT_AGENTSTATS_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <vector>
#include <i9corp/rest/model/AgentPauseEvent.h>
#include <i9corp/rest/model/AgentActionEvent.h>
#include <i9corp/rest/model/AgentCallEvent.h>
#include <map>
#include <i9corp/rest/model/AgentQueue.h>
#include <i9corp/rest/model/AbstractRow.h>

namespace i9corp {
    class DLL_EXPORT AgentStats : public AbstractRow {
    public:
        enum AgentState : int {
            AgentUndefinedState,
            AgentPausedState,
            AgentIdleState,
            AgentWithoutQueueState,
            AgentOffLineState,
        };

        AgentStats();

        ~AgentStats();

        char *getAgent() const;

        void setAgent(const char *agent);

        char *getDevice() const;

        void setDevice(const char *device);

        int getTta() const;

        void setTta(int tta);

        int getDialer() const;

        void setDialer(int dialer);

        int getAnswer() const;

        void setAnswer(int answer);

        int getOccupation() const;

        void setOccupation(int occupation);

        long getLogin() const;

        void setLogin(long login);

        long getLogout() const;

        void setLogout(long logout);

        AgentState getState() const;

    public:
        AgentPauseEvent *pause(long dateStart, int reason);

        const void *data(int column) override;

        bool setData(int column, const void *value) override;

    private:
        char *agent;
        char *device;
        int tta;
        int dialer;
        int answer;
        int occupation;
        long login;
        long logout;
        AgentState state;

        void setState(AgentState state);

        std::vector<AgentPauseEvent *> pauses;
        std::vector<AgentActionEvent *> actions;
        std::vector<AgentCallEvent *> calls;
        std::map<std::string, AgentQueue *> queues;
    };
}

#endif //MAMUTE_CLIENT_AGENTSTATS_H
