#ifndef USER_PROFILE_STATUS_ENUM_H
#define USER_PROFILE_STATUS_ENUM_H

#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {
    class DLL_EXPORT UserProfileStatus {
    public:
        enum Type : int {
            IDLE,
            PAUSED,
            OFFLINE,
            UNKNOWN,
            RINGING,
            BUSY
        };
    };
}
typedef i9corp::UserProfileStatus::Type UserProfileStatusType;
#endif // USER_PROFILE_STATUS_ENUM_H
