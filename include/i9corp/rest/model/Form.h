//
// Created by sobrito on 26/03/2020.
//

#ifndef MAMUTE_CORE_FORM_H
#define MAMUTE_CORE_FORM_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/DataTransfer.h>
#include <i9corp/rest/model/Question.h>
#include <vector>

namespace i9corp {

    class DLL_EXPORT Form : public DataTransfer {
    public:
        Form();

        ~Form() override;

        long getId() const;

        void setId(long id);

        char *getTitle() const;

        void setTitle(const char *title);

        const std::vector<Question *> &getQuestions() const;

        char *toJsonString() override;

        void fromJson(json mData) override;

    private:
        long id;
        char *title;
        std::vector<Question *> questions;
    };
}


#endif //MAMUTE_CORE_FORM_H
