//
// Created by sobrito on 19/02/2019.
//

#ifndef MAMUTE_CORE_I18NTOOLS_H
#define MAMUTE_CORE_I18NTOOLS_H


#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <json/json.h>

namespace i9corp {
    class DLL_EXPORT I18NTools {
    public:
        static I18NTools *getInstance();

        char *translate(const char *key);

        bool loadFromFile(const char *path);

        bool load(const char *data);

        ~I18NTools();
        bool isEmpty();
    private:

        I18NTools();

        static I18NTools *instance;
        Json::Value content;
    };
}


#endif //MAMUTE_CORE_I18NTOOLS_H
