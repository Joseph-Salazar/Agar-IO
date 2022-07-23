#pragma once
#include<iostream>
#include<conio.h>
using namespace System::Drawing;
class Cjugador
{
private:
	int x, y, radio, dx, dy;
public:
	Cjugador(int X, int Y, int DX, int DY, int RADIO) {
		x = X;
		y = Y;
		radio = RADIO;
		dx = DX;
		dy = DY;
	}
	~Cjugador() {}

	void dibujar(Graphics ^g) {
		Font^ f = gcnew Font("Arial", radio / 2, FontStyle::Bold);
		g->FillEllipse(Brushes::Red, x, y, radio, radio);
		g->DrawString(radio.ToString(), f, Brushes::Black, x + (radio / 10), y + (radio / 10));
	}
	void mover(int direccion) {
		if (direccion == 1) { x = x + dx; }
		if (direccion == 2) { x = x - dx; }
		if (direccion == 3) { y = y + dy; }
		if (direccion == 4) { y = y - dy; }
	}
	void rebotar(Graphics ^g) {
		if (x + dx<0 || x + dx + radio>g->VisibleClipBounds.Width)
			dx = dx * -1;
		if (y + dy<0 || y + dy + radio>g->VisibleClipBounds.Height)
			dy = dy * -1;
		x = x + dx;
		y = y + dy;
	}
	int get_radio() { return radio; }
	int get_x() { return x; }
	int get_y() { return y; }
	int get_dx() { return dx; }
	int get_dy() { return dy; }
	void set_x(int X) { x = X; }
	void set_y(int Y) { y = Y; }
	void reducir_radio() { radio = radio * 0.5; }
	void modif_radio_velocidad() { radio = radio + 5; dx = dx - 1; dy = dy - 1; }
	Rectangle get_rectangle() { return Rectangle(x, y, radio, radio); }
};