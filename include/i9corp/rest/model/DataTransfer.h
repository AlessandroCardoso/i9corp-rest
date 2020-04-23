//
// Created by sobrito on 12/02/2019.
//

#ifndef I9CORP_REST_DATATRANSFER_H
#define I9CORP_REST_DATATRANSFER_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <json/json.hpp>
using namespace nlohmann;

namespace i9corp {

    class DLL_EXPORT DataTransfer {
    public:
        virtual ~DataTransfer();

        virtual char *toJsonString() = 0;

        virtual void fromJson(json mData) = 0;
    };
}

#endif //I9CORP_REST_DATATRANSFER_H
