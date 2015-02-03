/*
╔═════════════════════════════════════════════════════════════╗
║ LCDApplet                                                   ║
╟─────────────────────────────────────────────────────────────╢
║                                                             ║
╚═════════════════════════════════════════════════════════════╝
*/

#pragma once
#include "LCDBase.h"
class LCDApplet : public LCDBase
{
public:
	LCDApplet(LCDBase*);
	virtual ~LCDApplet();
};

