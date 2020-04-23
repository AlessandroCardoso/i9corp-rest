#ifndef ABSTRACT_DISPLAY_CONTACT_H
#define ABSTRACT_DISPLAY_CONTACT_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/ContactParameterValue.h>
#include <i9corp/rest/model/ContactParameter.h>
#include <i9corp/rest/model/DataTransfer.h>
#include <i9corp/rest/model/Device.h>
#include <string>
#include <map>

using namespace i9corp;

namespace i9corp {

    class DLL_EXPORT AbstractDisplayContact : public DataTransfer {
    public:
        AbstractDisplayContact();

        virtual ~AbstractDisplayContact();

        virtual const char *getDisplayContactPicture() = 0;

        virtual const char *getDisplayContactName() = 0;

        virtual const char *getDisplayContactEmail() = 0;

        virtual const char *getDisplayContactType() = 0;

        virtual int getDisplayContactId() = 0;

        virtual void addDisplayContactDevice(Device *device) = 0;

        virtual std::map<std::string, Device *> listDisplayContactDevices() = 0;

        const char *getDisplayContactLongId();

        std::map<std::string, ContactParameterValue *> listDisplayContactParameters();

        void setDisplayContactParameterValue(ContactParameter *parameter, const char *value);

    private:
        std::string hash;
        std::map<std::string, ContactParameterValue *> parameters;
    };
}
#endif // ABSTRACT_DISPLAY_CONTACT_H
