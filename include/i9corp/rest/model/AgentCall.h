#ifndef I9CORP_AGENT_CALL_H
#define I9CORP_AGENT_CALL_H

#include <i9corp/rest/model/AbstractDisplayContact.h>
#include <i9corp/rest/model/Device.h>
#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/DataTransfer.h>
typedef enum AgentCallStatus {
    AGENT_CALL_STATUS_OUTGOING,
    AGENT_CALL_STATUS_INCOMING,
    AGENT_CALL_STATUS_MISSED,
    AGENT_CALL_STATUS_BUSY,
    AGENT_CALL_STATUS_FAILED
} TAgentCallStatus;

namespace i9corp {
    class DLL_EXPORT AgentCall : public DataTransfer{
    public:
        AgentCall(int id, Device *channel, AbstractDisplayContact *contact, long timestamp, int duration,
                    Device *device, TAgentCallStatus status);

        int getId();

        AbstractDisplayContact *getContact();

        TAgentCallStatus getStatus();

        Device *getDevice();

        long getTimestamp();

        int getDuration();

        Device *getChannel();

        char *toJsonString() override;

        void fromJson(json mData) override;

    private:
        int id;
        AbstractDisplayContact *contact;
        TAgentCallStatus status;
        Device *channel;
        Device *device;
        long timestamp;
        int duration;
    };
}
#endif // I9CORP_AGENT_CALL_H

