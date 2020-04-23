//
// Created by sobrito on 31/07/2019.
//

#ifndef MAMUTE_CORE_QDR_H
#define MAMUTE_CORE_QDR_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/QueueCall.h>

namespace i9corp {
    class DLL_EXPORT Qdr {
    public:
        const static int STATE_WAITING = 0;
        const static int STATE_CONNECTED = 1;
        const static int STATE_COMPLETED = 2;

        Qdr();

        ~Qdr();

        int getState() const;

        void setState(int state);

        const char *getAgent() const;

        void setAgent(const char *agent);

        const char *getQueue() const;

        void setQueue(const char *queue);

        int getPosition() const;

        void setPosition(int position);

        long getAbandonTime() const;

        void setAbandonTime(long abandonTime);

        long getConnectTime() const;

        void setConnectTime(long connectTime);

        long getCompleteTime() const;

        void setCompleteTime(long completeTime);

        long getJoinTime() const;

        void setJoinTime(long joinTime);

        char *getSource() const;

        void setSource(const char *source);

        char *getDestination() const;

        void setDestination(const char *destination);

        int getLatestPosition() const;

        void setLatestPosition(int latestPosition);

        int getHoldTime() const;

        void setHoldTime(int holdTime);

        int getSpeakTime() const;

        void setSpeakTime(int speakTime);

        char *getReason() const;

        void setReason(const char *reason);

        void reset();

    private:
        int state;
        char *agent;
        char *queue;
        char *source;
        char *destination;
        int holdTime;
        int position;
        int latestPosition;
        long abandonTime;
        long connectTime;
        long completeTime;
        long joinTime;
        int speakTime;
        char *reason;
    };

}
#endif //MAMUTE_CORE_QDR_H
