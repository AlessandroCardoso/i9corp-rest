//
// Created by sobrito on 31/07/2019.
//

#ifndef MAMUTE_CORE_TRIGGERPARAMETER_H
#define MAMUTE_CORE_TRIGGERPARAMETER_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/DataTransfer.h>
#include <json/json.hpp>

using namespace nlohmann;
namespace i9corp {
    class DLL_EXPORT TriggerParameter : public DataTransfer {
    public:

        TriggerParameter();

        ~TriggerParameter() override ;

        const char *getField() const;

        void setField(const char *field);

        const char *getValue() const;

        void setValue(const char *value);

        char *toJsonString() override;

        void fromJson(json mData) override;

    private:
        char *value;
        char *field;
    };
}

#endif //MAMUTE_CORE_TRIGGERPARAMETER_H
