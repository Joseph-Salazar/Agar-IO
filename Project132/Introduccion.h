#pragma once
#include"MyForm.h"
#include<ctime>
namespace Ario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Introduccion
	/// </summary>
	public ref class Introduccion : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::Label^  label4;

	private:
		Bitmap ^fondo;
		int tiempo, R, G, B;
	private: System::Windows::Forms::Button^  button2;
			 int *vida;
	public:
		Introduccion(void)
		{
			InitializeComponent();
			fondo = gcnew Bitmap("agariofondo.jpg");
			tiempo = 3;
			srand(time(NULL));
			R = G = B = 0;
			vida = new int;
			*vida = 3;
		}

	protected:
		/// <summary>
		/// </summary>
		~Introduccion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button3;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Introduccion::timer1_Tick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(559, 370);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Introduccion::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->pictureBox13);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->pictureBox14);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Location = System::Drawing::Point(223, 117);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(572, 179);
			this->panel1->TabIndex = 2;
			this->panel1->Visible = false;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"3", L"4", L"5", L"6" });
			this->comboBox2->Location = System::Drawing::Point(318, 111);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 24;
			this->comboBox2->Text = L"3";
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox13->Location = System::Drawing::Point(80, 90);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(94, 72);
			this->pictureBox13->TabIndex = 23;
			this->pictureBox13->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(204, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 31);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Health:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(470, 37);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 37);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Save";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Introduccion::button3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBox1->Location = System::Drawing::Point(318, 48);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 21;
			this->comboBox1->Text = L"3";
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox14->Location = System::Drawing::Point(88, 9);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(67, 75);
			this->pictureBox14->TabIndex = 20;
			this->pictureBox14->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Yellow;
			this->label6->Location = System::Drawing::Point(185, 38);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 31);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Time: ";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(12, 228);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 64);
			this->button2->TabIndex = 25;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Introduccion::button2_Click);
			// 
			// Introduccion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(795, 408);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Introduccion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Introduccion";
			this->Load += gcnew System::EventHandler(this, &Introduccion::Introduccion_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		Graphics ^g = this->CreateGraphics();
		BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
		BufferedGraphics ^buffer = espacio->Allocate(g, this->ClientRectangle);
		buffer->Graphics->DrawImage(fondo, 0, 0, this->Width, this->Height);
		R = rand() % 254 + 1;
		G = rand() % 254 + 1;
		B = rand() % 254 + 1;
		button1->BackColor = Color::FromArgb(R, G, B);

		buffer->Render(g);
		delete buffer, espacio, g;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm ^siguiente_form = gcnew MyForm(tiempo, *vida);
		siguiente_form->ShowDialog();
		this->Close();
	}
	
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		//Tiempo
		if (comboBox1->SelectedItem == "1")	tiempo = 1;
		else
			if (comboBox1->SelectedItem == "2")	tiempo = 2;
			else
				if (comboBox1->SelectedItem == "3")	tiempo = 3;
				else
					if (comboBox1->SelectedItem == "4")	tiempo = 4;
					else
						if (comboBox1->SelectedItem == "5")	tiempo = 5;
						else {
							MessageBox::Show("fuera del intervalo");
							tiempo = 3;
						}
		//Vida
		if (comboBox2->SelectedItem == "3")	*vida = 3;
		else
			if (comboBox2->SelectedItem == "4")	*vida = 4;
			else
				if (comboBox2->SelectedItem == "5")	*vida = 5;
				else
					if (comboBox2->SelectedItem == "6")	*vida = 6;
					else {
						MessageBox::Show("fuera del intervalo");
						*vida = 3;
					}
		panel1->Visible = false;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		panel1->Visible = true;
	}
private: System::Void Introduccion_Load(System::Object^  sender, System::EventArgs^  e) {
		}
	};
}