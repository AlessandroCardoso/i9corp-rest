#ifndef I9CORP_AGENT_SETTINGS_H
#define I9CORP_AGENT_SETTINGS_H

#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {
    class DLL_EXPORT Settings {
    public:
        Settings(const char *name, bool enabled, int scope);
        Settings(const char *name, bool enabled);

        Settings();

        ~Settings();

        const char *getName();

        void setName(const char *value);

        bool isEnabled();

        void setEnabled(bool value);
        int getScope() const;

        void setScope(int scope);
    private:
        char *name;
        bool enabled;
        int scope;
    };
}
#endif // I9CORP_AGENT_SETTINGS_H
