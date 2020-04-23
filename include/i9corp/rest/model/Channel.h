//
// Created by sobrito on 30/07/2019.
//

#ifndef MAMUTE_CORE_CHANNEL_H
#define MAMUTE_CORE_CHANNEL_H


#include <i9corp/rest/model/AbstractRow.h>
#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/Cdr.h>
#include <i9corp/rest/model/Qdr.h>
#include <i9corp/rest/model/DataTransfer.h>

namespace i9corp {
    class DLL_EXPORT Channel : public AbstractRow, public DataTransfer {
    public:
        enum ChannelStates {
            PendingState,
            DialState,
            AnswerState,
            RingingState,
            TransferState,
            HangupState
        };

        enum ChannelColumns {
            UniqueIdColumn,
            ChannelColumn,
            CallerIdColumn,
            NumberColumn,
            StateColumn
        };

        Channel();

        ~Channel();

        const char *getUniqueId() const;

        void setUniqueId(const char *uniqueId);

        const char *getChannel() const;

        void setChannel(const char *channel);

        const char *getCallerId() const;

        void setCallerId(const char *callerId);

        const char *getNumber() const;

        void setNumber(const char *number);

        char *getType() const;

        void setType(const char *value);

        const void *data(int column) override;

        bool setData(int column, const void *value) override;

        ChannelStates getState() const;

        void setState(ChannelStates state);

        Cdr *getCdr() const;

        void setCdr(Cdr *cdr);


        Qdr *getQdr() const;

        void setQdr(Qdr *qdr);

        char *toJsonString() override;

        void fromJson(json mData) override;

    private:
        char *uniqueId;
        char *channel;
        char *callerId;
        char *number;
        char *type;
        ChannelStates state;
        Cdr *cdr;
        Qdr *qdr;
    };
}


#endif //MAMUTE_CORE_CHANNEL_H
