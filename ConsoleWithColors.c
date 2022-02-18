#include "ConsoleWithColors.h"
#include <windows.h>
#include <stdio.h>
void PrintText(const char * text, int color){
    HANDLE stdouthandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO cshi;
    DWORD attributesbackup;
    GetConsoleScreenBufferInfo(stdouthandle, &cshi);
    attributesbackup = cshi.wAttributes;
    SetConsoleTextAttribute(stdouthandle, color);
    printf(text);
    SetConsoleTextAttribute(stdouthandle, attributesbackup);
   
}
   