#ifndef _circle_screen_ext_h
#define _circle_screen_ext_h

#include <circle/screen.h>

class CScreenDeviceExt :
	public CScreenDevice
{
public:
	CScreenDeviceExt(unsigned nWidth, unsigned nHeight, boolean bVirtual = FALSE);
	~CScreenDeviceExt(void);
};



#endif