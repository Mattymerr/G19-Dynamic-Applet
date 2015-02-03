/*
╔═════════════════════════════════════════════════════════════╗
║ LCDBase                                                     ║
╟─────────────────────────────────────────────────────────────╢
║ Base class that most other classes are derived from.        ║
║ It provides common functions that all other classes inherit ║
╚═════════════════════════════════════════════════════════════╝
*/

#pragma once
#include "Handler.h"
class LCDBase
{
public:
	LCDBase(LCDBase*);
	virtual ~LCDBase();
	// This function Init's the object, it also provides it with needed info such as its parent and its ID. returns fail or succeed
	virtual int Init() = 0;
	// this will update the object
	virtual void Update() = 0;
private:
	// this is a pointer to the parent of the component. useful for certain things
	LCDBase* parent;
	// this is a message pump, allowing communication between components
	Handler* messageHandler;
};

