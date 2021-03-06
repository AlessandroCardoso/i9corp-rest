//
// Created by sobrito on 26/03/2020.
//

#ifndef MAMUTE_CORE_QUESTIONOPTION_H
#define MAMUTE_CORE_QUESTIONOPTION_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/Question.h>
#include <vector>

namespace i9corp {
    class DLL_EXPORT QuestionOption : public Question {
    public:
        QuestionOption();

        ~QuestionOption() override;

        const std::vector<char *> &getElements() const;

        bool append(const char *value);
        bool remove(const char *value);

        char *toJsonString() override;

        void fromJson(json mData) override;

    private :
        bool doRemove(const char *value);
        std::vector<char *> elements;
    };
}

#endif //MAMUTE_CORE_QUESTIONOPTION_H
