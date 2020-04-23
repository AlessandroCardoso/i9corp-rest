//
// Created by sobrito on 26/03/2020.
//

#ifndef MAMUTE_CORE_QUESTIONTEXT_H
#define MAMUTE_CORE_QUESTIONTEXT_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/Question.h>
#include <vector>

namespace i9corp {
    class DLL_EXPORT QuestionText : public Question {
    public:
        QuestionText();

        ~QuestionText() override;

        char *toJsonString() override;

        void fromJson(json j) override ;
    };
}


#endif //MAMUTE_CORE_QUESTIONTEXT_H
