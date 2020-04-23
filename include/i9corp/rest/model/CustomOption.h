//
// Created by sobrito on 27/02/2020.
//

#ifndef MAMUTE_CORE_CUSTOMOPTION_H
#define MAMUTE_CORE_CUSTOMOPTION_H

#include <i9corp/rest/model/DataTransfer.h>
#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {
    class DLL_EXPORT CustomOption : public DataTransfer {
    public:
        CustomOption();

        ~CustomOption() override;

        char *toJsonString() override;

        void fromJson(json mData) override;

        char *getId() const;

        void setId(const char *value);

        char *getReference() const;

        void setReference(const char *value);

        char *getOption() const;

        void setOption(const char *value);

        char *getValue() const;

        void setValue(const char *value);

    private:
        char *id;
        char *reference;
        char *option;
        char *value;
    };
}


#endif //MAMUTE_CORE_CUSTOMOPTION_H
