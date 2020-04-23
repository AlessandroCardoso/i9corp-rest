//
// Created by sobrito on 31/07/2019.
//

#ifndef MAMUTE_CORE_BRIDGETOOLS_H
#define MAMUTE_CORE_BRIDGETOOLS_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/TriggerEvent.h>

namespace i9corp {
    class DLL_EXPORT BridgeTools {
    public:
        BridgeTools();

        virtual ~BridgeTools();

        static bool trigger(const char *category, TriggerEvent *event);

        static void triggerEnabled(bool value);

    private:
        static bool doSend(const char *command);

        static bool realtime;
    };
}

#endif //MAMUTE_CORE_BRIDGETOOLS_H
