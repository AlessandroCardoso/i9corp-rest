/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Response.h
 * Author: sobrito
 *
 * Created on 24 de Outubro de 2018, 16:34
 */

#ifndef I9CORPRESPONSE_H
#define I9CORPRESPONSE_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <map>
namespace i9corp {
    class DLL_EXPORT Response {
    public:
        static const int HTTP_CONTINUE = 100;
        static const int HTTP_SWITCHING_PROTOCOLS = 101;
        static const int HTTP_PROCESSING = 102; // RFC2518
        static const int HTTP_EARLY_HINTS = 103; // RFC8297
        static const int HTTP_OK = 200;
        static const int HTTP_CREATED = 201;
        static const int HTTP_ACCEPTED = 202;
        static const int HTTP_NON_AUTHORITATIVE_INFORMATION = 203;
        static const int HTTP_NO_CONTENT = 204;
        static const int HTTP_RESET_CONTENT = 205;
        static const int HTTP_PARTIAL_CONTENT = 206;
        static const int HTTP_MULTI_STATUS = 207; // RFC4918
        static const int HTTP_ALREADY_REPORTED = 208; // RFC5842
        static const int HTTP_IM_USED = 226; // RFC3229
        static const int HTTP_MULTIPLE_CHOICES = 300;
        static const int HTTP_MOVED_PERMANENTLY = 301;
        static const int HTTP_FOUND = 302;
        static const int HTTP_SEE_OTHER = 303;
        static const int HTTP_NOT_MODIFIED = 304;
        static const int HTTP_USE_PROXY = 305;
        static const int HTTP_RESERVED = 306;
        static const int HTTP_TEMPORARY_REDIRECT = 307;
        static const int HTTP_PERMANENTLY_REDIRECT = 308; // RFC7238
        static const int HTTP_BAD_REQUEST = 400;
        static const int HTTP_UNAUTHORIZED = 401;
        static const int HTTP_PAYMENT_REQUIRED = 402;
        static const int HTTP_FORBIDDEN = 403;
        static const int HTTP_NOT_FOUND = 404;
        static const int HTTP_METHOD_NOT_ALLOWED = 405;
        static const int HTTP_NOT_ACCEPTABLE = 406;
        static const int HTTP_PROXY_AUTHENTICATION_REQUIRED = 407;
        static const int HTTP_REQUEST_TIMEOUT = 408;
        static const int HTTP_CONFLICT = 409;
        static const int HTTP_GONE = 410;
        static const int HTTP_LENGTH_REQUIRED = 411;
        static const int HTTP_PRECONDITION_FAILED = 412;
        static const int HTTP_REQUEST_ENTITY_TOO_LARGE = 413;
        static const int HTTP_REQUEST_URI_TOO_LONG = 414;
        static const int HTTP_UNSUPPORTED_MEDIA_TYPE = 415;
        static const int HTTP_REQUESTED_RANGE_NOT_SATISFIABLE = 416;
        static const int HTTP_EXPECTATION_FAILED = 417;
        static const int HTTP_I_AM_A_TEAPOT = 418; // RFC2324
        static const int HTTP_MISDIRECTED_REQUEST = 421; // RFC7540
        static const int HTTP_UNPROCESSABLE_ENTITY = 422; // RFC4918
        static const int HTTP_LOCKED = 423; // RFC4918
        static const int HTTP_FAILED_DEPENDENCY = 424; // RFC4918

        static const int HTTP_RESERVED_FOR_WEBDAV_ADVANCED_COLLECTIONS_EXPIRED_PROPOSAL = 425; // RFC2817
        static const int HTTP_TOO_EARLY = 425; // RFC-ietf-httpbis-replay-04
        static const int HTTP_UPGRADE_REQUIRED = 426; // RFC2817
        static const int HTTP_PRECONDITION_REQUIRED = 428; // RFC6585
        static const int HTTP_TOO_MANY_REQUESTS = 429; // RFC6585
        static const int HTTP_REQUEST_HEADER_FIELDS_TOO_LARGE = 431; // RFC6585
        static const int HTTP_UNAVAILABLE_FOR_LEGAL_REASONS = 451;
        static const int HTTP_INTERNAL_SERVER_ERROR = 500;
        static const int HTTP_NOT_IMPLEMENTED = 501;
        static const int HTTP_BAD_GATEWAY = 502;
        static const int HTTP_SERVICE_UNAVAILABLE = 503;
        static const int HTTP_GATEWAY_TIMEOUT = 504;
        static const int HTTP_VERSION_NOT_SUPPORTED = 505;
        static const int HTTP_VARIANT_ALSO_NEGOTIATES_EXPERIMENTAL = 506; // RFC2295
        static const int HTTP_INSUFFICIENT_STORAGE = 507; // RFC4918
        static const int HTTP_LOOP_DETECTED = 508; // RFC5842
        static const int HTTP_NOT_EXTENDED = 510; // RFC2774
        static const int HTTP_NETWORK_AUTHENTICATION_REQUIRED = 511; // RFC6585

        Response();

        virtual ~Response();

        char *getContent();

        void setContent(const char *content);

        int getStatusCode();

        void setStatusCode(int statusCode);

        char *getStatusText();

        static void cleanup();

    private:
        static std::map<int, char *> createStatusTexts();

        static std::map<int, char *> statusTexts;

        int statusCode;
        char *content;
    };
}
#endif /* I9CORPRESPONSE_H */

