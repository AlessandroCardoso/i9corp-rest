//
// Created by sobrito on 20/02/2019.
//

#ifndef MAMUTE_CORE_EXCEPTION_H
#define MAMUTE_CORE_EXCEPTION_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <exception>

namespace i9corp {
    class DLL_EXPORT Exception : public std::exception {
    public:
        Exception(int code, const char *message, ...);

        ~Exception() override;

    private:
        int code;
        char *message;
    public:
        int getCode() const;

        char *getMessage() const;
    };
}

#endif //MAMUTE_CORE_EXCEPTION_H
