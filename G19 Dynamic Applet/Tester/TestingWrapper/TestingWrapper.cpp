// TestingWrapper.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <iterator>

#define LOGI_LCD_TYPE_MONO    (0x00000001)
#define LOGI_LCD_TYPE_COLOR   (0x00000002)


#define LOGI_LCD_MONO_BUTTON_0 (0x00000001)
#define LOGI_LCD_MONO_BUTTON_1 (0x00000002)
#define LOGI_LCD_MONO_BUTTON_2 (0x00000004)
#define LOGI_LCD_MONO_BUTTON_3 (0x00000008)

#define LOGI_LCD_COLOR_BUTTON_LEFT   (0x00000100)
#define LOGI_LCD_COLOR_BUTTON_RIGHT  (0x00000200)
#define LOGI_LCD_COLOR_BUTTON_OK     (0x00000400)
#define LOGI_LCD_COLOR_BUTTON_CANCEL (0x00000800)
#define LOGI_LCD_COLOR_BUTTON_UP     (0x00001000)
#define LOGI_LCD_COLOR_BUTTON_DOWN   (0x00002000)
#define LOGI_LCD_COLOR_BUTTON_MENU   (0x00004000)

const int LOGI_LCD_MONO_WIDTH = 160;
const int LOGI_LCD_MONO_HEIGHT = 43;

const int LOGI_LCD_COLOR_WIDTH = 320;
const int LOGI_LCD_COLOR_HEIGHT = 240;

BYTE BitmapHolder[320 * 240 * 4];

bool LogiLcdInit(wchar_t* friendlyName, int lcdType) {
	return true;
}

bool LogiLcdIsConnected(int lcdType) {
	return true;
}

bool LogiLcdIsButtonPressed(int button) {
	return false;
}

void LogiLcdUpdate() {
	return;
}

void LogiLcdShutdown() {
	return;
}

// Monochrome LCD functions
bool LogiLcdMonoSetBackground(BYTE monoBitmap[]) {
	return true;
}

bool LogiLcdMonoSetText(int lineNumber, wchar_t* text) {
	return true;
}

// Color LCD functions
bool LogiLcdColorSetBackground(BYTE colorBitmap[320*240*4]) {
	*BitmapHolder = *colorBitmap;
	/*for (int i = 0; i != 320 * 240 * 4; i++) {
		delete colorBitmap[i];
	}*/
	return true;
}

bool LogiLcdColorSetTitle(wchar_t* text, int red = 255, int green = 255, int blue = 255) {
	return true;
}

bool LogiLcdColorSetText(int lineNumber, wchar_t* text, int red = 255, int green = 255, int blue = 255) {
	return true;
}

//UDK functions, use this only if working with UDK
int LogiLcdColorSetBackgroundUDK(BYTE partialBitmap[], int arraySize) {
	return true;
}

int LogiLcdColorResetBackgroundUDK() {
	return true;
}

int LogiLcdMonoSetBackgroundUDK(BYTE partialBitmap[], int arraySize) {
	return true;
}

int LogiLcdMonoResetBackgroundUDK() {
	return true;
}

// My custom interfacing functions
BYTE* getBitmap() {
	return BitmapHolder;
}