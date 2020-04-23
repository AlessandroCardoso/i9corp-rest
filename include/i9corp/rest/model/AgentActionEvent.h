//
// Created by silen on 03/08/2019.
//

#ifndef MAMUTE_CLIENT_AGENTACTIONEVENT_H
#define MAMUTE_CLIENT_AGENTACTIONEVENT_H


#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {
    class DLL_EXPORT AgentActionEvent {
    public:
        AgentActionEvent();

        ~AgentActionEvent();

    public:
        char *getName() const;

        void setName(const char *name);

        char *getDescription() const;

        void setDescription(const char *description);

        long getDate() const;

        void setDate(long date);

        char *getAgent() const;

        void setAgent(const char *agent);

    private:
        char *name;
        char *description;
        long date;
        char *agent;
    };

}
#endif //MAMUTE_CLIENT_AGENTACTIONEVENT_H
