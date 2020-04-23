//
// Created by sobrito on 26/03/2020.
//

#ifndef MAMUTE_CORE_QUESTIONINTERVAL_H
#define MAMUTE_CORE_QUESTIONINTERVAL_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/Question.h>

namespace i9corp {
    class DLL_EXPORT QuestionInterval : public Question {
    public:
        QuestionInterval();

        ~QuestionInterval() override;

        float getRangeStart() const;

        void setRangeStart(float value);

        float getRangeEnd() const;

        void setRangeEnd(float value);

        char *toJsonString() override;

        void fromJson(json mData) override;

    private:
        float rangeStart;
        float rangeEnd;
    };
}

#endif //MAMUTE_CORE_QUESTIONINTERVAL_H
