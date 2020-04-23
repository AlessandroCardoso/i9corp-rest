//
// Created by sobrito on 26/03/2020.
//

#ifndef MAMUTE_CORE_EVALUATION_H
#define MAMUTE_CORE_EVALUATION_H


#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/DataTransfer.h>
#include <i9corp/rest/model/Form.h>
#include <i9corp/rest/model/EvaluationResponse.h>
#include <json/json.hpp>
#include <vector>

using namespace nlohmann;
namespace i9corp {

    class DLL_EXPORT Evaluation : public DataTransfer {
    public:
        Evaluation();

        ~Evaluation() override;

        long getId() const;

        void setId(long id);

        Form *getForm() const;

        void setForm(Form *form);

        char *getTitle() const;

        void setTitle(const char *title);

        long getRecordDate() const;

        void setRecordDate(const char *recordDate);

        char *getRecordFile() const;

        void setRecordFile(const char *recordFile);

        char *getRecordId() const;

        void setRecordId(const char *recordId);

        char *getRecordSource() const;

        void setRecordSource(const char *recordSource);

        char *getRecordDestination() const;

        void setRecordDestination(const char *recordDestination);

        char *getRecordMember() const;

        void setRecordMember(const char *recordMember);

        bool append(EvaluationResponse *response);

        const std::vector<EvaluationResponse *> &getResponses() const;

        long getCreated() const;

        void setCreated(const char *created);

        void setCreated(unsigned long created);

        long getModified() const;

        void setModified(const char *modified);

        void setModified(unsigned long modified);

        char *toJsonString() override;

        void fromJson(json mData) override;

    private:
        long id;
        Form *form;
        char *title;

        long recordDate;
        char *recordFile;
        char *recordId;
        char *recordSource;
        char *recordDestination;
        char *recordMember;
        std::vector<EvaluationResponse *> responses;
        long created;
        long modified;
    };

}
#endif //MAMUTE_CORE_EVALUATION_H
