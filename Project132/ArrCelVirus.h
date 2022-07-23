#pragma once
#include"CelVirus.h"
#include<vector>
using namespace std;
class CArrCelVirus
{
private:
	vector<CCelVirus*>arreglo;
public:
	CArrCelVirus() {
		arreglo = vector<CCelVirus*>();
		srand(time(NULL));
	}
	~CArrCelVirus() {}
	void agregar()
	{
		CCelVirus *nuevo = new CCelVirus(rand() % 1000 + 10, rand() % 700 + 10, rand() % 20 - 10, rand() % 20 - 10, 10, 1);
		arreglo.push_back(nuevo);
	}
	void dibujar_mover(Graphics ^g)
	{
		for (short i = 0; i < arreglo.size(); i++)
		{
			arreglo.at(i)->dibujar_Virus(g);
			arreglo.at(i)->mover(g);
		}
	}
	void eliminar_todo() { arreglo.clear(); }
	void eliminar_posicion(int posi) { arreglo.erase(arreglo.begin() + posi); }
	int get_tamano() { return arreglo.size(); }
	CCelVirus *get_arreglo(int indice) { return arreglo[indice]; }
};