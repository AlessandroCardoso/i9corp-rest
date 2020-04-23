#ifndef I9CORP_AGENT_EVENT_H
#define I9CORP_AGENT_EVENT_H

#include <i9corp/rest/model/DataTransfer.h>
#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <json/json.hpp>

using namespace i9corp;
using namespace nlohmann;

namespace i9corp {
    class DLL_EXPORT AgentEvent : public DataTransfer {
    public:
        AgentEvent(int id, const char *name, const char *description, long dateStart);

        AgentEvent();

        ~AgentEvent();

        const char *getName();

        void setName(const char *value);

        const char *getDescription();

        void setDescription(const char *value);

        long getDateStart();

        void setDateStart(long value);

        int getId();

        void setId(int value);

        char *toJsonString() override;

        void fromJson(json mData) override;

    private:
        int id;
        char *name;
        char *description;
        long dateStart;
    };
}
#endif // I9CORP_AGENT_EVENT_H
