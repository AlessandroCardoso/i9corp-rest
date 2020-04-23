//
// Created by sobrito on 15/10/2019.
//

#ifndef MAMUTE_CORE_CALLDISCOVERY_H
#define MAMUTE_CORE_CALLDISCOVERY_H

#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {
    class DLL_EXPORT CallDiscovery {
    public:
        CallDiscovery();

        ~CallDiscovery();

        char *getChannel() const;

        void setChannel(const char *value);

        char *getContext() const;

        void setContext(const char *value);

        char *getExtension() const;

        void setExtension(const char *value);

        char *getPriority() const;

        void setPriority(const char *value);

        char *getStats() const;

        void setStats(const char *value);

        char *getApplication() const;

        void setApplication(const char *value);

        char *getData() const;

        void setData(const char *value);

        char *getCallerId() const;

        void setCallerId(const char *value);

        char *getAccountCode() const;

        void setAccountCode(const char *value);

        char *getAmaFlags() const;

        void setAmaFlags(const char *value);

        char *getDuration() const;

        void setDuration(const char *value);

        char *getBridged() const;

        void setBridged(const char *value);

        char *getUniqueId() const;

        void setUniqueId(const char *value);

        CallDiscovery *getCall() const;

        void setCall(CallDiscovery *call);

    private:
        char *channel;
        char *context;
        char *extension;
        char *priority;
        char *stats;
        char *application;
        char *data;
        char *callerID;
        char *accountCode;
        char *amaFlags;
        char *duration;
        char *bridged;
        char *uniqueId;
        CallDiscovery *call;
    };
}


#endif //MAMUTE_CORE_CALLDISCOVERY_H
