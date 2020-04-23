//
// Created by sobrito on 26/03/2020.
//

#ifndef MAMUTE_CORE_QUESTIONCHECK_H
#define MAMUTE_CORE_QUESTIONCHECK_H


#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/Question.h>

namespace i9corp {
    class DLL_EXPORT QuestionCheck : public Question {
    public:
        QuestionCheck();

        ~QuestionCheck() override;

        char *getI18NSuccess() const;

        void setI18NSuccess(const char *i18NSuccess);

        char *getI18NFailure() const;

        void setI18NFailure(const char *i18NFailure);

        char *toJsonString() override;

        void fromJson(json mData) override;

    private:
        char *i18nSuccess;
        char *i18nFailure;
    };

}
#endif //MAMUTE_CORE_QUESTIONCHECK_H
