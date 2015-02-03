/*
╔═════════════════════════════════════════════════════════════╗
║ LCDSettings                                                 ║
╟─────────────────────────────────────────────────────────────╢
║ This is a container for different settings                  ║
╚═════════════════════════════════════════════════════════════╝
*/

#pragma once
#include "LCDBase.h"
class LCDSettings :
	public LCDBase
{
public:
	LCDSettings(LCDBase*);
	virtual ~LCDSettings();
};

