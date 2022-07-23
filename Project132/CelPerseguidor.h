#pragma once
#include"CelMenor.h"
using namespace System::Drawing;
class CCelPerseguidor :public CCelMenor
{
private:
public:
	CCelPerseguidor(int x, int y, int dx, int dy, int radio) :CCelMenor(x, y, dx, dy, radio)
	{
	}
	~CCelPerseguidor() {}
	void dibujar(Graphics^g) {
		SolidBrush ^brocha = gcnew SolidBrush(Color::FromArgb(R, G, B));
		g->FillEllipse(brocha, x, y, radio, radio);
		g->FillEllipse(Brushes::RoyalBlue, x + 5, y + 5, radio - 10, radio - 10);
	}
};