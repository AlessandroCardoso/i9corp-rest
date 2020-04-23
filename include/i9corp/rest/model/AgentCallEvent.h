//
// Created by silen on 03/08/2019.
//

#ifndef MAMUTE_CLIENT_AGENTCALLEVENT_H
#define MAMUTE_CLIENT_AGENTCALLEVENT_H


#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {
    class DLL_EXPORT AgentCallEvent {
    public:
        AgentCallEvent();

        ~AgentCallEvent();

    private:
        char *source;
        char *destination;
        long dateStart;
        long dateEnd;
        int holdTime;
        int speakingTime;
        char *direction;
        bool answered;
        char *uniqueId;
        char *hangupReason;
        char *agent;
    public:
        char *getSource() const;

        void setSource(const char *source);

        char *getDestination() const;

        void setDestination(const char *destination);

        long getDateStart() const;

        void setDateStart(long dateStart);

        long getDateEnd() const;

        void setDateEnd(long dateEnd);

        int getHoldTime() const;

        void setHoldTime(int holdTime);

        int getSpeakingTime() const;

        void setSpeakingTime(int speakingTime);

        char *getDirection() const;

        void setDirection(const char *direction);

        bool isAnswered() const;

        void setAnswered(bool answered);

        char *getUniqueId() const;

        void setUniqueId(const char *uniqueId);

        char *getHangupReason() const;

        void setHangupReason(const char *hangupReason);

        char *getAgent() const;

        void setAgent(const char *gent);

    };
}

#endif //MAMUTE_CLIENT_AGENTCALLEVENT_H
