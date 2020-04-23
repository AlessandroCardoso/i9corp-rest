//
// Created by sobrito on 12/06/2019.
//

#ifndef MAMUTE_CORE_QUEUECALL_H
#define MAMUTE_CORE_QUEUECALL_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/CallStatusType.h>
#include <i9corp/rest/model/DataTransfer.h>
#include "DataTransfer.h"
#include "CallStatusType.h"

using namespace i9corp;
using namespace nlohmann;

namespace i9corp {
    class DLL_EXPORT QueueCall : public DataTransfer {
    public:
        QueueCall();

        ~QueueCall();

        char *getQueue() const;

        void setQueue(const char *queue);

        char *getSource() const;

        void setSource(const char *source);

        char *getMember() const;

        void setMember(const char *member);

        int getRingTime() const;

        void setRingTime(int ringTime);

        int getSpeakingTime() const;

        void setSpeakingTime(int speakingTime);

        const CallStatusTypeValue &getType() const;

        void setType(const CallStatusTypeValue &type);

        int getPosition() const;

        void setPosition(int position);

        char *toJsonString() override;

        void fromJson(json mData) override;

        long getUnixTimestamp() const;

        void setUnixTimestamp(long unixTimestamp);


    private:
        char *queue;
        char *source;
        char *member;
        int position;

        int ringTime;
        int speakingTime;
        long unixTimestamp;
        CallStatusTypeValue type;
    };

}
#endif //MAMUTE_CORE_QUEUECALL_H
