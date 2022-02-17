#include <windows.h>
#include <stdio.h>

#define FOREGROUND_YELLOW  FOREGROUND_GREEN | FOREGROUND_RED
#define FOREGROUND_PURPLE  FOREGROUND_RED | FOREGROUND_BLUE
#define FOREGROUND_WHITE  FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN
#define FOREGROUND_CYAN FOREGROUND_BLUE |  FOREGROUND_GREEN 
int main(){
    
    HANDLE stdouthandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO cshi;
    DWORD attributesbackup;
    GetConsoleScreenBufferInfo(stdouthandle, &cshi);
    attributesbackup = cshi.wAttributes;
    SetConsoleTextAttribute(stdouthandle, FOREGROUND_BLUE);
    printf("A bit of text to test things up.\n");
    SetConsoleTextAttribute(stdouthandle, attributesbackup);
    printf("Back to the old ways.");   
    getchar();
    return ERROR_SUCCESS;
}