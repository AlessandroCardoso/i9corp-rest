//
// Created by sobrito on 30/07/2019.
//

#ifndef MAMUTE_CORE_CDR_H
#define MAMUTE_CORE_CDR_H

#include <i9corp/rest/model/AbstractRow.h>
#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/Qdr.h>

namespace i9corp {

    class DLL_EXPORT Cdr : public AbstractRow {

    public:
        enum CallType : int {
            InternalType,
            IncomingType,
            OutgoingType
        };
        enum CdrColumns : int {
            SourceColumn,
            DestinationColumn,
            LastApplicationColumn,
            DispositionColumn,
            StartTimeColumn,
            AnswerTimeColumn,
            EndTimeColumn,
            StartRingTimeColumn,
        };

        Cdr();

        ~Cdr();


        const char *getSource() const;

        void setSource(const char *source);

        const char *getDestination() const;

        void setDestination(const char *destination);

        const char *getLastApplication() const;

        void setLastApplication(const char *lastApplication);

        const char *getDisposition() const;

        void setDisposition(const char *disposition);

        long getStartTime() const;

        void setStartTime(long startTime);

        long getAnswerTime() const;

        void setAnswerTime(long answerTime);

        long getEndTime() const;

        void setEndTime(long endTime);

        const void *data(int column) override;

        bool setData(int column, const void *value) override;

        long getStartRingTime() const;

        void setStartRingTime(long startRingTime);

        static Cdr::CallType getType(const char *src, const char *dest);

    private:
        char *source;
        char *destination;
        char *lastApplication;
        char *disposition;

        long startRingTime;
        long startTime;
        long answerTime;
        long endTime;
    };
}

#endif //MAMUTE_CORE_CDR_H
