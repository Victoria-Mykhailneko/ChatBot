#pragma once
#include<string>
#include "MyForm2.h"

namespace lz14 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			// Ініціалізація полів
			answers = gcnew array<String^>{"повторення", "7", "if", "while", "500", "4"};
			step = 0;
			userName = "";
			questions = gcnew array<String^>{
				"Що таке цикл у програмі?",
					"Обчисли 3 + 4",
					"Який оператор використовується для розгалуження?",
					"Який цикл виконує код, поки умова істинна?", "обчисли 1000/2","скільки cторін у квадрата?"
			};
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:

	private:
		array<String^>^ answers;
		int step;
		String^ userName;
		array<String^>^ questions;
		int correctAnswers = 0;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
		   /// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		
	#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(686, 160);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Надіслати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(40, 49);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(262, 352);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(309, 49);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(298, 352);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(628, 49);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(373, 74);
			this->textBox2->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(686, 258);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(213, 48);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Почати заново";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(686, 352);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(213, 49);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Змінити фон";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(686, 448);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(213, 46);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Залишити відгук";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1036, 544);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm1";
			this->Text = L"SmartBot – чат з ботом";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ user = textBox2->Text->Trim();
		if (user->Length == 0) return;

		textBox2->Clear();
	
		if (step == 0) {
			userName = user;
			textBox1->AppendText("Бот: Привіт, " + userName + "! Почнемо навчання.\r\n");
			textBox1->AppendText("Бот: " + questions[0] + "\r\n");
			pictureBox1->Image = Image::FromFile("questions.jpg");
			step = 1;
		}
		else if (step == 1) {
			if (user->ToLower() == answers[0]) {
				textBox1->AppendText("Бот: Правильно!\r\n");correctAnswers++;
				pictureBox1->Image = Image::FromFile("think.png");
			}
			else {
				textBox1->AppendText("Бот: Неправильно, правильна відповідь: " + answers[0] + "\r\n");
				pictureBox1->Image = Image::FromFile("think.jpg");
			}
			textBox1->AppendText("Бот: " + questions[1] + "\r\n");
			pictureBox1->Image = Image::FromFile("think.png");
			step = 2;
		}
		else if (step == 2) {
			if (user->ToLower() == answers[1]) {
				textBox1->AppendText("Бот: Молодець!\r\n");correctAnswers++;
				pictureBox1->Image = Image::FromFile("think.png");
			}
			else {
				textBox1->AppendText("Бот: Хмм… правильна відповідь: " + answers[1] + "\r\n");
				pictureBox1->Image = Image::FromFile("point.png");
			}
			textBox1->AppendText("Бот: " + questions[2] + "\r\n");
			pictureBox1->Image = Image::FromFile("think.jpg");
			step = 3;
		}
		else if (step == 3) {
			if (user->ToLower() == answers[2]) {
				textBox1->AppendText("Бот: Супер!\r\n");correctAnswers++;
				pictureBox1->Image = Image::FromFile("zar.jpg");
			}
			else {
				textBox1->AppendText("Бот: Невірно. Правильна відповідь: " + answers[2] + "\r\n");
				pictureBox1->Image = Image::FromFile("think.jpg");
			}
			textBox1->AppendText("Бот: " + questions[3] + "\r\n");
			pictureBox1->Image = Image::FromFile("think.png");
			step = 4;
		}
		else if (step == 4) {
			if (user->ToLower() == answers[3]) {
				textBox1->AppendText("Бот: Правильно! Ура, всі питання пройдено!\r\n");correctAnswers++;
				pictureBox1->Image = Image::FromFile("zar.jpg");
			}
			else {
				textBox1->AppendText("Бот: Невірно. Правильна відповідь: " + answers[3] + "\r\n");
				pictureBox1->Image = Image::FromFile("stop.png");
			}
			MessageBox::Show("Ти відповів на всі питання.\r\n");
			step = 5;
			textBox1->AppendText("Ти відповів правильно на " + correctAnswers +
				" з " + answers->Length + " питань.\r\n");
		}
	} 
	
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	textBox1->AppendText("Бот: Привіт! Як тебе звати? → \r\n");
	pictureBox1->Image = Image::FromFile("welcom2.jpg"); // перше привітання
	step = 0; // починаємо з кроку 0
}



private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	step = 0;
	correctAnswers = 0;
	textBox1->Clear();
	pictureBox1->Image = Image::FromFile("welcom2.jpg");
	textBox1->AppendText("Бот: Привіт! Як тебе звати? → \r\n");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Random^ r = gcnew Random();
	this->BackColor = Color::FromArgb(r->Next(256), r->Next(256), r->Next(256));
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ feedbackForm = gcnew MyForm2();
	feedbackForm->ShowDialog();
}
};
}
