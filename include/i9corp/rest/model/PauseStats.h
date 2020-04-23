//
// Created by sobrito on 04/04/2019.
//

#ifndef AGENTX_PAUSESTATS_H
#define AGENTX_PAUSESTATS_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/Pause.h>

namespace i9corp {

    class DLL_EXPORT PauseStats {
    public:
        PauseStats();

        Pause *getPause();

        void setPause(Pause *value);

        int getDuration() const;

        void setDuration(int value);

        long getUnixTimestampPauseStart() const;

        void setUnixTimestampPauseStart(long value);

    private:
        Pause *pause;
        int duration;
        long unixTimestampPauseStart;
    };
}


#endif //AGENTX_PAUSESTATS_H
