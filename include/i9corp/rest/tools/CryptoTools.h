/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 *
 *  const std::string s = "Sileno de Oliveira Brito";
 *  const char *mData = nullptr;
 *  std::string encoded = CryptoTools::base64Encode(reinterpret_cast<const unsigned char *>(s.c_str()), s.length());
 *  mData = encoded.c_str();
 *  std::string decoded = CryptoTools::base64Decode(encoded);
 *  mData = decoded.c_str();
 */

/*
 * File:   CryptoTools.h
 * Author: sobrito
 *
 * Created on 3 de Dezembro de 2018, 15:14
 */

#ifndef I9CORP_CRYPTO_TOOLS_H
#define I9CORP_CRYPTO_TOOLS_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <string>

namespace i9corp {
    class DLL_EXPORT CryptoTools {
    public:
        static char *encode(const char *key, const char *text);

        static char *decode(const char *key, const char *text);

        static std::string base64Encode(unsigned char const *text, unsigned int len);

        static std::string base64Decode(std::string const &text);

    private:
        CryptoTools();

        static char *cypher(const char *key, const char *text, int action);
    };
}

#endif
