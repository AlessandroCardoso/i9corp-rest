/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RequestOptions.h
 * Author: sobrito
 *
 * Created on 24 de Outubro de 2018, 16:21
 */

#ifndef I9CORP_REQUEST_OPTIONS_H
#define I9CORP_REQUEST_OPTIONS_H
#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <map>
#include <string>

namespace i9corp {
    class DLL_EXPORT RequestOptions {
    public:
        RequestOptions();

        virtual ~RequestOptions();

        const char *getBody();

        void setBody(char *body);

        const char *getUrl();

        void setUrl(char *url);

        const char *getAccessToken();

        void setAccessToken(const char *value);

        const char *getRefreshToken();

        void setRefreshToken(const char *value);

        std::map<std::string, char *> getHeaders();

        void appendHeader(const char *name, const char *value);

        void appendParam(const char *name, const char *value);

        char *createQueryParams();

    private:
        int method;
        char *accessToken;
        char *refreshToken;
        char *url;
        char *body;
        std::map<std::string, char *> params;
        std::map<std::string, char *> headers;
        bool withCredentials;

        int getQueryParamsLength();
    };
}
#endif /* I9CORP_REQUEST_OPTIONS_H */

