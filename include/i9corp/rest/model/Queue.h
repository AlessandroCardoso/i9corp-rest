#ifndef QUEUE_H
#define QUEUE_H

#include <i9corp/rest/model/Device.h>
#include <i9corp/rest/model/DataTransfer.h>
#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/QueueStats.h>
#include <i9corp/rest/model/QueueCall.h>
#include <json/json.hpp>
#include <map>
#include <string>
#include <mutex>

using namespace nlohmann;

namespace i9corp {
    class DLL_EXPORT Queue : public Device {
    public:
        Queue(int id, const char *name, const char *exten);

        Queue();

        ~Queue() override;

        // Device interface
        const char *getDeviceExten() override;

        const char *getDeviceName() override;

        int getId();

        void setId(int value);

        const char *getName();

        void setName(const char *value);

        const char *getExten();

        void setExten(const char *value);

        bool getEnabled();

        void setEnabled(bool value);

        char *toJsonString() override;

        void fromJson(json mData) override;

        QueueStats *getQueueStatsByPeriod(int period);

        QueueStats *getCurrentQueueStats();

        int getStatus() const;

        void setStatus(int status);

        char *getPicture() const;

        void setPicture(const char *picture);

        int getDeviceStatus() override;

        void setDeviceStatus(int status) override;

        const std::map<std::string, QueueCall *> &getCalls() const;

        QueueCall *findCall(const char *number);

        bool appendCall(QueueCall *call);

        bool dropCall(const char *number);

    private:
        std::mutex *lockCalls;
        int id;
        int weight;
    public:
        int getWeight() const;

        void setWeight(int weight);

    private:
        char *name;
        char *exten;
        bool enabled;
        char *picture;
        int status;
        std::map<std::string, QueueCall *> calls;
        std::map<int, QueueStats *> queueStats;

        QueueCall *findCall(const char *number, bool safeMode);
    };
}
#endif // QUEUE_H
