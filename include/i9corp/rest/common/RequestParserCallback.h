/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RequestParserCallback.h
 * Author: sobrito
 *
 * Created on 4 de Dezembro de 2018, 09:27
 */

#ifndef I9CORP_REQUEST_PARSER_CALLBACK_H
#define I9CORP_REQUEST_PARSER_CALLBACK_H


#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <json/json.hpp>

using namespace nlohmann;
namespace i9corp {
    class DLL_EXPORT RequestParserCallback {
    public:
        virtual bool onRequestParserCallback(json root) = 0;
    };
}
#endif /* I9CORP_REQUEST_PARSER_CALLBACK_H */

