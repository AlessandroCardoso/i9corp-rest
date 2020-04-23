//
// Created by sobrito on 12/02/2019.
//

#ifndef I9CORP_REST_I9CORP_EXPORT_HEADER_H
#define I9CORP_REST_I9CORP_EXPORT_HEADER_H



#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#ifdef MAKE_DLL
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT __declspec(dllimport)
#endif
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
}
#endif


#endif //I9CORP_REST_I9CORP_EXPORT_HEADER_H
