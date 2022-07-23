#pragma once
#include"CelMayor.h"
#include<vector>
class CArrCelMayor
{
private:
	vector<CCelMayor*>arreglo;
	int radio;
public:
	CArrCelMayor() {
		arreglo = vector<CCelMayor*>();
		srand(time(NULL));

	}
	~CArrCelMayor() {}
	void agregar()
	{
		radio = rand() % 50 + 50;
		CCelMayor *nuevo = new CCelMayor(rand() % 1000 + 10, rand() % 500 + 10, rand() % 20 - 10, rand() % 20 - 10, radio);
		arreglo.push_back(nuevo);

	}
	void dibujar_mover(Graphics ^g)
	{
		for (short i = 0; i < arreglo.size(); i++)
		{
			arreglo.at(i)->dibujar(g);
			arreglo.at(i)->dibujar_numero(g);
			arreglo.at(i)->mover(g);
		}
	}
	void agregar_con_space(int x, int y, int radio)
	{
		CCelMayor *nuevo = new CCelMayor(x, y, rand() % 20 - 10, rand() % 20 - 10, radio);
		arreglo.push_back(nuevo);
	}
	int get_tamano() { return arreglo.size(); }
	void eliminar_todo() { arreglo.clear(); }
	void eliminar_posicion(int posi) { arreglo.erase(arreglo.begin() + posi); }
	CCelMayor *get_arreglo(int indice) { return arreglo[indice]; }

};
