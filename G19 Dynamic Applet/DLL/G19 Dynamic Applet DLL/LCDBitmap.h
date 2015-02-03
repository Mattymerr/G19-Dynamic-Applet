/*
╔═════════════════════════════════════════════════════════════╗
║ LCDBitmap                                                   ║
╟─────────────────────────────────────────────────────────────╢
║ This derived class of Module holds a bitmap.                ║
║ The bitmap can be either a kind of drawing area             ║
║ (not recommended) or to store textures (skins etc)          ║
╟─────────────────────────────────────────────────────────────╢
║ It is reccomended to register a texture with the            ║
║ TextureHandler(?) rather than loading it into a bitmap.     ║
║ The reason for this is that a bitmap can refference a loaded║
║ texture if needed which reduces the chance of unknown bugs  ║
╚═════════════════════════════════════════════════════════════╝
*/

#pragma once
#include "LCDModule.h"
class LCDBitmap : public LCDModule
{
public:
	LCDBitmap(LCDBase*);
	virtual ~LCDBitmap();
};

