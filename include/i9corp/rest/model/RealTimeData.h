//
// Created by sobrito on 02/03/2020.
//

#ifndef MAMUTE_CORE_REALTIMEDATA_H
#define MAMUTE_CORE_REALTIMEDATA_H

#include <i9corp/rest/model/DataTransfer.h>
#include <i9corp/rest/model/RealTimeItem.h>
#include <map>
#include <string>

namespace i9corp {
    class RealTimeData : public DataTransfer {
    public:
        RealTimeData();

        ~RealTimeData();

        char *toJsonString() override;

        void fromJson(json mData) override;

        const std::map<std::string, RealTimeItem *> &getItems() const;

        void setItems(const std::map<std::string, RealTimeItem *> &items);

        RealTimeItem *getItem(const char *field);

        bool append(RealTimeItem *item);

        char *getJsonData() const;

        void setJsonData(const char *jsonData);

    private:
        std::map<std::string, RealTimeItem *> items;
        char *jsonData;

        void clear();
    };
}

#endif //MAMUTE_CORE_REALTIMEDATA_H
