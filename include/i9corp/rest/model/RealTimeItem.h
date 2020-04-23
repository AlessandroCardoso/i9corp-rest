//
// Created by sobrito on 02/03/2020.
//

#ifndef MAMUTE_CORE_REALTIMEITEM_H
#define MAMUTE_CORE_REALTIMEITEM_H

#include <i9corp/rest/model/DataTransfer.h>

namespace i9corp {

    class RealTimeItem : public DataTransfer {
    public:
        RealTimeItem();

        ~RealTimeItem();

        char *toJsonString() override;

        void fromJson(json mData) override;

        char *getField() const;

        void setField(const char *field);

        char *getValue() const;

        void setValue(const char *value);

    private:
        char *field;
        char *value;
    };

}

#endif //MAMUTE_CORE_REALTIMEITEM_H
