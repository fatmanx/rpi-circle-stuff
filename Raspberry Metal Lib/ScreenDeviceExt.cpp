#include "circle/ScreenDeviceExt.h"
#include <circle/util.h>



CScreenDeviceExt::CScreenDeviceExt(unsigned nWidth, unsigned nHeight, boolean bVirtual) : CScreenDevice(nWidth, nHeight, bVirtual)
{
}


CScreenDeviceExt::~CScreenDeviceExt(void)
{
}

void CScreenDeviceExt::DrawLine(int nPosX0, int nPosY0, int nPosX1, int nPosY1, TScreenColor Color)
{
	//if (nPosX < m_nWidth
	//	&& nPosY < m_nHeight)
	//{
	//	m_pBuffer[m_nPitch * nPosY + nPosX] = Color;
	//}

	//int x = nPosX0;
	//int y = nPosY0;


	int sx = nPosX0;
	int sy = nPosX0;

	float l = sqrt3(  (nPosX1 - nPosX0)*(nPosX1 - nPosX0) + (nPosY1 - nPosY0)*(nPosY1 - nPosY0));
	sx = l;
	sy = sx;
	sx = sy;

/*
	float ssx = (nPosX1 - nPosX0);

	int dx = nPosX1 - nPosX0;
	int dy = nPosY1 - nPosY0;

	int cx = nPosX0;
	int cy = nPosY0;
*/




}