#pragma once
#include"Jugador.h"
#include"ArrCelMenor.h"
#include"ArrCelMayor.h"
#include"ArrCelVirus.h"
#include"ArrCelVirusExplota.h"
#include"CelPerseguidor.h"
class Ccontrol
{
private:
	Cjugador *Obj_jugador;
	CArrCelMenor *Obj_ArrMenor;
	CArrCelMayor *Obj_ArrMayor;
	CArrCelVirus *Obj_ArrVirus;
	CArrCelVirusExp *Obj_ArrVirusExplota;
	CCelPerseguidor *Obj_Perseguidor;
	bool borrar1, borrar2, borrar3, borrar4, borrar5, borrar6, borrar7, borrar8, borrar9, borrar10, borrar11, borrar12, borrar13, borrar14, borrar15, borrar16, borrar17,borrar18, borrar19, borrar20, contar_total_nivel1, contar_total_nivel2, contar_total_nivel3, contar_total_nivel4;
	int contador_total, contador_divisiones;
public:
	Ccontrol() {
		Obj_jugador = new Cjugador(50, 50, 30, 30, 50);
		Obj_ArrMenor = new CArrCelMenor();
		Obj_ArrMayor = new CArrCelMayor();
		Obj_ArrVirus = new CArrCelVirus();
		Obj_ArrVirusExplota = new CArrCelVirusExp();
		Obj_Perseguidor = new CCelPerseguidor(rand() % 900 + 10, rand() % 500 + 10, 5, 5, 30);
		borrar1 = borrar2 = borrar3 = borrar4 = borrar5 = borrar6 = borrar7 = borrar8 = borrar9 = borrar10 = borrar11= borrar12 = borrar13 = borrar14 = borrar15 = borrar16 = borrar17 =borrar18 = borrar19=borrar20=true;
		contar_total_nivel1 = contar_total_nivel2 = contar_total_nivel3 = contar_total_nivel4 = true;
		contador_total = 0;
		contador_divisiones = 0;
	}
	~Ccontrol() {}
	void dibujar_mover(Graphics ^g) {
		Obj_jugador->dibujar(g);
		Obj_ArrMenor->dibujar_mover(g);
		Obj_ArrMayor->dibujar_mover(g);
		Obj_ArrVirus->dibujar_mover(g);
		Obj_ArrVirusExplota->dibujar_mover(g);
		Obj_Perseguidor->dibujar(g);
		Obj_Perseguidor->mover(g);
	}

	void mover(int direccion) {
		Obj_jugador->mover(direccion);
	}

	void Agregar_enemigos(int nivel, bool agregar) {
		if (agregar) {
			if (nivel == 1) {
				for (short i = 0; i < 6; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 2; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 2; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 2) {
				if (borrar2) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar2 = false;
				}
				for (short i = 0; i < 10; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 4; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 3; i++) { Obj_ArrVirus->agregar(); }

			}
			if (nivel == 3) {
				if (borrar3) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar3 = false; }
				for (short i = 0; i < 14; i++){ Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 6; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 4; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 4) {
				if (borrar4) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar4 = false; }
				for (short i = 0; i < 18; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 8; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 5; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 5) {
				if (borrar5) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar5 = false;
				}
				for (short i = 0; i < 22; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 9; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 6; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 6) {
				if (borrar6) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar6 = false;
				}
				for (short i = 0; i < 26; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 10; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 7; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 7) {
				if (borrar7) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar7 = false;
				}
				for (short i = 0; i < 30; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 11; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 8; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 8) {
				if (borrar8) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar8 = false;
				}
				for (short i = 0; i < 30; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 11; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 8; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 9) {
				if (borrar9) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar9 = false;
				}
				for (short i = 0; i < 30; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 11; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 8; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 10) {
				if (borrar10) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar10 = false;
				}
				for (short i = 0; i < 30; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 11; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 8; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 11) {
				if (borrar11) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar11 = false;
				}
				for (short i = 0; i < 34; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 13; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 10; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 12) {
				if (borrar12) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar12 = false;
				}
				for (short i = 0; i < 38; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 16; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 11; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 13) {
				if (borrar13) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar13 = false;
				}
				for (short i = 0; i < 42; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 19; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 14; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 14) {
				if (borrar14) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar14 = false;
				}
				for (short i = 0; i < 46; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 22; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 16; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 15) {
				if (borrar15) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar15 = false;
				}
				for (short i = 0; i < 50; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 25; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 18; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 16) {
				if (borrar16) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar16 = false;
				}
				for (short i = 0; i < 54; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 28; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 20; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 17) {
				if (borrar17) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar17 = false;
				}
				for (short i = 0; i < 58; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 31; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 22; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 18) {
				if (borrar18) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar18 = false;
				}
				for (short i = 0; i < 54; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 34; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 24; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 19) {
				if (borrar19) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar19 = false;
				}
				for (short i = 0; i < 58; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 37; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 26; i++) { Obj_ArrVirus->agregar(); }
			}
			if (nivel == 20) {
				if (borrar20) {
					//Obj_ArrMayor->eliminar_todo();
					Obj_ArrMenor->eliminar_todo();
					Obj_ArrVirus->eliminar_todo();
					Obj_ArrVirusExplota->eliminar_todo();
					borrar20 = false;
				}
				for (short i = 0; i < 62; i++) { Obj_ArrMenor->agregar(); }
				for (short i = 0; i < 40; i++) { Obj_ArrMayor->agregar(); }
				for (short i = 0; i < 28; i++) { Obj_ArrVirus->agregar(); }
			}
		}
	}

	void Agregar_enemigos_al_estallar() {
		if (Obj_ArrVirus->get_tamano() > 0) //verificar que exista algo en el arreglo
		{
			for (short i = 0; i < 4; i++) { Obj_ArrVirusExplota->agregar(Obj_ArrVirus->get_arreglo(0)->get_x(), Obj_ArrVirus->get_arreglo(0)->get_y()); }
			Obj_ArrVirus->eliminar_posicion(0);
		}
	}
	void colisiones_con_virus(int &vidas) {
		//celula explota y celula mayores
		for (short i = 0; i < Obj_ArrVirusExplota->get_tamano(); i++)
		{
			for (short j = 0; j < Obj_ArrMayor->get_tamano(); j++)
			{
				Rectangle r1 = Obj_ArrVirusExplota->get_arreglo(i)->get_rectangle();
				Rectangle r2 = Obj_ArrMayor->get_arreglo(j)->get_rectangle();
				if (r1.IntersectsWith(r2))
				{
					Obj_ArrVirusExplota->eliminar_posicion(i);
					Obj_ArrMayor->eliminar_posicion(j);
				}
			}
		}
		//celula explota y celulas menores
		for (short i = 0; i < Obj_ArrVirusExplota->get_tamano(); i++)
		{
			for (short j = 0; j < Obj_ArrMenor->get_tamano(); j++)
			{
				Rectangle r1 = Obj_ArrVirusExplota->get_arreglo(i)->get_rectangle();
				Rectangle r2 = Obj_ArrMenor->get_arreglo(j)->get_rectangle();
				if ((r1).IntersectsWith(r2))
				{
					Obj_ArrVirusExplota->eliminar_posicion(i);
					Obj_ArrMenor->eliminar_posicion(j);
				}
			}
		}
		//--------------------------
		for (short i = 0; i < Obj_ArrVirusExplota->get_tamano(); i++)
		{
			Rectangle r1 = Obj_ArrVirusExplota->get_arreglo(i)->get_rectangle();
			Rectangle r2 = Obj_jugador->get_rectangle();
			if (r1.IntersectsWith(r2))
			{
				Obj_ArrVirusExplota->eliminar_posicion(i);
				Obj_jugador->set_x(50);
				Obj_jugador->set_y(50);
				vidas--;
			}
		}
	}
	void comer_celulas(int &vidas) {
		//celular menor y jugador
		for (int i = 0; i < 1; i++)
		{
			for (int j = 0; j < Obj_ArrMenor->get_tamano(); j++)
			{
				Rectangle r1 = Obj_ArrMenor->get_arreglo(j)->get_rectangle();
				Rectangle r2 = Obj_jugador->get_rectangle();
				if (r1.IntersectsWith(r2))
				{
					if (Obj_jugador->get_radio() > (1.2*(Obj_ArrMenor->get_arreglo(j)->get_radio())))
					{
						Obj_ArrMenor->eliminar_posicion(j);
						Obj_jugador->modif_radio_velocidad();
					}
				}
			}
		}
		//celulas mayores y jugador

		for (int j = 0; j < Obj_ArrMayor->get_tamano(); j++)
		{
			Rectangle r1 = Obj_ArrMayor->get_arreglo(j)->get_rectangle();
			Rectangle r2 = Obj_jugador->get_rectangle();
			if (r1.IntersectsWith(r2))
			{
				if (Obj_jugador->get_radio() > (1.2*(Obj_ArrMayor->get_arreglo(j)->get_radio())))
				{
					Obj_ArrMayor->eliminar_posicion(j);
					Obj_jugador->modif_radio_velocidad();
				}
				if (((Obj_ArrMayor->get_arreglo(j)->get_radio())) > 1.2*(Obj_jugador->get_radio()))
				{
					Obj_jugador->set_x(50);
					Obj_jugador->set_y(50);
					Obj_ArrMayor->get_arreglo(j)->modif_radio();
					vidas--;
				}
			}

		}
		//celulas mayores y menores
		for (int i = 0; i < Obj_ArrMayor->get_tamano(); i++)
		{
			for (int j = 0; j < Obj_ArrMenor->get_tamano(); j++)
			{
				Rectangle r1 = Obj_ArrMayor->get_arreglo(i)->get_rectangle();
				Rectangle r2 = Obj_ArrMenor->get_arreglo(j)->get_rectangle();
				if (r1.IntersectsWith(r2))
				{
					if (Obj_ArrMayor->get_arreglo(i)->get_radio() > 1.2*(Obj_ArrMenor->get_arreglo(j)->get_radio()))
					{
						Obj_ArrMenor->eliminar_posicion(j);
						Obj_ArrMayor->get_arreglo(i)->modif_radio();
					}
				}
			}
		}
		for (int i = 0; i < Obj_ArrMayor->get_tamano(); i++)
		{
			for (int j = 0; j < Obj_ArrMayor->get_tamano(); j++)
			{
				Rectangle r1 = Obj_ArrMayor->get_arreglo(i)->get_rectangle();
				Rectangle r2 = Obj_ArrMayor->get_arreglo(j)->get_rectangle();
				if (r1.IntersectsWith(r2))
				{
					if (Obj_ArrMayor->get_arreglo(i)->get_radio() > 1.2*(Obj_ArrMayor->get_arreglo(j)->get_radio()))
					{
						Obj_ArrMayor->eliminar_posicion(j);
						Obj_ArrMayor->get_arreglo(i)->modif_radio();
					}
				}
			}
		}
	}

	//Cel mayor y mayor


	bool pasar_de_nivel(int nivel) {
		if (nivel == 1 && (contar_total_nivel1 == true))
		{
			contador_total = (get_tam_Mayores() + get_tam_Menores()) / 2;
			contar_total_nivel1 = false;
		}
		if (nivel == 2 && contar_total_nivel2 == true)
		{
			contador_total = (get_tam_Mayores() + get_tam_Menores()) / 2;
			contar_total_nivel2 = false;
		}
		if (nivel == 3 && contar_total_nivel3 == true)
		{
			contador_total = (get_tam_Mayores() + get_tam_Menores()) / 2;
			contar_total_nivel3 = false;
		}
		if (nivel == 4 && contar_total_nivel4 == true)
		{
			contador_total = (get_tam_Mayores() + get_tam_Menores()) / 2;
			contar_total_nivel4 = false;
		}
		if (int(contador_total) > (get_tam_Mayores() + get_tam_Menores()))
		{
			return true;
			contador_total = 0;
		}
		else
			return false;

	}

	void dividir_jugador() {
		if (contador_divisiones <= 8)
		{
			if (Obj_jugador->get_radio() >= 30)
			{
				Obj_jugador->reducir_radio();
				Obj_ArrMayor->agregar_con_space(Obj_jugador->get_x(), Obj_jugador->get_y(), Obj_jugador->get_radio());
				contador_divisiones++;
			}
		}
	}

	void perseguir(int R, int G, int B) {
		Obj_Perseguidor->set_RGB(R, G, B);
		if (((Obj_jugador->get_x() - Obj_Perseguidor->get_x()) > 0 && (Obj_jugador->get_x() - Obj_Perseguidor->get_x()) < 300) &&
			((Obj_jugador->get_y() - Obj_Perseguidor->get_y()) > 0 && (Obj_jugador->get_y() - Obj_Perseguidor->get_y()) < 300))
		{
			Obj_Perseguidor->set_dx(5);
			Obj_Perseguidor->set_dy(5);
		}
		if (((Obj_jugador->get_x() - Obj_Perseguidor->get_x()) > -300 && (Obj_jugador->get_x() - Obj_Perseguidor->get_x()) < 0) &&
			((Obj_jugador->get_y() - Obj_Perseguidor->get_y()) > 0 && (Obj_jugador->get_y() - Obj_Perseguidor->get_y()) < 300))
		{
			Obj_Perseguidor->set_dx(-5);
			Obj_Perseguidor->set_dy(5);
		}
		if (((Obj_jugador->get_x() - Obj_Perseguidor->get_x()) > -300 && (Obj_jugador->get_x() - Obj_Perseguidor->get_x()) < 0) &&
			((Obj_jugador->get_y() - Obj_Perseguidor->get_y()) > -300 && (Obj_jugador->get_y() - Obj_Perseguidor->get_y()) < 0)) {
			Obj_Perseguidor->set_dx(-5);
			Obj_Perseguidor->set_dy(-5);
		}
		if (((Obj_jugador->get_x() - Obj_Perseguidor->get_x()) > 0 && (Obj_jugador->get_x() - Obj_Perseguidor->get_x()) < 300) &&
			((Obj_jugador->get_y() - Obj_Perseguidor->get_y()) > -300 && (Obj_jugador->get_y() - Obj_Perseguidor->get_y()) < 0)) {
			Obj_Perseguidor->set_dx(5);
			Obj_Perseguidor->set_dy(-5);
		}
	}

	void colisionar_con_perseguidor(int &vidas) {
		if (Obj_jugador->get_rectangle().IntersectsWith(Obj_Perseguidor->get_rectangle()))
		{
			Obj_jugador->set_x(50);
			Obj_jugador->set_y(50);
			vidas--;
		}
	}

	int get_tam_Menores() { return Obj_ArrMenor->get_tamano(); }
	int get_tam_Mayores() { return Obj_ArrMayor->get_tamano(); }
	int get_tam_Virus() { return Obj_ArrVirus->get_tamano(); }
	int get_contador() { return contador_total; }
};