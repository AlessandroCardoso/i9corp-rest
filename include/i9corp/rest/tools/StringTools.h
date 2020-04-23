/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StringTools.h
 * Author: sobrito
 *
 * Created on 3 de Dezembro de 2018, 15:14
 */

#ifndef STRINGTOOLS_H
#define STRINGTOOLS_H

#include <algorithm>
#include <cctype>
#include <locale>
#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {
    class DLL_EXPORT StringTools {
    public:
        StringTools();

        virtual ~StringTools();

        // trim from start (in place)
        static void ltrim(std::string &s);

        // trim from end (in place)
        static void rtrim(std::string &s);

        // trim from both ends (in place)
        static void trim(std::string &s);

        static bool contains(const char *text, const char *part);

        static bool isEquals(const char *s1, const char *s2);

        static bool isNumber(const char *value);

        static char *md5(const char *string);

        static void ltrim(std::string &s, const char *v);

        static void trim(std::string &s, const char *v);

        static void rtrim(std::string &s, const char *v);

        static std::string toUpper(std::string s);
    };
}
#endif /* STRINGTOOLS_H */

