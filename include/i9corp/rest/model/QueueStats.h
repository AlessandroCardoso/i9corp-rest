//
// Created by sobrito on 17/05/2019.
//

#ifndef I9CORP_REST_QUEUESTATS_H
#define I9CORP_REST_QUEUESTATS_H

#include <i9corp/rest/model/DataTransfer.h>
#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <json/json.hpp>

using namespace nlohmann;

namespace i9corp {

    class DLL_EXPORT QueueStats : public DataTransfer {
    public:
        QueueStats();

        ~QueueStats();


    public:
        double getSla() const;

        void setSla(double sla);

        int getPaused() const;

        void setPaused(int paused);

        int getReceived() const;

        void setReceived(int received);

        int getAnswered() const;

        void setAnswered(int answered);

        int getAbandoned() const;

        void setAbandoned(int abandoned);


        int getSpeaking() const;

        void setSpeaking(int speaking);

        int getWaiting() const;

        void setWaiting(int waiting);

        int getOnline() const;

        void setOnline(int online);

        int getTma() const;

        int getTme() const;



    public:
        char *getDate() const;

        void setDate(const char *date);

        int getPeriod() const;

        void setPeriod(int period);

        int getTransshipment() const;

        void setTransshipment(int transshipment);

        char *toJsonString() override;

        void fromJson(json mData) override;

    private:
        double sla;
        char *date;
        int period;
        int paused;
        int received;
        int answered;
        int abandoned;
        int transshipment;
        int speaking;
        int waiting;
        int online;
        int tta;
        int ttea;
        int tteab;
        char *extension;
    public:
        char *getExtension() const;

        void setExtension(const char *extension);

    public:
        int getTta() const;

        void setTta(int tta);

        int getTtea() const;

        void setTtea(int ttea);

        int getTteab() const;

        void setTteab(int tteab);


    };
}

#endif //I9CORP_REST_QUEUESTATS_H
