//
// Created by sobrito on 01/08/2019.
//

#ifndef MAMUTE_CORE_ABSTRACTDAO_H
#define MAMUTE_CORE_ABSTRACTDAO_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <mutex>

namespace i9corp {

    class DLL_EXPORT AbstractDao {
    public:
        AbstractDao();

        virtual ~AbstractDao();

        /**
         * @return
         */
        virtual int rowCount() = 0;

        void beginModify();

        void endModify();

    protected:
        std::mutex *lock;
    };

}
#endif //MAMUTE_CORE_ABSTRACTDAO_H
