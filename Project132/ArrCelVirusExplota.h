#pragma once
#pragma once
#include"CelVirusExplota.h"
#include<vector>
using namespace std;
class CArrCelVirusExp
{
private:
	vector<CCelVirusExplota*>arreglo;
public:
	CArrCelVirusExp() {
		arreglo = vector<CCelVirusExplota*>();
	}
	~CArrCelVirusExp() {}
	void agregar(int x, int y) {
		CCelVirusExplota *nuevo = new CCelVirusExplota(x, y, rand() % 20 - 10, rand() % 20 - 10, 10);
		arreglo.push_back(nuevo);
	}
	void dibujar_mover(Graphics ^g) {
		for (short i = 0; i < arreglo.size(); i++)
		{
			arreglo.at(i)->dibujar_Virus(g);
			arreglo.at(i)->mover();
		}
	}

	void eliminar_todo() { arreglo.clear(); }
	void eliminar_posicion(int posi) { arreglo.erase(arreglo.begin() + posi); }
	CCelVirusExplota *get_arreglo(int indice) { return arreglo[indice]; }
	int get_tamano() { return arreglo.size(); }

};