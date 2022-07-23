#pragma once
#pragma once
#include"CelMenor.h"
class CCelVirus :public CCelMenor
{
private:
	int tipo;
public:
	CCelVirus(int x, int y, int dx, int dy, int radio, int tipo) :CCelMenor(x, y, dx, dy, radio)
	{
		this->tipo = tipo;
	}
	~CCelVirus() {}
	void dibujar_Virus(Graphics ^g) { g->FillEllipse(Brushes::Green, x, y, radio, radio); }
};