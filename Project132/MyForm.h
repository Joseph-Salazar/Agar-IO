#pragma once
#include"Controladora.h"
#include<ctime>
namespace Ario { 
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		Ccontrol *Obj_Control;
		int direccion;
		int nivel;
		bool agregar;
		bool terminar;
		int time1, time2, time3;
		bool m;
		int R, G, B;
		int* vida;

	private: System::Windows::Forms::Label^  TxtTime;

	public:
		MyForm(int TIEMPO, int &VIDA)
		{
			SoundPlayer ^musica = gcnew SoundPlayer("Storytime.wav");
			musica->PlayLooping();
			Obj_Control = new Ccontrol();
			InitializeComponent();
			vida = &VIDA;
			direccion = 0;
			nivel = 1;
			agregar = true;
			terminar = true;
			time1 = 7;
			time2 = 60 * TIEMPO;
			time3 = TIEMPO;
			srand(time(NULL));
			R = G = B = 0;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->TxtTime = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// TxtTime
			// 
			this->TxtTime->AutoSize = true;
			this->TxtTime->BackColor = System::Drawing::SystemColors::Control;
			this->TxtTime->Font = (gcnew System::Drawing::Font(L"Matura MT Script Capitals", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtTime->ForeColor = System::Drawing::Color::White;
			this->TxtTime->Location = System::Drawing::Point(600, 10);
			this->TxtTime->Name = L"TxtTime";
			this->TxtTime->Size = System::Drawing::Size(109, 47);
			this->TxtTime->TabIndex = 0;
			this->TxtTime->Text = L"label1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(894, 565);
			this->Controls->Add(this->TxtTime);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		
		Graphics ^g = this->CreateGraphics();
		BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
		BufferedGraphics ^buffer = espacio->Allocate(g, this->ClientRectangle);

		if (nivel == 2)buffer->Graphics->Clear(Color::Yellow);
		if (nivel == 3)buffer->Graphics->Clear(Color::Aqua);
		if (nivel == 4)buffer->Graphics->Clear(Color::DarkGoldenrod);
		if (nivel == 5)buffer->Graphics->Clear(Color::AliceBlue);
		if (nivel == 6)buffer->Graphics->Clear(Color::BlanchedAlmond);
		if (nivel == 7)buffer->Graphics->Clear(Color::Purple);
		if (nivel == 8)buffer->Graphics->Clear(Color::DarkCyan);
		if (nivel == 9)buffer->Graphics->Clear(Color::Blue);
		if (nivel == 10)buffer->Graphics->Clear(Color::Violet);
		if (nivel == 12)buffer->Graphics->Clear(Color::Coral);
		if (nivel == 13)buffer->Graphics->Clear(Color::DarkBlue);
		if (nivel == 14)buffer->Graphics->Clear(Color::Black);
		if (nivel == 15)buffer->Graphics->Clear(Color::BlueViolet);
		if (nivel == 16)buffer->Graphics->Clear(Color::CadetBlue);
		if (nivel == 17)buffer->Graphics->Clear(Color::PaleGoldenrod);
		if (nivel == 18)buffer->Graphics->Clear(Color::PaleTurquoise);
		if (nivel == 19)buffer->Graphics->Clear(Color::SandyBrown);
		if (nivel == 20)buffer->Graphics->Clear(Color::MistyRose);


		Obj_Control->dibujar_mover(buffer->Graphics);
		Obj_Control->mover(direccion);
		Obj_Control->Agregar_enemigos(nivel, agregar);
		Obj_Control->colisiones_con_virus(*vida);
		Obj_Control->comer_celulas(*vida);
		if (agregar)agregar = false;
		if (Obj_Control->pasar_de_nivel(nivel) == true) { agregar = true; nivel++; time2 = 60 * time3; }

		//-------------
		time1 = time1 - 1;
		TxtTime->Text = "" + time2;
		if (time1 == 0)
		{
			time2--;
			time1 = 7;
			if (time2 == 0)
			{
				nivel++;
				agregar = true;
				time2 = 60 * time3;
			}
		}

		//----------
		R = rand() % 254 + 1;
		G = rand() % 254 + 1;
		B = rand() % 254 + 1;
		TxtTime->BackColor = Color::FromArgb(R, G, B);
		//---------------
		if (*vida == 0)
		{
			timer1->Enabled = false;
			MessageBox::Show("0 VIDAS");
			this->Close();
		}
		//-------------------
		if (nivel == 21)
		{
			timer1->Enabled = false;
			MessageBox::Show("JUEGO FINALIZADO!");
			this->Close();
		}

		//----------------
		Obj_Control->perseguir(R, G, B);
		//--------------------
		Obj_Control->colisionar_con_perseguidor(*vida);


		//---------------------
		this->Text = "NIVEL: " + nivel + "      CEL PEQUENIAS: " +
			Obj_Control->get_tam_Menores() + "   CEL MAYORES: " +
			Obj_Control->get_tam_Mayores() + "    CEL VIRUS: " +
			Obj_Control->get_tam_Virus() + "     Conta: " +
			Obj_Control->get_contador() + "       VIDA: " + *vida;
		buffer->Render(g);
		delete buffer, espacio, g;
	}
	private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		switch (e->KeyCode)
		{
		case Keys::Right:direccion = 1; break;
		case Keys::Left:direccion = 2; break;
		case Keys::Down:direccion = 3; break;
		case Keys::Up:direccion = 4; break;
		case Keys::Z:agregar = true; nivel++; time2 = 60 * time3; break;
		case Keys::X:Obj_Control->Agregar_enemigos_al_estallar(); break;
		case Keys::Space:Obj_Control->dividir_jugador(); break;

		}
	}
	private: System::Void MyForm_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		direccion = 0;
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void MyForm_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

	}
	};
}