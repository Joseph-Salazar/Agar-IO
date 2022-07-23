#pragma once
#pragma once
#include"ArrCelMenor.h"
class CCelMayor :public CCelMenor
{
private:

public:
	CCelMayor(int x, int y, int dx, int dy, int radio) :CCelMenor(x, y, dx, dy, radio)
	{}
	~CCelMayor() {}
	void dibujar_numero(Graphics ^g) {
		Font^ f = gcnew Font("Arial", 20, FontStyle::Bold);
		g->DrawString(radio.ToString(), f, Brushes::Black, x + (radio / 4), y + (radio / 4));
	}
	void modif_radio() { radio = radio + 5; }
};