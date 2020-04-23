#ifndef AGENT_H
#define AGENT_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/AbstractDisplayContact.h>
#include <i9corp/rest/model/AgentLoginEvent.h>
#include <i9corp/rest/model/Branch.h>
#include <i9corp/rest/model/Device.h>
#include <i9corp/rest/model/UserProfileStatusType.h>
#include <i9corp/rest/model/UserProfile.h>
#include <i9corp/rest/model/AgentQueue.h>
#include <i9corp/rest/common/Response.h>
#include <i9corp/rest/model/AbstractRow.h>
#include <map>
#include <vector>
#include <string>
#include <json/json.hpp>


using namespace i9corp;
using namespace nlohmann;

namespace i9corp {
    class DLL_EXPORT Agent : public Device, public AbstractDisplayContact, public UserProfile, public AbstractRow {
    public:
        enum StatusType : int {
            ONLINE,
            OFFLINE,
            PAUSED,
            BUSY,
            UNKNOWN
        };

        Agent();

        ~Agent() override;

        // AbstractDisplayContact interface
        const char *getDisplayContactPicture() override;

        const char *getDisplayContactName() override;

        const char *getDisplayContactType() override;

        int getDisplayContactId() override;

        // Device interface
        const char *getDeviceExten() override;

        const char *getDeviceName() override;

        // UserProfile interface
        const char *getUserProfilePicture() override;

        const char *getUserProfileBranchNumber() override;

        const char *getUserProfileAgentNumber() override;

        const char *getUserProfileAgentName() override;

        UserProfileStatusType getUserProfileState() override;

        // Methods
        int getId();

        void setId(int value);

        const char *getName();

        void setName(const char *value);

        const char *getPicture();

        void setPicture(const char *value);

        const char *getPlainPassword();

        void setPlainPassword(const char *value);


        Branch *getBranch();

        void setBranch(Branch *value);

        UserProfileStatusType getStatus();

        void setStatus(UserProfileStatusType value);

        const char *getExten();

        void setExten(const char *value);

        const char *getEmail();

        void setEmail(const char *value);

        const char *getSecret();

        void setSecret(const char *value);

        AgentQueue *getAgentQueueByExten(const char *queueExten);

        void setAgentQueue(const char *queue, int penalty, bool autoLogin);

        void setAgentQueue(const char *queue, int penalty, bool autoLogin, bool logged);

        void delAgentQueue(const char *queueExten);

        std::map<std::string, AgentQueue *> getQueues();

        const char *getDisplayContactEmail() override;

        std::map<std::string, Device *> listDisplayContactDevices() override;

        void addDisplayContactDevice(Device *device) override;

        char *toJsonString() override;

        void fromJson(json mData) override;

        const char *getScope();

        bool hasScope(const char *value);

        void setScope(const char *scope);

        bool isPaused() const;

        bool isWithoutQueue();

        void setPaused(bool paused);

        int getDeviceStatus() override;

        char *getInterface() const;

        void setInterface(const char *interface);

        int getTta() const;

        void setTta(int tta);

        int getTma() const;

        int getAnswered() const;

        void setAnswered(int answered);

        int getOriginated() const;

        void setOriginated(int originated);

        int getRingNoAnswer() const;

        void setRingNoAnswer(int ringNoAnswer);

        void setDeviceStatus(int status) override;

        const void *data(int column) override;

        bool setData(int column, const void *value) override;

        int getLastPauseReason() const;

        void setLastPauseReason(int lastPauseReason);

        void setLatestLoginEvent(AgentLoginEvent *latestLoginEvent);

        AgentLoginEvent *getLatestLoginEvent() const;

        bool queueMemberAdd(const char *queue, int penalty, long unixTimestamp);

        bool queueMemberRemove(const char *queue, long unixTimestamp);

    private:
        int id;
        char *name;
        char *picture;
        char *plainPassword;
        char *exten;
        char *email;
        char *secret;
        char *scope;
        char *interface;
        bool paused;
        int tta;
        int answered;
        int originated;
        int ringNoAnswer;
        int lastPauseReason;

        Branch *branch;
        UserProfileStatusType status;
        std::map<std::string, AgentQueue *> queues;
        std::map<std::string, Device *> devices;
        // AbstractDisplayContact interface
        AgentLoginEvent *latestLoginEvent;

    };
}
typedef i9corp::Agent::StatusType AgentStatusType;
#endif // AGENT_H
