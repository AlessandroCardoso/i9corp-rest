/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DebuggerTools.h
 * Author: sobrito
 *
 * Created on 3 de Dezembro de 2018, 15:36
 */

#ifndef DEBUGGERTOOLS_H
#define DEBUGGERTOOLS_H


#define DEBUG_TERMINAL_COLOR_RED "\033[31m"
#define DEBUG_TERMINAL_COLOR_BLUE "\033[34m"
#define DEBUG_TERMINAL_COLOR_GREEN "\033[34m"
#define DEBUG_TERMINAL_COLOR_GRAY "\033[90m"
#define DEBUG_TERMINAL_COLOR_YELLOW "\033[33m"
#define DEBUG_TERMINAL_COLOR_DEFAULT "\033[0m"

#include <i9corp/rest/common/I9CorpExportHeader.h>

namespace i9corp {
    class DLL_EXPORT DebuggerTools {
    public:
        static bool isDebug();

        static void setDebug(bool debug, int sample);

        static void setDebug(bool debug);

        static void verbose(const char *format, ...);

        static void notice(const char *format, ...);

        static void error(const char *format, ...);

        static void fatal(const char *format, ...);

        static void toFile(const char *filename, const char *format, ...);

        static int getSample();

    private:
        DebuggerTools();

        static int sample;
        static bool debug;
        static bool log;
    public:
        static bool isLog();

        static void setLog(bool log);
    };
}
#endif /* DEBUGGERTOOLS_H */

