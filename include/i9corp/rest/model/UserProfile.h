#ifndef USERPROFILE_H
#define USERPROFILE_H

#include <i9corp/rest/model/UserProfileStatusType.h>
#include <i9corp/rest/common/I9CorpExportHeader.h>
namespace i9corp {
    class DLL_EXPORT UserProfile {
    public:
        UserProfile();

        virtual ~UserProfile();

        virtual const char *getUserProfilePicture() = 0;

        virtual const char *getUserProfileBranchNumber() = 0;

        virtual const char *getUserProfileAgentNumber() = 0;

        virtual const char *getUserProfileAgentName() = 0;

        virtual UserProfileStatusType getUserProfileState() = 0;
    };
}
#endif // USERPROFILE_H

