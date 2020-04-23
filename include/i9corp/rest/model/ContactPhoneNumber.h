#ifndef CONTACTPHONENUMBER_H
#define CONTACTPHONENUMBER_H

#include <i9corp/rest/model/Device.h>
#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {
    class DLL_EXPORT ContactPhoneNumber : public Device {
    public:
        ContactPhoneNumber(int id, const char *number);

        ContactPhoneNumber();

        ~ContactPhoneNumber() override;

        // Device interface
        const char *getDeviceExten() override;

        const char *getDeviceName() override;

        char *getNumber() const;

        void setNumber(const char *value);

        int getId() const;

        void setId(int value);

        char *toJsonString() override;

        void fromJson(json mData) override;

        int getDeviceStatus() override;

    private:
        char *number;
        int id;
        int status;
    public:
        int getStatus() const;

        void setStatus(int status);

        void setDeviceStatus(int status) override;
    };
}

#endif // CONTACTPHONENUMBER_H
