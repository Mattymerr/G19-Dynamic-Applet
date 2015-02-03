/*
╔═════════════════════════════════════════════════════════════╗
║ LCDPage                                                     ║
╟─────────────────────────────────────────────────────────────╢
║ Pages contain modules (usually containers of modules)       ║
║ they also use tabs for their UI                             ║
╚═════════════════════════════════════════════════════════════╝
*/

#pragma once
#include "LCDWindow.h"
class LCDPage : public LCDWindow
{
public:
	LCDPage(LCDBase*);
	virtual ~LCDPage();
};

