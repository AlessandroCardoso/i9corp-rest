#ifndef PROPERTIES_H
#define PROPERTIES_H

#include <string>
#include <vector>
#include <i9corp/rest/model/Property.h>
#include <i9corp/rest/common/I9CorpExportHeader.h>
using namespace i9corp;

namespace i9corp {
    class DLL_EXPORT Properties {
    public:
        Properties();

        ~Properties();

        void addProperty(Property *p);

        std::vector<Property *> getValues();

    private:
        std::vector<Property *> values;
    };
}
#endif // PROPERTIES_H
