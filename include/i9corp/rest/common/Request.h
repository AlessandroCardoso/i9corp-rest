/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   I9CorpHttp.h
 * Author: sobrito
 *
 * Created on 24 de Outubro de 2018, 16:24
 */

#ifndef I9CORP_REQUEST_H
#define I9CORP_REQUEST_H

#ifndef I9CORP_BUFFER_MESSAGE
#define I9CORP_BUFFER_MESSAGE 4096
#endif

#include <i9corp/rest/common/RequestParserCallback.h>
#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/common/RequestOptions.h>
#include <i9corp/rest/common/Response.h>
#include <i9corp/rest/common/RequestCredential.h>
#include <i9corp/rest/common/HttpRequestHandler.h>

#include <json/json.hpp>

using namespace nlohmann;

using namespace i9corp;
namespace i9corp {
    class DLL_EXPORT Request {
    public:
        static const int METHOD_GET = 0;
        static const int METHOD_PUT = 1;
        static const int METHOD_POST = 2;
        static const int METHOD_DELETE = 3;

        static Response *get(const char *url);

        static Response *get(const char *url, RequestOptions *options);

        static Response *post(const char *url, const char *body, RequestOptions *options);

        static Response *put(const char *url, const char *body, RequestOptions *options);

        static Response *drop(const char *url, RequestOptions *options);

        static bool
        sigIn(const char *url, RequestCredential *credential, const char *username, const char *password);

        static bool
        getJson(const char *url, RequestCredential *credential, RequestParserCallback *callback);

        static Request *getInstance();

        ~Request();

    protected:
        Response *request(int method, const char *url, const char *body, RequestOptions *options);

        static size_t callbackDataWrite(void *contents, size_t size, size_t nmemb, void *userp);

        static size_t callbackDataRead(void *contents, size_t size, size_t nmemb, void *userp);

    private:
        static bool refreshToken(const char *url, RequestCredential *credential);

        static bool updateCredential(Response *response, RequestCredential *credential);

        static Request *instance;
        HttpRequestHandler *handler;
    public:
        void setHandler(HttpRequestHandler *handler);

    protected:

        Request();
    };
}
#endif /* I9CORP_REQUEST_H */

