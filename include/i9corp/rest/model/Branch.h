#ifndef BRANCH_H
#define BRANCH_H

#include <i9corp/rest/model/Device.h>
#include <i9corp/rest/common/Response.h>
#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/UserProfileStatusType.h>
#include <i9corp/rest/model/DataTransfer.h>
#include <json/json.hpp>

using namespace nlohmann;
using namespace i9corp;

namespace i9corp {
    class DLL_EXPORT Branch : public Device {
    public:
        Branch(const char *exten, const char *name);

        Branch();

        ~Branch() override;

        // Device interface
        const char *getDeviceExten() override;

        const char *getDeviceName() override;

        // Methods
        const char *getExten();

        void setExten(const char *value);

        const char *getName();

        void setName(const char *value);

        int getId();

        void setId(int value);

        const char *getSecret();

        void setSecret(const char *value);

        const char *getEmail();

        void setEmail(const char *value);

        char *toJsonString() override;

        void fromJson(json mData) override;

        int getDeviceStatus() override;

        int getStatus() const;

        void setStatus(int status);

        void setDeviceStatus(int status) override;

    private:
        int id;
        char *exten;
        char *name;
        char *secret;
        char *email;
        int status;

    };
}
#endif // BRANCH_H
