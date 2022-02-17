#include <windows.h>
#include <stdio.h>


int main(){
    
    HANDLE stdouthandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO cshi;
    DWORD attributesbackup;
    GetConsoleScreenBufferInfo(stdouthandle, &cshi);
    attributesbackup = cshi.wAttributes;
    SetConsoleTextAttribute(stdouthandle, FOREGROUND_GREEN );
    printf("A bit of text to test things up.\n");
    SetConsoleTextAttribute(stdouthandle, attributesbackup);
    printf("Back to the old ways.");   
    getchar();
    return ERROR_SUCCESS;
}