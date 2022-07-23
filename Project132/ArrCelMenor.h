#pragma once
#include"CelMenor.h"
#include<vector>
#include<ctime>
#include<time.h>
using namespace std;
class CArrCelMenor
{
private:
	vector<CCelMenor*>arreglo;
public:
	CArrCelMenor() {
		arreglo = vector<CCelMenor*>();
		srand(time(NULL));
	}
	~CArrCelMenor() {}
	void agregar()
	{
		CCelMenor *nuevo = new CCelMenor(rand() % 1000 + 10, rand() % 700 + 10, rand() % 20 - 10, rand() % 20 - 10, rand() % 40 + 10);
		arreglo.push_back(nuevo);
	}
	void agregar_con_space(int x, int y, int radio)
	{
		CCelMenor *nuevo = new CCelMenor(x, y, rand() % 20 - 10, rand() % 20 - 10, radio);
		arreglo.push_back(nuevo);
	}
	void dibujar_mover(Graphics ^g)
	{
		for (short i = 0; i < arreglo.size(); i++)
		{
			arreglo.at(i)->dibujar(g);
			arreglo.at(i)->mover(g);
		}
	}
	int get_tamano() { return arreglo.size(); }
	void eliminar_todo() { arreglo.clear(); }
	void eliminar_posicion(int posi) { arreglo.erase(arreglo.begin() + posi); }
	CCelMenor *get_arreglo(int indice) { return arreglo[indice]; }
};
