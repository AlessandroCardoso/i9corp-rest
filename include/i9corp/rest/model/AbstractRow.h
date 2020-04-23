//
// Created by sobrito on 30/07/2019.
//

#ifndef MAMUTE_CORE_ABSTRACTROW_H
#define MAMUTE_CORE_ABSTRACTROW_H

#include <vector>
#include <string>
#include <map>

namespace i9corp {

    class AbstractRow {
    public:
        virtual ~AbstractRow();

        int columnCount();

        virtual const void *data(int column) = 0;

        virtual bool setData(int column, const void *value) = 0;

        const void *data(const char *column);


        const std::map<std::string, int> &getColumns() const;

    protected:

        bool addColumn(const char *name, int index);

    private:
        std::map<std::string, int> columns;

    };
}
#endif //MAMUTE_CORE_ABSTRACTROW_H
