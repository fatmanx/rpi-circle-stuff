//
// kernel.cpp
//
// Circle - A C++ bare metal environment for Raspberry Pi
// Copyright (C) 2014-2016  R. Stange <rsta2@o2online.de>
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include "kernel.h"

#include "isine.h"

#include <circle/string.h>
#include <circle/util.h>


CKernel::CKernel(void)
	: m_Memory(true),	// set this to TRUE to enable MMU and to boost performance
	//m_Screen(m_Options.GetWidth(), m_Options.GetHeight())
	m_Screen(320, 200)
{
}

CKernel::~CKernel(void)
{
}

TScreenColor bbb[320 * 200*2];
boolean CKernel::Initialize(void)
{

	return m_Screen.Initialize();
}

void CKernel::writeln(CString text) {
	m_Screen.Write((const char *)text, text.GetLength());
	m_Screen.Write("\n", 1);
}



int fact(int num)
{
	if (num == 0)
		return 1;
	else
		return (fact(num - 1))*num;
}

float pow(float x, int p) {
	float ret = 1;
	while (p-- > 0) {
		ret *= x;
	}
	return ret;
}

float sine(float x) {
	int neg = 1;
	float sin = x;
	for (int i = 1; i <= 5; i++)
	{
		neg *= -1;
		sin = sin + ((pow(x, i) / fact(i))*neg);
	}
	return sin;
}


TShutdownMode CKernel::Run(void)
{

	/*for (int i = 0; i < 600; i++) {
		m_Screen.SetPixel(i, 100, NORMAL_COLOR);
	}

	double xx = 0;

	while (1) {

		xx+=0.01;
		
			
		for (int i = 0; i < 320; i++) {
			for (int j = 0; j < 200; j++) {
				bbb[j * 320 + i] = (j+xx)%0xff;
			}
		}

		bbb[10 * 320 + 10] = HIGH_COLOR;
		bbb[10 * 320 + 11] = NORMAL_COLOR;
		bbb[10 * 320 + 12] = HIGH_COLOR;
		bbb[10 * 320 + 13] = NORMAL_COLOR;

		memcpy( m_Screen.m_pBuffer, bbb, 320 * 200);
	}*/







	//return ShutdownHalt;

	////// draw rectangle on screen
	//for (unsigned nPosX = 0; nPosX < m_Screen.GetWidth(); nPosX++)
	//{
	//	m_Screen.SetPixel(nPosX, 0, NORMAL_COLOR);
	//	m_Screen.SetPixel(nPosX, m_Screen.GetHeight() - 1, HIGH_COLOR);
	//}
	//for (unsigned nPosY = 0; nPosY < m_Screen.GetHeight(); nPosY++)
	//{
	//	m_Screen.SetPixel(0, nPosY, NORMAL_COLOR);
	//	m_Screen.SetPixel(m_Screen.GetWidth() - 1, nPosY, HIGH_COLOR);
	//}

	//// draw cross on screen
	//for (unsigned nPosX = 0; nPosX < m_Screen.GetWidth(); nPosX++)
	//{
	//	unsigned nPosY = nPosX * m_Screen.GetHeight() / m_Screen.GetWidth();

	//	m_Screen.SetPixel(nPosX, nPosY, NORMAL_COLOR);
	//	m_Screen.SetPixel(m_Screen.GetWidth() - nPosX - 1, nPosY, HIGH_COLOR);
	//}

	CString Message;
	////Message.Format("%02X: \'%c\' ", (unsigned)chChar, chChar);
	Message.Format("XXX %f", 0.1);
	writeln(Message);
	Message.Format("XXX %f", isine(1));
	writeln(Message);
	//Message.Format("ZZZZZZ");
	//writeln(Message);
	//Message.Format("2 %f %f %f %f %f", sqrt3(2), sqrt3(3), sqrt3(4), sqrt3(5), sqrt3(6));
	//writeln(Message);
	//Message.Format("2 %f %f %f %f %f", sqrt3(7), sqrt3(8), sqrt3(9), sqrt3(10), sqrt3(11));
	//writeln(Message);



	//Message.Format("pow %f %f %f %f %f", pow(2, 2), pow(2, 3), pow(2, 4), pow(2, 5), pow(2, 6));
	//writeln(Message);

	Message.Format("XXX %f %f", 0, isine(0));
	writeln(Message);
	Message.Format("pi/2 %f %f", PI / 2, isine(PI / 2));
	writeln(Message);
	Message.Format("pi/3 %f %f", PI / 3, isine(PI / 3));
	writeln(Message);
	Message.Format("pi/4 %f %f", PI / 4, isine(PI / 4));
	writeln(Message);
	Message.Format("pi/5 %f %f", PI / 5, isine(PI / 5));
	writeln(Message);
	Message.Format("pi/6 %f %f", PI / 6, isine(PI / 6));
	writeln(Message);





	for (int i = 0; i < 600; i++) {
		m_Screen.SetPixel(i, 100, NORMAL_COLOR);
	}


	double u = -PI;
	double dd = 0;
	while (1)
	{
		//m_Screen.Clear();
		memset(bbb, 0, 320 * 200*2);
		while (u < PI_X2) {
			u += 0.01f;

			m_Screen.SetPixel(u * 100, 100 + (int)(50 * u), NORMAL_COLOR);
		}

		u = -PI;
		while (u < 2 * PI_X2) {
			u += 0.01;

			/*	m_Screen.SetPixel(100 + u * 50, 100 + (int)(50 * isine(u + dd - 0.01)), BLACK_COLOR);
				m_Screen.SetPixel(100 + u * 50, 100 + (int)(50 * icosine(u + 2*dd - 0.01)), BLACK_COLOR);*/

			

			int x = 100 + u * 50;
			int y = 100 + (int)(50 * isine(u + dd));
			if (x > 0 && x < 320 && y>0 && y < 200) {
				bbb[y * 320 + x] = HIGH_COLOR;
			}

			/*m_Screen.SetPixel(100 + u * 50, 100 + (int)(50 * isine(u + dd)), HIGH_COLOR);
			m_Screen.SetPixel(100 + u * 50, 100 + (int)(50 * icosine(u + 2 * dd)), HALF_COLOR);*/
		}
		memcpy(m_Screen.m_pBuffer, bbb, 320 * 200*2);
		dd += 0.01;

	}


	// check the blink frequency without and with MMU (see option in constructor above)
	while (1)
	{
		m_ActLED.On();
		for (volatile unsigned i = 1; i <= 5000000; i++)
		{
			// just wait
		}

		m_ActLED.Off();
		for (volatile unsigned i = 1; i <= 10000000; i++)
		{
			// just wait
		}
	}

	return ShutdownHalt;
}
