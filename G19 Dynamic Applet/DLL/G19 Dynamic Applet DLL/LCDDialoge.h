/*
╔═════════════════════════════════════════════════════════════╗
║ LCDDialogue                                                 ║
╟─────────────────────────────────────────────────────────────╢
║                                                             ║
╚═════════════════════════════════════════════════════════════╝
*/

#pragma once
#include "LCDPopup.h"
class LCDDialoge :
	public LCDPopup
{
public:
	LCDDialoge(LCDBase*);
	virtual ~LCDDialoge();
};

