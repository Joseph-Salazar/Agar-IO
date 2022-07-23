#pragma once
using namespace System::Drawing;
class CCelVirusExplota
{
private:
	int x, y, radio, dx, dy;
public:
	CCelVirusExplota(int x, int y, int dx, int dy, int radio) {
		this->x = x;
		this->y = y;
		this->dx = dx;
		this->dy = dy;
		this->radio = radio;
	}
	~CCelVirusExplota() {}
	void dibujar_Virus(Graphics ^g) { g->FillEllipse(Brushes::Green, x, y, radio, radio); }
	void mover() { x = x + dx;	y = y + dy; }
	Rectangle get_rectangle() { return Rectangle(x, y, radio, radio); }
};
