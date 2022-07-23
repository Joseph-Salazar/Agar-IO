#pragma once
#pragma once
using namespace System::Drawing;
#include<ctime>
class CCelMenor
{
protected:
	int x, y, radio, dx, dy, R, G, B;
public:
	CCelMenor(int x, int y, int dx, int dy, int radio) {
		this->radio = radio;
		this->x = x;
		this->y = y;
		this->dx = dx;
		this->dy = dy;
		R = rand() % 254 + 1;
		G = rand() % 254 + 1;
		B = rand() % 254 + 1;

	}
	~CCelMenor() {}
	virtual void dibujar(Graphics ^g) {
		SolidBrush ^brocha = gcnew SolidBrush(Color::FromArgb(R, G, B));
		g->FillEllipse(brocha, x, y, radio, radio);

	}
	virtual void mover(Graphics ^g) {
		if (x + dx<0 || x + dx + radio>g->VisibleClipBounds.Width)
			dx = dx * -1;
		if (y + dy<0 || y + dy + radio>g->VisibleClipBounds.Height)
			dy = dy * -1;
		x = x + dx;
		y = y + dy;
	}
	virtual int get_x() { return x; }
	virtual int get_y() { return y; }
	virtual int get_radio() { return radio; }
	virtual void set_dx(int DX) { dx = DX; }
	virtual void set_dy(int DY) { dy = DY; }
	virtual void set_RGB(int r, int g, int b) { R = r; g = G; B = b; }
	virtual Rectangle get_rectangle() { return Rectangle(x, y, radio, radio); }
};
