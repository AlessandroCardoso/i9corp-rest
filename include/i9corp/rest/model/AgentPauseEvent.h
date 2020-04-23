//
// Created by silen on 03/08/2019.
//

#ifndef MAMUTE_CLIENT_AGENTPAUSEEVENT_H
#define MAMUTE_CLIENT_AGENTPAUSEEVENT_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <json/json.hpp>

using namespace nlohmann;

namespace i9corp {
    class DLL_EXPORT AgentPauseEvent {
    public:
        AgentPauseEvent();

        ~AgentPauseEvent();

        int getNumber() const;

        void setNumber(int number);

        char *getName() const;

        void setName(const char *name);

        char *getAgent() const;

        void setAgent(const char *agent);

        int getDuration() const;

        void setDuration(int duration);

        long getDateStart() const;

        void setDateStart(long dateStart);

        long getDateEnd() const;

        void setDateEnd(long dateEnd);

    private:
        int number;
        char *name;
        char *agent;
        int duration;
        long dateStart;
        long dateEnd;
    };
}

#endif //MAMUTE_CLIENT_AGENTPAUSEEVENT_H
