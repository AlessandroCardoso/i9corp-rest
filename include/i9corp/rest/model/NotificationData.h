//
// Created by sobrito on 05/02/2020.
//

#ifndef MAMUTE_CORE_NOTIFICATIONDATA_H
#define MAMUTE_CORE_NOTIFICATIONDATA_H


#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/NotificationType.h>

namespace i9corp {

    class DLL_EXPORT NotificationData {
    public:
        NotificationData();

        ~NotificationData();

        const char *getQueue();

        void setQueue(const char *queue);

        const char *getAgent();

        void setAgent(const char *agent);

        int getPause() const;

        void setPause(int pause);


        const char *getSource();

        void setSource(const char *source);

        const char *getDestination();

        void setDestination(const char *destination);

        const char *getGroup();

        void setGroup(const char *group);

        const char *getTitle();

        void setTitle(const char *title);

        char *getMessage() const;

        void setMessage(const char *message);

        long getDate() const;

        void setDate(long date);

        int getDuration() const;

        void setDuration(int duration);

        int getType() const;

        void setType(int type);

    private:
        char *queue;
        char *agent;
        char *source;
        char *destination;
        char *group;
        char *title;
        char *message;
        int pause;
        long date;
        int duration;
        int type;
    };

}

#endif //MAMUTE_CORE_NOTIFICATIONDATA_H
