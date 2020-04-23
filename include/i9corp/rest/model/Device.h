#ifndef I9CORP_DEVICE_H
#define I9CORP_DEVICE_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/DataTransfer.h>
#include <i9corp/rest/model/Call.h>
#include <i9corp/rest/model/CallStats.h>
#include <map>
#include <vector>
#include <string>

namespace i9corp {
    class DLL_EXPORT Device : public DataTransfer {
    public:
        enum DeviceStatus : int {
            UNKNOWN,
            NOT_INUSE,
            INUSE,
            BUSY,
            INVALID,
            UNAVAILABLE,
            RINGING,
            RING_INUSE,
            ON_HOLD
        };
        enum AgentStatus : int {
            IdleStatus,
            PauseStatus,
            OffLineStatus,
            UnknownStatus,
            RingingStatus,
            BusyStatus
        };


        Device(const char *type);

        virtual ~Device();

        virtual const char *getDeviceExten() = 0;

        virtual const char *getDeviceName() = 0;

        const char *getDeviceType();

        virtual int getDeviceStatus() = 0;

        virtual void setDeviceStatus(int status) = 0;

        char *getDeviceChannel() const;

        void setDeviceChannel(const char *deviceChannel);

        long getLastStatusUpdated() const;

        void setLastStatusUpdated(long lastStatusUpdated);

        const std::vector<Call *> &getDeviceCalls() const;

        CallStats *getCurrentCallStats();

        CallStats *getCallStatByPeriod(int period);

        bool appendDeviceCall(Call *call);

        bool dropDeviceCall(Call *call);

        char *getDeviceIpAddress() const;

        void setDeviceIpAddress(const char *deviceIpAddress);

        int getPort() const;

        void setPort(int port);

    private:
        char *type;
        long lastStatusUpdated;
        char *deviceChannel;
        char *deviceIpAddress;
        std::vector<Call *> deviceCalls;
        std::map<int, CallStats *> deviceCallStats;
        int port;
    };
}
#endif // I9CORP_DEVICE_H
