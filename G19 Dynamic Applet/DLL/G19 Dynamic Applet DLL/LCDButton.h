/*
╔═════════════════════════════════════════════════════════════╗
║ LCDButton                                                   ║
╟─────────────────────────────────────────────────────────────╢
║                                                             ║
╚═════════════════════════════════════════════════════════════╝
*/

#pragma once
#include "LCDModule.h"
class LCDButton :
	public LCDModule
{
public:
	LCDButton(LCDBase*);
	virtual ~LCDButton();
};

