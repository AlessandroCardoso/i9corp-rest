//
// Created by sobrito on 01/08/2019.
//

#ifndef MAMUTE_CORE_DAOSTATS_H
#define MAMUTE_CORE_DAOSTATS_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/dao/AbstractDao.h>
#include <i9corp/rest/model/Stats.h>
#include <map>
#include <string>
#include <mutex>

namespace i9corp {

    class DLL_EXPORT DaoStats : public AbstractDao {

    public:
        DaoStats();

        ~DaoStats();

        bool add(const char *data);

        Stats *get();

        Stats *get(const char *data);

        bool remove(const char *data);

        void clear();

        int rowCount() override;

    private:
        std::map<std::string, Stats *> list;
    };
}

#endif //MAMUTE_CORE_DAOSTATS_H
