/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   WebSocketResponse.h
 * Author: sobrito
 *
 * Created on 6 de Dezembro de 2018, 18:34
 */

#ifndef WEB_SOCKET_RESPONSE_H
#define WEB_SOCKET_RESPONSE_H

#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/DataTransfer.h>
#include <map>
#include <string>
#include <vector>
#include <json/json.hpp>

using namespace nlohmann;

#define I9CORP_EVENT_BRANCH_RECENT_CALLS "branch_recent_call"
#define I9CORP_EVENT_AGENT_RECENT_CALLS "agent_recent_call"
#define I9CORP_EVENT_AGENT_UPDATE "agent_update"
#define I9CORP_EVENT_RELOAD_BRANCHES "reload_branches"
#define I9CORP_EVENT_RELOAD_QUEUES "reload_queues"
#define I9CORP_EVENT_RELOAD_CHANNELS "reload_channels"
#define I9CORP_EVENT_RELOAD_CONTACTS "reload_contacts"
#define I9CORP_EVENT_RELOAD_PAUSES "reload_pauses"
#define I9CORP_EVENT_RELOAD_AGENTS "reload_agents"
#define I9CORP_EVENT_GET_EVENTS "reload_events"
#define I9CORP_EVENT_AUTHENTICATION "authentication"
#define I9CORP_EVENT_ERROR "error"
#define I9CORP_EVENT_CONNECTION "connect"
#define I9CORP_EVENT_DISCONNECT "disconnect"
#define I9CORP_EVENT_CHANGE_PASSWORD "change_password"
#define I9CORP_EVENT_RECOVER_PASSWORD "recover_password"
#define I9CORP_EVENT_AGENT_QUEUE_LOGIN "queue_add"
#define I9CORP_EVENT_AGENT_QUEUE_LOGOUT "queue_remove"
#define I9CORP_EVENT_PAUSE "pause_event"
#define I9CORP_EVENT_UNPAUSE "unpause_event"
#define I9CORP_EVENT_EVALUATION "evaluation_event"
#define I9CORP_EVENT_ONLINE "unpause_event"
#define I9CORP_EVENT_AGENT_LOGIN "agent_login_event"
#define I9CORP_EVENT_AGENT_LOGOUT "agent_logout_event"
#define I9CORP_EVENT_UPDATE_AGENT_QUEUE "update_agent_queue"
#define I9CORP_EVENT_OFFLINE "disconnect_event"
#define I9CORP_EVENT_DEVICE_CHANGE_STATUS "device_change_status"
#define I9CORP_EVENT_CALL_CHANGE_STATUS "call_change_status"
#define I9CORP_EVENT_AGENT_CHANGE_STATS "agent_change_status"
#define I9CORP_EVENT_BAD_AUTHENTICATION "bad_authentication"
#define I9CORP_EVENT_CALL_CHANGE "call_change"
#define I9CORP_EVENT_QUEUE_CHANGE_STATS "queue_change_stats"
#define I9CORP_EVENT_QUEUE_CHANGE_CALL "queue_change_call"
#define I9CORP_EVENT_CALL_CHANGE_STATS "call_change_stats"
#define I9CORP_EVENT_CUSTOM_OPTIONS "custom_options"
#define I9CORP_EVENT_FIND_FORM_PROFILE "find_form_profile"
#define I9CORP_EVENT_FEEDBACK "device_feeedback"
#define I9CORP_EVENT_SPY "device_spy"
#define I9CORP_EVENT_PICKUP "device_pickup"
#define I9CORP_EVENT_DIAL "device_dial"
#define I9CORP_EVENT_RINGING "device_ringing"
#define I9CORP_EVENT_ANSWER "device_answer"
#define I9CORP_EVENT_TRANSFER "transfer"
#define I9CORP_EVENT_HANGUP "hangup"
#define I9CORP_EVENT_REQUEST_HANGUP "request_hangup"
#define I9CORP_EVENT_INCOMING "incoming"
#define I9CORP_EVENT_CALLBACK_REQUEST "callback_request"
#define I9CORP_EVENT_PING "ping"
#define I9CORP_EVENT_PONG "pong"

#define WEB_SOCKET_VIEW_DEVICE "DEVICE"
#define WEB_SOCKET_VIEW_SMS "SMS"
#define WEB_SOCKET_VIEW_CAMPAIGN "CAMPAIGN"

namespace i9corp {
    class DLL_EXPORT WebSocketResponse : public DataTransfer {
    public:
        WebSocketResponse();

        WebSocketResponse(const char *tagValue, const char *view, const char *event);

        virtual ~WebSocketResponse();

        const char *getHeader();

        void setHeader(const char *header);

        const char *getBearer();

        void setBearer(const char *bearer);

        const char *getTag();

        void setTag(const char *tag);

        const char *getView();

        void setView(const char *view);

        const char *getEvent();

        void setEvent(const char *event);

        std::map<std::string, char *> getProperties();

        void setProperty(const char *field, int value);

        void setProperty(const char *field, const char *value);

        const char *getProperty(const char *field);

        const char *getRaw();

        void setRaw(const char *raw);

        void setEntity(const char *value);

        const char *getEntity();

        const char *getCollection();

        void setCollection(const char *value);

        void setCollectionValue(const char *value);

        std::vector<char *> getCollections();

        char *toJsonString() override;

        void fromJson(json mData) override;

    private:
        char *header; // TagValue do equipamento
        char *bearer; // access token
        char *tag; // extra value
        char *view;
        char *event;
        char *raw;
        char *entity;
        char *collection;

    private:
        std::map<std::string, char *> properties;
        std::vector<char *> collections;

    };
}
#endif /* WEB_SOCKET_RESPONSE_H */

