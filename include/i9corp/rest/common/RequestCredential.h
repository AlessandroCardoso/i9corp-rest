/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RequestCredential.h
 * Author: sobrito
 *
 * Created on 26 de Outubro de 2018, 16:35
 */

#ifndef I9CORPREQUESTCREDENTIAL_H
#define I9CORPREQUESTCREDENTIAL_H

#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {
    class DLL_EXPORT RequestCredential {
    public:
        RequestCredential();

        virtual ~RequestCredential();

        const char *getAccessToken();

        const char *getRefreshToken();

        const char *getClientId();

        const char *getClientSecret();

        void setAccessToken(const char *value);

        void setRefreshToken(const char *value);

        void setClientId(const char *value);

        void setClientSecret(const char *value);

        bool isAuthenticated();

        const char *getScope();

        void setScope(const char *scope);

    private:
        char *scope;
        char *accessToken;
        char *refreshToken;
        char *clientId;
        char *clientSecret;
    };
}
#endif /* I9CORPREQUESTCREDENTIAL_H */

