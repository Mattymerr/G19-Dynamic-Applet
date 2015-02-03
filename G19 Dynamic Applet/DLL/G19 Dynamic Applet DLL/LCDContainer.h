/*
╔═════════════════════════════════════════════════════════════╗
║ LCDContainer                                                ║
╟─────────────────────────────────────────────────────────────╢
║ Containers are usually empty and can used to group a        ║
║ collection of items (such as in a custom component with     ║
║ dials and switches or custom scaling) or to provide extra   ║
║ functions or custom drawing things(?) (such as the pages    ║
║ provided to combine modules)                                ║
╚═════════════════════════════════════════════════════════════╝
*/

#pragma once
#include "LCDModule.h"
class LCDContainer : public LCDModule
{
public:
	LCDContainer(LCDBase*);
	virtual ~LCDContainer();
};

