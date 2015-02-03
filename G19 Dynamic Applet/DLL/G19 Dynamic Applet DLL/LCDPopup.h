/*
╔═════════════════════════════════════════════════════════════╗
║ LCDPopup                                                    ║
╟─────────────────────────────────────────────────────────────╢
║                                                             ║
╚═════════════════════════════════════════════════════════════╝
*/

#pragma once
#include "LCDWindow.h"
class LCDPopup :
	public LCDWindow
{
public:
	LCDPopup(LCDBase*);
	virtual ~LCDPopup();
};

