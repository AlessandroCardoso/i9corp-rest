//
// Created by sobrito on 26/03/2020.
//

#ifndef MAMUTE_CORE_QUESTION_H
#define MAMUTE_CORE_QUESTION_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/DataTransfer.h>
#include <json/json.hpp>

using namespace nlohmann;
namespace i9corp {

    class DLL_EXPORT Question : public DataTransfer {
    public:
        explicit Question(const char *type);

        ~Question() override;

        long getId() const;

        void setId(long id);

        char *getEnunciated() const;

        void setEnunciated(const char *enunciated);

        char *getAccept() const;

        void setAccept(const char *accept);

        float getWeight() const;

        void setWeight(float weight);

        const char *getType();

        void fromJson(json mData) override;

    protected:
        void toJson(json &j);

    private:
        long id;
        char *enunciated;
        char *accept;
        float weight;
        char *type;
    };
}


#endif //MAMUTE_CORE_QUESTION_H
