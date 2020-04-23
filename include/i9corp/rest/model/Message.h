#ifndef MESSAGE_H
#define MESSAGE_H

#include <i9corp/rest/model/AbstractDisplayContact.h>
#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {
    class DLL_EXPORT Message {
    public:
        Message(AbstractDisplayContact *contact, const char *message, long timestamp, bool me);

        AbstractDisplayContact *getContact();

        const char *getMessage();

        long getTimestamp();

        bool isMe();

    private:
        void setContact(AbstractDisplayContact *value);

        void setMessage(const char *value);

        AbstractDisplayContact *contact;
        char *message;
        long timestamp;
        bool me;
    };
}
#endif // MESSAGE_H
