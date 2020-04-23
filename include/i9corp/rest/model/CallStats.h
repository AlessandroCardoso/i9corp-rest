//
// Created by sobrito on 17/05/2019.
//

#ifndef I9CORP_REST_CALLSTATS_H
#define I9CORP_REST_CALLSTATS_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/DataTransfer.h>
#include <map>
#include <string>
#include <i9corp/rest/model/CallStatusType.h>
#include <json/json.hpp>

using namespace nlohmann;

namespace i9corp {

    class DLL_EXPORT CallStats : public DataTransfer {
    public:
        CallStats();

        ~CallStats();

        int getPeriod() const;

        void setPeriod(int period);

        int getAnswered() const;

        void setAnswered(int answered);

        int getReceived() const;

        void setReceived(int received);

        int getCompleted() const;

        void setCompleted(int completed);

        int getRinging() const;

        void setRinging(int ringing);

        char *getDate() const;

        void setDate(const char *date);

        char *toJsonString() override;

        void fromJson(json mData) override;

        int getDuration() const;

        void setDuration(int duration);

        CallStatusTypeValue getLastStatus() const;

        void setLastStatus(CallStatusTypeValue lastStatus);

        long getLastUpdate() const;

        void setLastUpdate(long lastUpdate);

        int getDialer() const;

        void setDialer(int dialer);

        int getFailure() const;

        void setFailure(int failure);

        int getNoAnswered() const;

        void setNoAnswered(int noAnswered);

        char *getLastChannel() const;

        void setLastChannel(const char *lastChannel);

        char *getExtension() const;

        void setExtension(const char *extension);

    private:
        int answered;
        int received;
        int completed;
        int ringing;
        int failure;
        int dialer;
        int noAnswered;
        int duration;
        char *date;
        int period;
        CallStatusTypeValue lastStatus;
        long lastUpdate;
        char *lastChannel;
        char *extension;


    };
}


#endif //I9CORP_REST_CALLSTATS_H
