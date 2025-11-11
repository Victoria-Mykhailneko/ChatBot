#pragma once
#include<string>
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
			answers = gcnew array<String^>{"повторення", "7", "if", "while"};
			step = 0;
			userName = "";
			questions = gcnew array<String^>{
				"Що таке цикл у програмі?",
					"Обчисли 3 + 4",
					"Який оператор використовується для розгалуження?",
					"Який цикл виконує код, поки умова істинна?"
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(610, 128);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Надіслати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(36, 39);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(233, 282);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(275, 39);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(265, 282);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(558, 39);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(332, 60);
			this->textBox2->TabIndex = 5;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(921, 435);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
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
				textBox1->AppendText("Бот: Правильно!\r\n");
				pictureBox1->Image = Image::FromFile("happy.png");
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
				textBox1->AppendText("Бот: Молодець!\r\n");
				pictureBox1->Image = Image::FromFile("happy.png");
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
				textBox1->AppendText("Бот: Супер!\r\n");
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
				textBox1->AppendText("Бот: Правильно! Ура, всі питання пройдено!\r\n");
				pictureBox1->Image = Image::FromFile("zar.jpg");
			}
			else {
				textBox1->AppendText("Бот: Невірно. Правильна відповідь: " + answers[3] + "\r\n");
				pictureBox1->Image = Image::FromFile("stop.png");
			}
			MessageBox::Show("Ти відповів на всі питання.\r\n");
			step = 5;
		}
	}
	
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	textBox1->AppendText("Бот: Привіт! Як тебе звати? → \r\n");
	pictureBox1->Image = Image::FromFile("welcom2.jpg"); // перше привітання
	step = 0; // починаємо з кроку 0
}



};
}
