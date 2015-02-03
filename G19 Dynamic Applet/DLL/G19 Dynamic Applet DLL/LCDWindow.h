#pragma once
#include "LCDContainer.h"
class LCDWindow :
	public LCDContainer
{
public:
	LCDWindow(LCDBase*);
	virtual ~LCDWindow();
};

