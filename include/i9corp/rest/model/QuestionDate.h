//
// Created by sobrito on 26/03/2020.
//

#ifndef MAMUTE_CORE_QUESTIONDATE_H
#define MAMUTE_CORE_QUESTIONDATE_H


#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/Question.h>

namespace i9corp {
    class DLL_EXPORT QuestionDate : public Question {
    public:
        QuestionDate();

        ~QuestionDate() override;

        long getDateStart() const;

        void setDateStart(const char *value);

        void setDateStart(unsigned long value);

        long getDateEnd() const;

        void setDateEnd(const char *value);

        void setDateEnd(unsigned long value);

        char *toJsonString() override;

        void fromJson(json mData) override;

    private:
        unsigned long dateStart;
        unsigned long dateEnd;
    };
}


#endif //MAMUTE_CORE_QUESTIONDATE_H
