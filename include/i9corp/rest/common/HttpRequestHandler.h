//
// Created by sobrito on 13/02/2019.
//

#ifndef MAMUTE_CORE_HTTP_REQUEST_HANDLER_H
#define MAMUTE_CORE_HTTP_REQUEST_HANDLER_H

#include <i9corp/rest/common/Response.h>
#include <i9corp/rest/common/RequestOptions.h>

using namespace i9corp;

class HttpRequestHandler {
public:
    virtual Response *request(int method, const char *url, const char *body, RequestOptions *options) = 0;
};


#endif //MAMUTE_CORE_HTTP_REQUEST_HANDLER_H
