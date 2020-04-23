#ifndef CONTACT_H
#define CONTACT_H


#include <map>
#include <string>

#include <i9corp/rest/model/ContactPhoneNumber.h>
#include <i9corp/rest/model/AbstractDisplayContact.h>
#include <i9corp/rest/model/Device.h>
#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <json/json.hpp>

using namespace nlohmann;
using namespace i9corp;

namespace i9corp {
    class DLL_EXPORT Contact : public AbstractDisplayContact {
    public:
        Contact(int id, const char *name, const char *email, const char *picture);

        Contact();

        ~Contact() override;

        const char *getName();

        void setName(const char *value);

        const char *getEmail();

        void setEmail(const char *value);

        int getId() const;

        void setId(int value);

        std::map<std::string, Device *> getNumbers();

        void setPhone(const char *number);

        void delPhone(const char *number);

        const char *getPicture();

        void setPicture(const char *value);

        // AbstractDisplayContact interface

        const char *getDisplayContactPicture() override;

        const char *getDisplayContactName() override;

        int getDisplayContactId() override;

        const char *getDisplayContactType() override;

        const char *getDisplayContactEmail() override;

        void addDisplayContactDevice(Device *device) override;

        std::map<std::string, Device *> listDisplayContactDevices() override;

        char *toJsonString() override;

        void fromJson(json mData) override;

    private:
        int id;
        char *name;
        char *email;
        char *picture;
        std::map<std::string, Device *> numbers;
        char *type;
        char *parameters;
    public:
        char *getParameters() const;

        void setParameters(const char *parameters);
    };

}
#endif // CONTACT_H
