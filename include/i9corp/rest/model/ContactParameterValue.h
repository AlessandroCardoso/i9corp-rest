#ifndef CONTACTPARAMETERVALUE_H
#define CONTACTPARAMETERVALUE_H


#include <i9corp/rest/model/ContactParameter.h>
#include <i9corp/rest/common/I9CorpExportHeader.h>

using  namespace i9corp;

namespace i9corp {
    class DLL_EXPORT ContactParameterValue {
    public:
        ContactParameterValue(ContactParameter *p);

        ~ContactParameterValue();


        const char *getValue();

        void setValue(const char *value);

        ContactParameter *getParameter();

    private:
        char *value;
        ContactParameter *parameter;
    };
}

#endif // CONTACTPARAMETERVALUE_H
