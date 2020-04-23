//
// Created by sobrito on 21/02/2020.
//

#ifndef MAMUTE_CORE_TICKETCALL_H
#define MAMUTE_CORE_TICKETCALL_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/DataTransfer.h>
#include <json/json.hpp>

using namespace nlohmann;
namespace i9corp {
    class DLL_EXPORT TicketCall : public DataTransfer {
    public:
        TicketCall();

        ~TicketCall() override;

        char *toJsonString() override;

        void fromJson(json mData) override;

        char *getUniqueId() const;

        void setUniqueId(const char *uniqueId);

        char *getAgentExten() const;

        void setAgentExten(const char *agentExten);

        char *getExtId() const;

        void setExtId(const char *extId);

        char *getStart() const;

        void setStart(const char *start);

        char *getEnd() const;

        void setEnd(const char *end);

        char *getSource() const;

        void setSource(const char *source);

        char *getDestination() const;

        void setDestination(const char *destination);

        char *getDisposition() const;

        void setDisposition(const char *disposition);

        char *getDuration() const;

        void setDuration(const char *duration);

        char *getType() const;

        void setType(const char *type);

        char *getDevice() const;

        void setDevice(const char *device);

        char *getTransferred() const;

        void setTransferred(const char *transferred);

        char *getRecord() const;

        void setRecord(const char *record);

        char *getNumber() const;

        void setNumber(const char *value);

    private:
        char *uniqueId;
        char *number;
        char *agentExten;
        char *extId;
        char *start;
        char *end;
        char *source;
        char *destination;
        char *disposition;
        char *duration;
        char *type;
        char *device;
        char *transferred;
        char *record;

    };
}

#endif //MAMUTE_CORE_TICKETCALL_H
