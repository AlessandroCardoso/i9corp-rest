/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DateTimeTools.h
 * Author: sobrito
 *
 * Created on 12 de Dezembro de 2018, 17:18
 */

#ifndef DATETIMETOOLS_H
#define DATETIMETOOLS_H

#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {
    class DLL_EXPORT DateTimeTools {
    public:
        DateTimeTools();

        virtual ~DateTimeTools();

        static long getUnixTimestampFromString(const char *date);

        static long getUnixTimestamp();

        static int getCurrentHour();

        static char *getCurrentDate();

        static int getHour(long unixTimestamp);

        static char *getDate(long unixTimestamp);

        static char *secToTime(long time);

        static bool isValidDate(const char *date);

        static bool isLeapYear(int year);

        static char *getDateTime(long unixTimestamp);

        static char *fromUnixTimestamp(long unixTimestamp, const char *format);

        static char *fromUnixTimestamp(long unixTimestamp);

        static bool isToday(long unixTimestamp);
    };
}
#endif /* DATETIMETOOLS_H */

