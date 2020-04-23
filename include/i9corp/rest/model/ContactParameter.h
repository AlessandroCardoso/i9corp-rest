#ifndef CONTACTPARAMETER_H
#define CONTACTPARAMETER_H

#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {
    class DLL_EXPORT ContactParameter {
    public:
        ContactParameter(const char *name);

        ContactParameter();

        ~ContactParameter();

        const char *getName();

        void setName(const char *value);

    private:
        char *name;
    };

}
#endif // CONTACTPARAMETER_H
