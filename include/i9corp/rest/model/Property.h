#ifndef PROPERTY_H
#define PROPERTY_H

#include <string>
#include <map>
#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {
    class DLL_EXPORT Property {
    public:

        Property();

        ~Property();

        void setValue(const char *field, const char *value);

        const char *getValue(const char *field);

    private:
        std::map<std::string, char *> values;
    };
}
#endif // PROPERTY_H
