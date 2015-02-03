/*
╔══════════════════════════════════════════════════════════════╗
║ LCDModule                                                    ║
╟──────────────────────────────────────────────────────────────╢
║ This is the base class that all Modules (Mostly UI Elements) ║
║ derive from. it is mostly just to provide a distinction      ║
║ between modules and other class types.                       ║
╚══════════════════════════════════════════════════════════════╝
*/

#pragma once
#include "LCDBase.h"
class LCDModule : public LCDBase
{
public:
	LCDModule(LCDBase*);
	virtual ~LCDModule();
};

