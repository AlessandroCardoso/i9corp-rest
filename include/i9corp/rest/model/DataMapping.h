#ifndef DATAMAPPING_H
#define DATAMAPPING_H


#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/Agent.h>
#include <i9corp/rest/model/Queue.h>
#include <i9corp/rest/model/Branch.h>
#include <i9corp/rest/model/Pause.h>
#include <i9corp/rest/model/QueueStats.h>
#include <i9corp/rest/model/CallStats.h>
#include <i9corp/rest/model/WebSocketResponse.h>
#include <i9corp/rest/trigger/ICallTrigger.h>
#include <i9corp/rest/model/QueueStatsType.h>
#include <i9corp/rest/model/CallStatusType.h>
#include <i9corp/rest/model/Contact.h>


#include <i9corp/rest/dao/DaoAgent.h>


#include <string>
#include <vector>
#include <mutex>
#include <map>

using namespace i9corp;

namespace i9corp {
    class DLL_EXPORT DataMapping {
    public:
        DataMapping();

        ~DataMapping();

        Device *findDeviceByNumber(const char *extension);

        Queue *getQueue(const char *exten);

        Pause *getPause(int exten);

        Pause *getPause(const char *exten);

        Branch *getBranch(const char *exten);

        Agent *getAgent(const char *exten);

        bool setQueue(const char *exten, Queue *queue);

        bool setPause(const char *exten, Pause *pause);

        bool setBranch(const char *exten, Branch *branch);

        bool setAgent(const char *exten, Agent *agent);

        std::map<std::string, Queue *> getQueues();

        std::map<std::string, Pause *> getPauses();

        std::map<std::string, Branch *> getBranches();

        std::map<std::string, Agent *> getAgents();

        void clear();

        void clearContacts();

        void clearPauses();

        void clearBranches();

        void clearAgents();

        void clearQueues();

        void clearCalls();

        WebSocketResponse *getWebSocketResponsePauses(const char *tag, const char *view);

        WebSocketResponse *getWebSocketResponseBranches(const char *tag, const char *view);

        WebSocketResponse *getWebSocketResponseQueues(const char *tag, const char *view);


        WebSocketResponse *getWebSocketResponseAgents(const char *tag, const char *view);

        WebSocketResponse *getWebSocketResponseContacts(const char *tag, const char *view);

        WebSocketResponse *
        getWebSocketResponseAgents(const char *tag, const char *view, std::map<std::string, Agent *> mAgents);

        WebSocketResponse *
        getWebSocketResponsePauses(const char *tag, const char *view, std::map<std::string, Pause *> mPauses);

        WebSocketResponse *
        getWebSocketResponseContacts(const char *tag, const char *view, std::vector<Contact *> mContacts);

        WebSocketResponse *
        getWebSocketResponseBranches(const char *tag, const char *view, std::map<std::string, Branch *> mBranches);

        WebSocketResponse *
        getWebSocketResponseQueues(const char *tag, const char *view, std::map<std::string, Queue *> mQueues);

        Contact *findContact(const char *phone);

        Call *findCall(const char *source, const char *destination);

        Call *findCall(const char *source);

        bool appendContact(Contact *call);

        bool appendCall(Call *call);

        bool dropCall(Call *call);

        CallStats *getCallStatsByExtension(const char *extension);

        bool updateCallStats(const char *extension, CallStatusTypeValue type, int duration);

        bool updateCallStats(const char *extension, CallStatusTypeValue type);

        QueueStats *getQueueStatsByExtension(const char *extension);

        bool updateQueueStats(const char *extension, QueueStatsTypeValue type, int duration);

        bool updateQueueStats(const char *extension, QueueStatsTypeValue type);

    private:
        std::mutex *mtx;
        std::mutex *branchLock;
        std::mutex *callLock;
        std::mutex *contactLock;
        char *currentDate;

        Call *findCall(const char *source, const char *destination, bool safeMode);

        Contact *findContact(const char *phone, bool safeMode);

        char *getCurrentDate() const;

        void setCurrentDate(const char *currentDate);

        void checkCurrentStatsDate();

        void clearCallStats();

        void clearQueueStats();

        std::map<std::string, Queue *> queues;
        std::map<std::string, Pause *> pauses;
        std::map<std::string, Branch *> branches;
        std::map<std::string, Contact *> contactsIndexes;
        std::vector<Contact *> contacts;
        std::vector<Call *> calls;
        std::map<std::string, CallStats *> callStats;
        std::map<std::string, QueueStats *> queueStats;

        DaoAgent *daoAgent;
    public:
        DaoAgent *getDaoAgent();

    private:
        ICallTrigger *callTrigger;
    public:
        ICallTrigger *getCallTrigger() const;

        void setCallTrigger(ICallTrigger *callTrigger);
    };
}
#endif // DATAMAPPING_H
