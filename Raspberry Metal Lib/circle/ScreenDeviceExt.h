#ifndef _circle_screen_ext_h
#define _circle_screen_ext_h

#include <circle/screen.h>

class CScreenDeviceExt :
	public CScreenDevice
{
public:
	CScreenDeviceExt(unsigned nWidth, unsigned nHeight, boolean bVirtual = FALSE);
	~CScreenDeviceExt(void);
	void DrawLine(int nPosX0, int nPosY0, int nPosX1, int nPosY1, TScreenColor Color);
	
};



#endif