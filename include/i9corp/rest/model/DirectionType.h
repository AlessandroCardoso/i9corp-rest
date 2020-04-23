//
// Created by sobrito on 17/05/2019.
//

#ifndef I9CORP_REST_DIRECTIONTYPE_H
#define I9CORP_REST_DIRECTIONTYPE_H

#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {

    class DLL_EXPORT DirectionType {
    public:
        enum Value {
            INCOMING,
            OUTGOING,
            INTERNAL
        };
    private:
        explicit DirectionType();
    };
}

typedef i9corp::DirectionType::Value DirectionTypeValue;

#endif //I9CORP_REST_DIRECTIONTYPE_H
