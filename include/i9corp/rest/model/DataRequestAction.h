//
// Created by sobrito on 05/05/2019.
//

#ifndef I9CORP_REST_DATAREQUESTACTION_H
#define I9CORP_REST_DATAREQUESTACTION_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <string>
#include <map>
#include <sstream>

#include <json/json.hpp>
using namespace nlohmann;
namespace i9corp {

    class DLL_EXPORT DataRequestAction {
    public:
        DataRequestAction();
        DataRequestAction(const char *action);
        DataRequestAction(const char *action, const char *event, int index);
        virtual ~DataRequestAction();
        void setParameter(const char *field, long value);
        void setParameter(const char *field, bool value);
        void setParameter(const char *field, int value);
        void setParameter(const char *field, const char *value, ...);
        void setEvent(const char *event);
        char *toJson();
        void setAction(const char *action);
        const char* getAction();
        const char* getEvent();
        const char *getParameterByField(const char *field);
        void verbose(const char *prefix);
        void verbose();
        const void* getCustomData();
        const char *getRaw();
        void setRaw(const char *raw);
        static DataRequestAction *fromJson(const char *mData);
        long getIndex();
        void setIndex(long index);
        void setCustomData(void *data, void (*fnRemoveCustomData)(void *));
    private:
        char *action;
        char *event;
        void *customData;
        void (*fnRemoveCustomData)(void *);
        char *raw;
        long index;
        std::map<std::string, char *> parameters;
    };


}
#endif //I9CORP_REST_DATAREQUESTACTION_H
