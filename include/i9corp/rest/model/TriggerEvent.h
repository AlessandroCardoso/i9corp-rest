//
// Created by sobrito on 31/07/2019.
//

#ifndef MAMUTE_CORE_TRIGGEREVENT_H
#define MAMUTE_CORE_TRIGGEREVENT_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/TriggerParameter.h>
#include <i9corp/rest/model/DataTransfer.h>
#include <map>
#include <json/json.hpp>

using namespace nlohmann;
namespace i9corp {
    class DLL_EXPORT TriggerEvent : public DataTransfer {
    public:
        TriggerEvent();

        ~TriggerEvent() override ;

        char *getName() const;

        void setName(const char *name);

        const std::map<std::string, TriggerParameter *> &getParameters() const;

        bool addParameter(const char *field, const char *value);

        bool addParameter(const char *field, int value);

        char *toJsonString() override;

        void fromJson(json mData) override;

    private:
        char *name;
        std::map<std::string, TriggerParameter *> parameters;

    };
}

#endif //MAMUTE_CORE_TRIGGEREVENT_H
