/*
╔═════════════════════════════════════════════════════════════╗
║ LCDText                                                     ║
╟─────────────────────────────────────────────────────────────╢
║ This class stores text, think of it like a text box.        ║
╚═════════════════════════════════════════════════════════════╝
*/

#pragma once
#include "LCDModule.h"
class LCDText :
	public LCDModule
{
public:
	LCDText(LCDBase*);
	virtual ~LCDText();
};

class LCDTextBox :
	public LCDText
{
public:
	LCDTextBox();
	virtual ~LCDTextBox();
};

class LCDTextScrolling :
	public LCDText
{
public:
	LCDTextScrolling();
	virtual ~LCDTextScrolling();
};

class LCDTextEditBox :
	public LCDText
{
public:
	LCDTextEditBox();
	virtual ~LCDTextEditBox();
};