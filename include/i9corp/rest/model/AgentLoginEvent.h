//
// Created by sobrito on 05/08/2019.
//

#ifndef MAMUTE_CORE_AGENTLOGINEVENT_H
#define MAMUTE_CORE_AGENTLOGINEVENT_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/AbstractRow.h>
#include <i9corp/rest/model/AgentPauseEvent.h>
#include <i9corp/rest/model/AgentActionEvent.h>
#include <i9corp/rest/model/AgentCallEvent.h>
#include <map>
#include <vector>
#include <string>
#include <json/json.hpp>

using namespace i9corp;
using namespace nlohmann;

namespace i9corp {
    class DLL_EXPORT AgentLoginEvent {
    public:
        explicit AgentLoginEvent(const char *agent);

        ~AgentLoginEvent();


    public:
        long getLogin() const;

        void setLogin(long login);

        long getLogout() const;

        void setLogout(long logout);

        char *getDevice() const;

        void setDevice(const char *device);

    private:
        long login;
        long logout;
        char *device;
        char *agent;
    public:
        char *getAgent() const;

    private:

        AgentPauseEvent *latestPauseEvent;
    public:
        AgentPauseEvent *getLatestPauseEvent() const;

    private:

        std::vector<AgentPauseEvent *> pauses;
        std::vector<AgentActionEvent *> actions;
        std::vector<AgentCallEvent *> calls;
    public:
        bool isPaused() const;

        bool pause(long unixTimestamp, int reason);

        bool unpause(long unixTimestamp, int reason);

        bool addPauseEvent(long dateStart, long dateEnd, int reason);
    };
}


#endif //MAMUTE_CORE_AGENTLOGINEVENT_H
