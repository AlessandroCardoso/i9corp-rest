#ifndef PAUSE_H
#define PAUSE_H


#include <i9corp/rest/common/I9CorpExportHeader.h>
#include <i9corp/rest/model/DataTransfer.h>

using namespace i9corp;

namespace i9corp {
    class DLL_EXPORT Pause : public DataTransfer {
    public:
        Pause();

        Pause(int id, const char *name, bool productive, const char *color);

        ~Pause();

        int getId();

        void setId(int value);

        const char *getName();

        void setName(const char *value);


        bool isProductive();

        void setProductive(bool value);

        char *getColor() const;

        void setColor(const char *value);

        const char *getNumber();

        void setNumber(int value);

        void setNumber(const char *number);

        const char *getPicture();

        void setPicture(const char *picture);

        char *toJsonString() override;

        void fromJson(json mData) override;


    private:
        int id;
        char *name;
        char *number;
        char *color;
        char *picture;

    private:
        bool productive;
        bool enabled;
    public:
        bool isEnabled() const;

        void setEnabled(bool enabled);

        bool isStandard() const;

        void setStandard(bool standard);

    private:
        bool standard;
    };
}
#endif // PAUSE_H
