/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   JsonTools.h
 * Author: sobrito
 *
 * Created on 4 de Dezembro de 2018, 09:06
 */

#ifndef JSONTOOLS_H
#define JSONTOOLS_H

#include <json/json.hpp>
#include <i9corp/rest/common/I9CorpExportHeader.h>

using namespace nlohmann;
namespace i9corp {
    class DLL_EXPORT JsonTools {
    public:
        static int getIntegerFromJson(json root, const char *field);

        static bool getBooleanFromJson(json root, const char *field);

        static long getLongFromJson(json root, const char *field);

        static char *getStringFromJson(json root, const char *field);

    private:

    };
}
#endif /* JSONTOOLS_H */

