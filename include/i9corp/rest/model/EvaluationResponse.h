//
// Created by sobrito on 26/03/2020.
//

#ifndef MAMUTE_CORE_EVALUATIONRESPONSE_H
#define MAMUTE_CORE_EVALUATIONRESPONSE_H


#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/DataTransfer.h>
#include <json/json.hpp>

using namespace nlohmann;
namespace i9corp {

    class DLL_EXPORT EvaluationResponse : public DataTransfer {
    public:
        EvaluationResponse();

        ~EvaluationResponse() override;

        long getId() const;

        void setId(long id);

        char *getResponse() const;

        void setResponse(const char *response);

        long getQuestionId() const;

        void setQuestionId(long questionId);

        char *getQuestionType() const;

        void setQuestionType(const char *questionType);

        char *getEnunciated() const;

        void setEnunciated(const char *enunciated);

        char *getAccept() const;

        void setAccept(const char *accept);

        float getWeight() const;

        void setWeight(float weight);

        char *toJsonString() override;

        void fromJson(json mData) override;

    private:
        long id;
        char *response;
        long questionId;
        char *questionType;
        char *enunciated;
        char *accept;
        float weight;
    };

}
#endif //MAMUTE_CORE_EVALUATIONRESPONSE_H
