//
// Created by sobrito on 05/02/2020.
//

#ifndef MAMUTE_CORE_NOTIFICATIONTYPE_H
#define MAMUTE_CORE_NOTIFICATIONTYPE_H


#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {

    class DLL_EXPORT NotificationType {
    public:
        enum NotificationTypeValue : int {
            CALL,
            MESSAGE,
            LOGIN,
            LOGOUT,
            PAUSE,
            OTHER
        };
    };

}

#endif //MAMUTE_CORE_NOTIFICATIONTYPE_H
