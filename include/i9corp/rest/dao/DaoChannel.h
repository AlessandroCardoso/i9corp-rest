//
// Created by sobrito on 30/07/2019.
//

#ifndef MAMUTE_CORE_DAOCHANNEL_H
#define MAMUTE_CORE_DAOCHANNEL_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/dao/AbstractDao.h>
#include <map>
#include <string>
#include <mutex>

#include <i9corp/rest/model/AbstractRow.h>
#include <i9corp/rest/model/Channel.h>
#include <i9corp/rest/dao/DaoStats.h>
#include <stdio.h>

namespace i9corp {

    class DLL_EXPORT IDaoChannelProcessList {
    public:
        virtual void doChannelProcessList(std::map<std::string, Channel *> &list, void *data) = 0;
    };

    class DLL_EXPORT DaoChannel : public AbstractDao {
    public:
        DaoChannel();

        ~DaoChannel();

        int rowCount() override;

        Channel *getByChannel(const char *channel);

        Channel *getByNumber(const char *number, bool linked = false);

        Channel *getByUniqueId(const char *uniqueId);

        AbstractRow *get(const char *uniqueId);

        bool disconnect(const char *uniqueId1, const char *uniqueId2);

        bool connect(const char *srcUniqueId, const char *destUniqueId);

        bool answer(const char *uniqueId1, const char *uniqueId2, const char *number1, const char *number2);

        bool answer(const char *uniqueId1, const char *uniqueId2);

        bool add(const char *uniqueId, const char *channel, const char *callerId, const char *number);

        bool remove(const char *uniqueId);

        bool transhipmentQueue(const char *uniqueId, const char *queue);

        bool enterQueue(const char *uniqueId, const char *queue, int position);

        bool answeredAndInQueue(const char *exten);

        bool leaveQueue(const char *uniqueId);

        bool agentConnect(const char *srcUniqueId, const char *destUniqueId, int holdTime, const char *member);

        bool agentComplete(const char *uniqueId, int holdTime, int speakTime, const char *reason);

        bool abandonQueue(const char *uniqueId, int position, int holdTime);

        void dump(FILE *handler);

        bool rename(const char *uniqueId, const char *oldChannel, const char *newChannel, const char *number);

        void process(IDaoChannelProcessList *iDaoChannelProcessList, void *data);

        bool propagateHangup(Channel *channel);

    private:
        AbstractRow *doGet(const char *uniqueId, bool safe);

        int count(const char *number);

        std::map<std::string, Channel *> list;

        void dump(FILE *handler, bool safe);

        void dropCdr(Channel *source, Channel *destination, Cdr *cdr);

        Channel *getByUniqueId(const char *uniqueId, bool safe);

        Cdr *createCdr(const char *srcUniqueId, const char *destUniqueId, long unixTimestamp);
    };
}


#endif //MAMUTE_CORE_DAOCHANNEL_H
