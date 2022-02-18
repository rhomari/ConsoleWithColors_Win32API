package main

// #include "ConsoleWithColors.h"
import "C"

const (
	FOREGROUND_BLUE      = 0x0001 // text color contains blue.
	FOREGROUND_GREEN     = 0x0002 // text color contains green.
	FOREGROUND_RED       = 0x0004 // text color contains red.
	FOREGROUND_INTENSITY = 0x0008 // text color is intensified.
)

func main() {
	text := "This is my Text\n"

	C.PrintText(C.CString(text), FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY) //mixing colors to get new ones
	C.PrintText(C.CString(text), FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_INTENSITY)
	C.PrintText(C.CString(text), FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY)
	C.PrintText(C.CString(text), FOREGROUND_BLUE|FOREGROUND_RED)
	C.PrintText(C.CString(text), FOREGROUND_BLUE|FOREGROUND_GREEN)
	C.PrintText(C.CString(text), FOREGROUND_GREEN|FOREGROUND_RED)
	C.PrintText(C.CString(text), FOREGROUND_BLUE)
	C.PrintText(C.CString(text), FOREGROUND_RED)
	C.PrintText(C.CString(text), FOREGROUND_GREEN)
	C.PrintText(C.CString(text), FOREGROUND_BLUE|FOREGROUND_INTENSITY)
	C.PrintText(C.CString(text), FOREGROUND_RED|FOREGROUND_INTENSITY)
	C.PrintText(C.CString(text), FOREGROUND_GREEN|FOREGROUND_INTENSITY)

}
