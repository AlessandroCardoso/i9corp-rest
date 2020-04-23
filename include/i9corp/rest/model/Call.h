//
// Created by sobrito on 17/05/2019.
//

#ifndef I9CORP_REST_CALL_H
#define I9CORP_REST_CALL_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/DirectionType.h>
#include <i9corp/rest/model/DataTransfer.h>
#include <i9corp/rest/model/CallStatusType.h>

namespace i9corp {
    class DLL_EXPORT Call : public DataTransfer {
    public:
        Call(const char *number, const char *channel, long start, CallStatusTypeValue status);

        Call();

        ~Call();

        char *getDate() const;

        long getStart() const;

        void setStart(long start);

        long getAnswer() const;

        void setAnswer(long answer);

        long getEnd() const;

        void setEnd(long end);

        int getPeriod() const;

        char *toJsonString() override;

        void fromJson(json mData) override;

        Call *getSource() const;

        void setSource(Call *source);

        Call *getDestination() const;

        void setDestination(Call *destination);

        char *getChannel() const;

        void setChannel(const char *channel);

        char *getNumber() const;

        void setNumber(const char *number);

        const CallStatusTypeValue &getLastStatus() const;

        void setLastStatus(const CallStatusTypeValue &lastStatus);


    private:
        void setDate(const char *date);

        void setPeriod(int period);

        Call *source;
        Call *destination;
        CallStatusTypeValue lastStatus;
        char *channel;
        char *number;
        char *date;
        long start;
        long answer;
        long end;
        int period;
    };
}

#endif //I9CORP_REST_CALL_H
