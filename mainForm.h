#pragma once
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <iostream>
#include <string_view>
#include <cstring>
#include <array>
#include <random>
using namespace System;
using namespace System::Globalization;
using namespace System::Windows::Forms;


namespace Ekzamen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::TextBox^ tBResult1;

	private: System::Windows::Forms::Button^ btnResult;
	private: System::Windows::Forms::Button^ btnRandomize;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ tBMax;
	private: System::Windows::Forms::TextBox^ tBMin;
	private: System::Windows::Forms::TextBox^ tBKolvo;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tBArr;

	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ tB4;

	private: System::Windows::Forms::TextBox^ tB3;

	private: System::Windows::Forms::TextBox^ tB2;

	private: System::Windows::Forms::TextBox^ tB1;


	private: System::Windows::Forms::TextBox^ tBResult3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ btnResult4;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ btnOutput;
	private: System::Windows::Forms::TextBox^ tBOutput;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ tBInput;
	private: System::Windows::Forms::Button^ btnInput;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ btnOutput2;
	private: System::Windows::Forms::TextBox^ tBOutput2;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ btnOutput4;
	private: System::Windows::Forms::TextBox^ tBOutput4;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ tBInput4;
	private: System::Windows::Forms::Button^ btnInput4;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ btnOutput3;
	private: System::Windows::Forms::TextBox^ tBOutput3;
	private: System::Windows::Forms::TextBox^ tBb;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tBb = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->btnOutput = (gcnew System::Windows::Forms::Button());
			this->tBOutput = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tBInput = (gcnew System::Windows::Forms::TextBox());
			this->btnInput = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tBResult1 = (gcnew System::Windows::Forms::TextBox());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->btnRandomize = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tBMax = (gcnew System::Windows::Forms::TextBox());
			this->tBMin = (gcnew System::Windows::Forms::TextBox());
			this->tBKolvo = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tBArr = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->btnOutput2 = (gcnew System::Windows::Forms::Button());
			this->tBOutput2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->btnOutput3 = (gcnew System::Windows::Forms::Button());
			this->tBOutput3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tB1 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tB2 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tB3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tB4 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tBResult3 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->btnOutput4 = (gcnew System::Windows::Forms::Button());
			this->tBOutput4 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tBInput4 = (gcnew System::Windows::Forms::TextBox());
			this->btnInput4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->btnResult4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(3, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(512, 375);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->tBb);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->btnOutput);
			this->tabPage1->Controls->Add(this->tBOutput);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->tBInput);
			this->tabPage1->Controls->Add(this->btnInput);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->btnResult);
			this->tabPage1->Controls->Add(this->btnRandomize);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->tBArr);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(504, 349);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Задание 1";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(358, 234);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 34);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Задание";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 152);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Число b:";
			// 
			// tBb
			// 
			this->tBb->Location = System::Drawing::Point(15, 171);
			this->tBb->Name = L"tBb";
			this->tBb->ShortcutsEnabled = false;
			this->tBb->Size = System::Drawing::Size(100, 20);
			this->tBb->TabIndex = 20;
			this->tBb->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tBb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(355, 136);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(108, 13);
			this->label16->TabIndex = 19;
			this->label16->Text = L"Имя файла вывода:";
			// 
			// btnOutput
			// 
			this->btnOutput->Location = System::Drawing::Point(358, 178);
			this->btnOutput->Name = L"btnOutput";
			this->btnOutput->Size = System::Drawing::Size(132, 36);
			this->btnOutput->TabIndex = 18;
			this->btnOutput->Text = L"Сохранить в файл";
			this->btnOutput->UseVisualStyleBackColor = true;
			this->btnOutput->Click += gcnew System::EventHandler(this, &MyForm::btnOutput_Click);
			// 
			// tBOutput
			// 
			this->tBOutput->Location = System::Drawing::Point(358, 152);
			this->tBOutput->Name = L"tBOutput";
			this->tBOutput->Size = System::Drawing::Size(132, 20);
			this->tBOutput->TabIndex = 17;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(355, 53);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(100, 13);
			this->label15->TabIndex = 16;
			this->label15->Text = L"Имя файла ввода:";
			// 
			// tBInput
			// 
			this->tBInput->Location = System::Drawing::Point(358, 69);
			this->tBInput->Name = L"tBInput";
			this->tBInput->Size = System::Drawing::Size(132, 20);
			this->tBInput->TabIndex = 15;
			// 
			// btnInput
			// 
			this->btnInput->Location = System::Drawing::Point(358, 95);
			this->btnInput->Name = L"btnInput";
			this->btnInput->Size = System::Drawing::Size(132, 36);
			this->btnInput->TabIndex = 14;
			this->btnInput->Text = L"Ввод из файла";
			this->btnInput->UseVisualStyleBackColor = true;
			this->btnInput->Click += gcnew System::EventHandler(this, &MyForm::btnInput_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->tBResult1);
			this->groupBox2->Location = System::Drawing::Point(6, 274);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(484, 69);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Результат";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Полученный массив:";
			// 
			// tBResult1
			// 
			this->tBResult1->Location = System::Drawing::Point(6, 41);
			this->tBResult1->Name = L"tBResult1";
			this->tBResult1->ReadOnly = true;
			this->tBResult1->ShortcutsEnabled = false;
			this->tBResult1->Size = System::Drawing::Size(465, 20);
			this->tBResult1->TabIndex = 11;
			// 
			// btnResult
			// 
			this->btnResult->Location = System::Drawing::Point(15, 203);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(135, 30);
			this->btnResult->TabIndex = 12;
			this->btnResult->Text = L"Выполнить";
			this->btnResult->UseVisualStyleBackColor = true;
			this->btnResult->Click += gcnew System::EventHandler(this, &MyForm::btnResult_Click);
			// 
			// btnRandomize
			// 
			this->btnRandomize->Location = System::Drawing::Point(355, 15);
			this->btnRandomize->Name = L"btnRandomize";
			this->btnRandomize->Size = System::Drawing::Size(135, 30);
			this->btnRandomize->TabIndex = 3;
			this->btnRandomize->Text = L"Генерация массива";
			this->btnRandomize->UseVisualStyleBackColor = true;
			this->btnRandomize->Click += gcnew System::EventHandler(this, &MyForm::btnRandomize_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tBMax);
			this->groupBox1->Controls->Add(this->tBMin);
			this->groupBox1->Controls->Add(this->tBKolvo);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(343, 100);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// tBMax
			// 
			this->tBMax->Location = System::Drawing::Point(204, 70);
			this->tBMax->Name = L"tBMax";
			this->tBMax->ShortcutsEnabled = false;
			this->tBMax->Size = System::Drawing::Size(130, 20);
			this->tBMax->TabIndex = 5;
			this->tBMax->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tBMax->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tBMax_KeyPress);
			// 
			// tBMin
			// 
			this->tBMin->Location = System::Drawing::Point(204, 44);
			this->tBMin->Name = L"tBMin";
			this->tBMin->ShortcutsEnabled = false;
			this->tBMin->Size = System::Drawing::Size(130, 20);
			this->tBMin->TabIndex = 4;
			this->tBMin->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tBMin->TextChanged += gcnew System::EventHandler(this, &MyForm::tBMin_TextChanged);
			this->tBMin->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tBMin_KeyPress);
			// 
			// tBKolvo
			// 
			this->tBKolvo->Location = System::Drawing::Point(204, 15);
			this->tBKolvo->Name = L"tBKolvo";
			this->tBKolvo->ShortcutsEnabled = false;
			this->tBKolvo->Size = System::Drawing::Size(130, 20);
			this->tBKolvo->TabIndex = 3;
			this->tBKolvo->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tBKolvo->TextChanged += gcnew System::EventHandler(this, &MyForm::tBKolvo_TextChanged);
			this->tBKolvo->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tBKolvo_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(194, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Максимальное значение диапазона:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Минимальное значение диапазона:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Количество элементов массива:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Исходный массив:";
			// 
			// tBArr
			// 
			this->tBArr->Location = System::Drawing::Point(16, 129);
			this->tBArr->Name = L"tBArr";
			this->tBArr->ShortcutsEnabled = false;
			this->tBArr->Size = System::Drawing::Size(300, 20);
			this->tBArr->TabIndex = 0;
			this->tBArr->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tBArr_KeyPress);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->btnOutput2);
			this->tabPage2->Controls->Add(this->tBOutput2);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(504, 349);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Задание 2";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(183, 9);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(144, 23);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Задание";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(346, 8);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(108, 13);
			this->label17->TabIndex = 22;
			this->label17->Text = L"Имя файла вывода:";
			// 
			// btnOutput2
			// 
			this->btnOutput2->Location = System::Drawing::Point(349, 50);
			this->btnOutput2->Name = L"btnOutput2";
			this->btnOutput2->Size = System::Drawing::Size(132, 36);
			this->btnOutput2->TabIndex = 21;
			this->btnOutput2->Text = L"Сохранить в файл";
			this->btnOutput2->UseVisualStyleBackColor = true;
			this->btnOutput2->Click += gcnew System::EventHandler(this, &MyForm::btnOutput2_Click);
			// 
			// tBOutput2
			// 
			this->tBOutput2->Location = System::Drawing::Point(349, 24);
			this->tBOutput2->Name = L"tBOutput2";
			this->tBOutput2->Size = System::Drawing::Size(132, 20);
			this->tBOutput2->TabIndex = 20;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(18, 80);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(237, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Массив заполненный по заданному образцу:";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(18, 22);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Размерность массива:";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(6, 101);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->ShortcutsEnabled = false;
			this->textBox2->Size = System::Drawing::Size(492, 233);
			this->textBox2->TabIndex = 2;
			this->textBox2->WordWrap = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(183, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Выполнить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(21, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ShortcutsEnabled = false;
			this->textBox1->Size = System::Drawing::Size(122, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->btnOutput3);
			this->tabPage3->Controls->Add(this->tBOutput3);
			this->tabPage3->Controls->Add(this->groupBox3);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->tBResult3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(504, 349);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Задание 3";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(350, 125);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 28);
			this->button5->TabIndex = 29;
			this->button5->Text = L"Задание";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(347, 23);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(108, 13);
			this->label20->TabIndex = 28;
			this->label20->Text = L"Имя файла вывода:";
			// 
			// btnOutput3
			// 
			this->btnOutput3->Location = System::Drawing::Point(350, 65);
			this->btnOutput3->Name = L"btnOutput3";
			this->btnOutput3->Size = System::Drawing::Size(132, 36);
			this->btnOutput3->TabIndex = 27;
			this->btnOutput3->Text = L"Сохранить в файл";
			this->btnOutput3->UseVisualStyleBackColor = true;
			this->btnOutput3->Click += gcnew System::EventHandler(this, &MyForm::btnOutput3_Click);
			// 
			// tBOutput3
			// 
			this->tBOutput3->Location = System::Drawing::Point(350, 39);
			this->tBOutput3->Name = L"tBOutput3";
			this->tBOutput3->Size = System::Drawing::Size(132, 20);
			this->tBOutput3->TabIndex = 26;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->tB1);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->tB2);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->tB3);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->tB4);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Location = System::Drawing::Point(14, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(313, 103);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Исходные данные:";
			// 
			// tB1
			// 
			this->tB1->Location = System::Drawing::Point(41, 27);
			this->tB1->Name = L"tB1";
			this->tB1->ShortcutsEnabled = false;
			this->tB1->Size = System::Drawing::Size(100, 20);
			this->tB1->TabIndex = 1;
			this->tB1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tB1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tB1_KeyPress);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(160, 65);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(22, 13);
			this->label14->TabIndex = 9;
			this->label14->Text = L"d =";
			// 
			// tB2
			// 
			this->tB2->Location = System::Drawing::Point(189, 27);
			this->tB2->Name = L"tB2";
			this->tB2->ShortcutsEnabled = false;
			this->tB2->Size = System::Drawing::Size(100, 20);
			this->tB2->TabIndex = 2;
			this->tB2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tB2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tB2_KeyPress);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 65);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(22, 13);
			this->label13->TabIndex = 8;
			this->label13->Text = L"c =";
			// 
			// tB3
			// 
			this->tB3->Location = System::Drawing::Point(41, 62);
			this->tB3->Name = L"tB3";
			this->tB3->ShortcutsEnabled = false;
			this->tB3->Size = System::Drawing::Size(100, 20);
			this->tB3->TabIndex = 3;
			this->tB3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tB3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tB3_KeyPress);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(160, 30);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(22, 13);
			this->label12->TabIndex = 7;
			this->label12->Text = L"b =";
			// 
			// tB4
			// 
			this->tB4->Location = System::Drawing::Point(189, 62);
			this->tB4->Name = L"tB4";
			this->tB4->ShortcutsEnabled = false;
			this->tB4->Size = System::Drawing::Size(100, 20);
			this->tB4->TabIndex = 4;
			this->tB4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tB4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tB4_KeyPress);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 30);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(22, 13);
			this->label11->TabIndex = 6;
			this->label11->Text = L"a =";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(29, 125);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 34);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Выполнить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tBResult3
			// 
			this->tBResult3->Location = System::Drawing::Point(148, 133);
			this->tBResult3->Name = L"tBResult3";
			this->tBResult3->ReadOnly = true;
			this->tBResult3->ShortcutsEnabled = false;
			this->tBResult3->Size = System::Drawing::Size(155, 20);
			this->tBResult3->TabIndex = 0;
			this->tBResult3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage4->Controls->Add(this->button6);
			this->tabPage4->Controls->Add(this->label18);
			this->tabPage4->Controls->Add(this->btnOutput4);
			this->tabPage4->Controls->Add(this->tBOutput4);
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Controls->Add(this->tBInput4);
			this->tabPage4->Controls->Add(this->btnInput4);
			this->tabPage4->Controls->Add(this->label10);
			this->tabPage4->Controls->Add(this->label9);
			this->tabPage4->Controls->Add(this->textBox4);
			this->tabPage4->Controls->Add(this->btnResult4);
			this->tabPage4->Controls->Add(this->textBox3);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(504, 349);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Задание 4";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(365, 146);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(132, 28);
			this->button6->TabIndex = 26;
			this->button6->Text = L"Задание";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(362, 257);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(108, 13);
			this->label18->TabIndex = 25;
			this->label18->Text = L"Имя файла вывода:";
			// 
			// btnOutput4
			// 
			this->btnOutput4->Location = System::Drawing::Point(365, 299);
			this->btnOutput4->Name = L"btnOutput4";
			this->btnOutput4->Size = System::Drawing::Size(132, 36);
			this->btnOutput4->TabIndex = 24;
			this->btnOutput4->Text = L"Сохранить в файл";
			this->btnOutput4->UseVisualStyleBackColor = true;
			this->btnOutput4->Click += gcnew System::EventHandler(this, &MyForm::btnOutput4_Click);
			// 
			// tBOutput4
			// 
			this->tBOutput4->Location = System::Drawing::Point(365, 273);
			this->tBOutput4->Name = L"tBOutput4";
			this->tBOutput4->Size = System::Drawing::Size(132, 20);
			this->tBOutput4->TabIndex = 23;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(362, 35);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(100, 13);
			this->label19->TabIndex = 22;
			this->label19->Text = L"Имя файла ввода:";
			// 
			// tBInput4
			// 
			this->tBInput4->Location = System::Drawing::Point(365, 51);
			this->tBInput4->Name = L"tBInput4";
			this->tBInput4->Size = System::Drawing::Size(132, 20);
			this->tBInput4->TabIndex = 21;
			// 
			// btnInput4
			// 
			this->btnInput4->Location = System::Drawing::Point(365, 77);
			this->btnInput4->Name = L"btnInput4";
			this->btnInput4->Size = System::Drawing::Size(132, 36);
			this->btnInput4->TabIndex = 20;
			this->btnInput4->Text = L"Ввод из файла";
			this->btnInput4->UseVisualStyleBackColor = true;
			this->btnInput4->Click += gcnew System::EventHandler(this, &MyForm::btnInput4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(7, 241);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Результат:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(7, 19);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(92, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Исходный текст:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(10, 257);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->ShortcutsEnabled = false;
			this->textBox4->Size = System::Drawing::Size(349, 78);
			this->textBox4->TabIndex = 2;
			// 
			// btnResult4
			// 
			this->btnResult4->Location = System::Drawing::Point(227, 207);
			this->btnResult4->Name = L"btnResult4";
			this->btnResult4->Size = System::Drawing::Size(132, 35);
			this->btnResult4->TabIndex = 1;
			this->btnResult4->Text = L"Выполнить";
			this->btnResult4->UseVisualStyleBackColor = true;
			this->btnResult4->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(10, 35);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ShortcutsEnabled = false;
			this->textBox3->Size = System::Drawing::Size(349, 158);
			this->textBox3->TabIndex = 0;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(519, 382);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Индивидуальные задания";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		double* arr;
		int size = 0;
	private:
		char ds;    // Символ десятичного разделителя

		double* push_back(double* arr, int size, double num)
		{
			double* arr1 = new double[size + 1];
			for (int i = 0; i < size; i++)
			{
				arr1[i] = arr[i];
			}
			arr1[size] = num;
			delete[] arr;
			arr = new double[size + 1];
			for (int i = 0; i < size + 1; i++)
			{
				arr[i] = arr1[i];
			}
			delete[] arr1;
			return arr;
		}

		String^ DeleteProbel(String^ str)
		{
			String^ t = "";
			for (int i = 0; i < str->Length; i++)
			{
				if (i == 0 && str[i] == ' ')
				{
				}
				else if (i == str->Length - 1)
				{
					if (str[i] != ' ')
					{
						t += str[i];
					}
				}
				else
				{
					if (str[i] == ' ' && str[i + 1] == ' ')
					{
					}
					else
					{
						t += str[i];
					}
				}
			}
			return t;
		}
		String^ DeleteMinus(String^ str)
		{
			String^ t = "";
			if (str != "") {
				for (int i = 0; i < str->Length - 1; i++)
				{
					if (str[i] == '-' && str[i + 1] == '-')
					{
					}
					else
					{
						t += str[i];
					}
				}
				if (str[str->Length - 1] != '-')
					t += str[str->Length - 1];
				if (t == "-")
				{
					return "";
				}
			}
			return t;
		}

	private: System::Void btnRandomize_Click(System::Object^ sender, System::EventArgs^ e) {
		tBArr->Text = "";
		if (tBKolvo->Text == "")
		{
			Error("Введите количество элементов в массиве");
		}
		else if (tBMin->Text == "")
		{
			Error("Введите минимальное число диапазона");
		}

		else if (tBMax->Text == "")
		{
			Error("Введите максимальное число диапазона");
		}
		else if (Convert::ToDouble(tBMin->Text) > Convert::ToDouble(tBMax->Text)) {
			Error("Минимальное число диапазона не может быть больше максимального");
		}
		else
		{
			const int size = Convert::ToInt32(tBKolvo->Text);
			const double min_el = Convert::ToDouble(tBMin->Text);
			const double max_el = Convert::ToDouble(tBMax->Text);
			tBResult1->Text = "";
			arr = CreateRandomArr(size, min_el, max_el);
			Sort1(arr, size);
		}
		delete[]arr;
	}



		   void Error(String^ text)
		   {
			   MessageBox::Show(text, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		   }

		   String^ ArrToString(double* arr, int size)
		   {
			   String^ t = "";
			   for (int i = 0; i < size; i++)
			   {
				   if (i != size - 1)
				   {
					   t += Convert::ToString(arr[i]) + " ";
				   }
				   else
				   {
					   t += Convert::ToString(arr[i]);
				   }
			   }
			   return t;
		   }

		   void Sort1(double* const arr, int const size)
		   {
			   tBArr->Text = "";
			   double* arr1 = new double[size];
			   for (int i = 0; i < size; i++)
			   {
				   arr1[i] = arr[i];
			   }
			   for (int j = 0; j < (size - 1); j++)
			   {
				   for (int i = 0; i < (size - 1); i++)
				   {
					   if (arr1[i] > arr1[i + 1])
					   {
						   double t = arr1[i + 1];
						   arr1[i + 1] = arr1[i];
						   arr1[i] = t;
					   }
				   }
			   }
			   for (int i = 0; i < size; i++)
			   {
				   tBArr->Text += Convert::ToString(arr1[i]) + " ";
			   }
		   }

		   double* CreateRandomArr(const int size, double min_el, double max_el)
		   {
			   std::uniform_real_distribution<double> dist(min_el, max_el);
			   std::mt19937 rng;
			   rng.seed(std::random_device{}());
			   double* arr = new double[size];
			   for (int i = 0; i < size; i++)
			   {
				   double d = dist(rng);

				   arr[i] = round(d * 100) / 100; //2 знака после запятой
			   }
			   return arr;
		   }

		   double* StringToArr(String^ str)
		   {
			   str = DeleteProbel(str);
			   size = 0;
			   double* arr = new double[size];
			   String^ t = "";
			   str = DeleteProbel(str);
			   for (int i = 0; i < str->Length; i++)
			   {
				   if (System::Char::IsDigit(str[i]) || str[i] == '-' || str[i] == ',')
				   {
					   t = t + str[i];
					   if (i == (str->Length - 1))
					   {
						   t = DeleteMinus(t);
						   if (t != "")
						   {
							   arr = push_back(arr, size, Convert::ToDouble(t));
							   size += 1;
						   }
					   }
				   }
				   else
				   {
					   t = DeleteMinus(t);
					   if (t != "")
					   {
						   arr = push_back(arr, size, Convert::ToDouble(t));
						   size += 1;
						   t = "";
					   }
				   }
			   }
			   return arr;
		   }



	private: System::Void btnResult_Click(System::Object^ sender, System::EventArgs^ e) {
		tBResult1->Text = "";
		arr = StringToArr(tBArr->Text);
		Sort1(arr, size);
		if (size > 0) // (1)
		{
			if (tBb->Text != "" && tBb->Text != "-") { // (2)
				double* arr1 = new double[size + 1];
				int i;
				for (i = 0; i < size + 1; i++) // (3)
				{
					if (Convert::ToDouble(tBb->Text) <= arr[i]) // (4)
					{
						arr1[i] = Convert::ToDouble(tBb->Text);
						break;
					}
					else arr1[i] = arr[i];
				}
				if (i == size + 1) // (5)
				{
					arr1[i - 1] = Convert::ToDouble(tBb->Text);
				}
				while (i < size + 1) { // (6)
					arr1[i + 1] = arr[i];
					i++;
				}
				for (i = 0; i < size + 1; i++) // (1)
				{
					tBResult1->Text += arr1[i].ToString() + " ";
				}
			}
			else {
				Error("Значение b должно быть целым");
				return;
			}

		}
		tBArr->Text = ArrToString(arr, size);
		delete[] arr;

	}




	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Clear();
		if (textBox1->Text->Length > 0 && Convert::ToInt32(textBox1->Text) > 0)
		{
			int m = Convert::ToInt32(textBox1->Text);
			int const n = 100;
			int A[n][n];
			int i, j, d = 0;
			for (i = 0; i < m; i++)
				for (j = 0; j < m; j++)
					A[i][j] = 0;
			for (i = 0; i < m; i++)
				for (j = 0; j < m; j++)
				{
					if (j <= i)
					{
						A[i][j] = m - i + j;
					}

				}

			for (i = 0; i < m; i++)
			{
				if (d > 0) textBox2->Text += "\r\n";
				for (j = 0; j < m; j++)
				{
					if (A[i][j] < 10) textBox2->Text += " ";
					textBox2->Text += A[i][j].ToString() + "\t";
					d++;
				}
			}
		}
		else Error("Введите в размерность массива натуральное число");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int a, b, c, d;
		int S = 0;
		String^ str;
		if (tB1->Text == "0" || tB2->Text == "0" || tB3->Text == "0" || tB4->Text == "0")
		{
			Error("Исходные данные должны быть натуральными числами");
			return;
		}
		if (tB1->Text != "" && tB2->Text != "" && tB3->Text != "" && tB4->Text != "") {
			a = Convert::ToInt32(tB1->Text);
			b = Convert::ToInt32(tB2->Text);
			c = Convert::ToInt32(tB3->Text);
			d = Convert::ToInt32(tB4->Text);
			S = NOD(NOD(a, b), NOD(c, d));
			tBResult3->Text = S.ToString();

		}
		else Error("Введите все 4 значения");
	}
		   int NOD(int a, int b)
		   {
			   while (a && b)
				   b < a ? a %= b : b %= a;
			   return a | b;
		   }

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "rus");
		String^ text = textBox3->Text;
		int arr1[1104];
		for (int i = 1072; i < 1104; i++)
			arr1[i] = 0;
		textBox4->Text = "";
		String^ arr;
		String^ Ans = "";
		int j = 0;
		if (text == "") {
			Error("Введите исходный текст");
			return;
		}
		if (text != "" && (text->Length <= 200)) {
			for (int i = 0; i < text->Length; i++)
			{
				if (System::Char(text[i]) > 1039 && (System::Char(text[i] < 1104))) {
					if (System::Char(text[i]) > 1039 && (System::Char(text[i] < 1072)))
						arr1[System::Char(text[i]) + 32]++;
					else arr1[System::Char(text[i])]++;
				}
				if (System::Char(text[i]) == 1105 || System::Char(text[i]) == 1025)
					arr1[1077]++;
			}
			text = "";
			for (int i = 0; i <= 32; i++)
			{
				int max = 0, kmax = 0;
				for (int j = 1072; j < 1104; j++)
				{
					if (max < arr1[j]) {
						kmax = j;
						max = arr1[j];
					}
				}
				if (max != 0) {
					arr1[kmax] = 0;
					text += Bukva(kmax) + " - " + max.ToString() + " " + GetGrammarWord(max) + ", ";
				}

			}
			textBox4->Text = text;
			if (textBox4->Text != "")
			{
				String^ test = textBox4->Text;
				textBox4->Text = test->Remove(test->Length - 2, 2) + ".";
			}
		}
		else  if (text->Length > 200) {
			Error("Исходный текст должен состоять из менее, чем 200 символов");
			return;
		}
		else {
			Error("Введите исходный текст");
			return;
		}
		if (textBox4->Text == "")
			Error("В исходном тексте нет русских символов");


	}
		   String^ Bukva(int number)
		   {
			   switch (number)
			   {
			   case 1072: return "а";
			   case 1073: return "б";
			   case 1074: return "в";
			   case 1075: return "г";
			   case 1076: return "д";
			   case 1077: return "е";
			   case 1078: return "ж";
			   case 1079: return "з";
			   case 1080: return "и";
			   case 1081: return "й";
			   case 1082: return "к";
			   case 1083: return "л";
			   case 1084: return "м";
			   case 1085: return "н";
			   case 1086: return "о";
			   case 1087: return "п";
			   case 1088: return "р";
			   case 1089: return "с";
			   case 1090: return "т";
			   case 1091: return "у";
			   case 1092: return "ф";
			   case 1093: return "х";
			   case 1094: return "ц";
			   case 1095: return "ч";
			   case 1096: return "ш";
			   case 1097: return "щ";
			   case 1098: return "ъ";
			   case 1099: return "ы";
			   case 1100: return "ь";
			   case 1101: return "э";
			   case 1102: return "ю";
			   case 1103: return "я";
			   case 1104: return "@";
			   }
			   return "?";
		   }
		   String^ GetGrammarWord(int number)
		   {
			   switch (number)
			   {
			   case 12:
			   case 13:
			   case 14:
			   case 112:
			   case 113:
			   case 114: return "раз";
			   }

			   switch (number % 10)
			   {
			   case 2:
			   case 3:
			   case 4: return "раза";
			   default: return "раз";
			   }
		   }
	private: System::Void btnInput_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Title = "Ввод из файла";
		openFileDialog1->InitialDirectory = "e:\\";
		openFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->ShowReadOnly = true;
		openFileDialog1->RestoreDirectory = true;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ str = System::IO::File::ReadAllText(openFileDialog1->FileName);
			tBInput->Text = openFileDialog1->FileName;
			str = DeleteProbel(str);
			str = DeleteLishnSimv(str);
			Sort1(StringToArr(str), size);
			if (tBKolvo->Text != "" && size != Convert::ToInt32(tBKolvo->Text))
			{
				tBKolvo->Text = "";
				tBMin->Text = "";
				tBMax->Text = "";
			}
		}
		else
			tBArr->Text = "";
	}
		   String^ old1;
		   String^ old22;
	private: System::Void btnOutput_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Title = "Вывод в файл";
		saveFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
		saveFileDialog1->FilterIndex = 1;
		saveFileDialog1->RestoreDirectory = true;
		saveFileDialog1->OverwritePrompt = true;
		saveFileDialog1->CreatePrompt = true;

		if (tBResult1->Text == "" || tBResult1->Text == "")
			Error("Строка результата пуста");
		else
		{

			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ str = System::IO::File::ReadAllText(saveFileDialog1->FileName);

				tBOutput->Text = saveFileDialog1->FileName;
				if (old1 != tBArr->Text || old22 != tBb->Text)
				{
					if (str != "")
					{
						System::IO::File::AppendAllText(saveFileDialog1->FileName, "\n");
					}
					old1 = tBArr->Text;
					old22 = tBb->Text;
					System::IO::File::AppendAllText(saveFileDialog1->FileName, "Исходный массив:" + tBArr->Text + "\n");

					if (tBResult1->Text != "")
					{
						System::IO::File::AppendAllText(saveFileDialog1->FileName, "    " + "Новый массив:" + tBResult1->Text + "\n");
					}

				}
			}
		}
	}
		   String^ DeleteLishnSimv(String^ str)
		   {
			   String^ t = "";
			   for (int i = 0; i < str->Length; i++)
			   {
				   if (str[i] == '\n') t += " ";
				   if ((System::Char::IsDigit(str[i]) || str[i] == ' ' || str[i] == '-'))
				   {
					   t += str[i];
				   }
				   else t += " ";
			   }
			   return t;
		   }
		   String^ old2;
	private: System::Void btnOutput2_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Title = "Вывод в файл";
		saveFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
		saveFileDialog1->FilterIndex = 1;
		saveFileDialog1->RestoreDirectory = true;
		saveFileDialog1->OverwritePrompt = true;
		saveFileDialog1->CreatePrompt = true;
		String^ old;
		if (textBox2->Text == "")
			Error("Строка результата пуста");
		else
		{
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ str = System::IO::File::ReadAllText(saveFileDialog1->FileName);
				tBOutput2->Text = saveFileDialog1->FileName;
				if (textBox2->Text != "" && old2 != textBox1->Text)
				{
					if (str != "")
					{
						System::IO::File::AppendAllText(saveFileDialog1->FileName, "\n");
					}
					old2 = textBox1->Text;
					System::IO::File::AppendAllText(saveFileDialog1->FileName, "Массив заполненный по спирали с размерностью " + textBox1->Text + ":" + "\n" + textBox2->Text + "\n");
				}
			}
		}
	}
	private: System::Void btnInput4_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Title = "Ввод из файла";
		openFileDialog1->InitialDirectory = "e:\\";
		openFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->ShowReadOnly = true;
		openFileDialog1->RestoreDirectory = true;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ str = System::IO::File::ReadAllText(openFileDialog1->FileName);
			tBInput->Text = openFileDialog1->FileName;
			textBox3->Text = DeleteEnter(str);
		}
		else
			textBox3->Text = "";

	}
		   String^ DeleteEnter(String^ str)
		   {
			   String^ t = "";
			   for (int i = 0; i < str->Length; i++)
			   {
				   if (str[i] == '\n') t += " ";
				   else t += str[i];
			   }
			   return t;
		   }
		   String^ old4;
	private: System::Void btnOutput4_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Title = "Вывод в файл";
		saveFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
		saveFileDialog1->FilterIndex = 1;
		saveFileDialog1->RestoreDirectory = true;
		saveFileDialog1->OverwritePrompt = true;
		saveFileDialog1->CreatePrompt = true;

		if (textBox4->Text == "")
			Error("Строка результата пуста");
		else
		{
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ str = System::IO::File::ReadAllText(saveFileDialog1->FileName);
				tBOutput4->Text = saveFileDialog1->FileName;
				if (textBox4->Text != "" && old4 != textBox3->Text)
				{
					if (str != "")
					{
						System::IO::File::AppendAllText(saveFileDialog1->FileName, "\n");
					}
					old4 = textBox3->Text;
					System::IO::File::AppendAllText(saveFileDialog1->FileName, "Исходный текст:" + textBox3->Text + "\n" + "Результат:" + textBox4->Text + "\n");
				}
			}
		}
	}
	private: System::Void tBKolvo_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8)
			e->Handled = true;
	}
	private: System::Void tBArr_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8 && e->KeyChar != 45 && e->KeyChar != 32)
			e->Handled = true;
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		NumberFormatInfo^ nfi = NumberFormatInfo::CurrentInfo;
		ds = (char)nfi->NumberDecimalSeparator[0];
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8)
			e->Handled = true;
	}
	private: System::Void tBMin_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8 && e->KeyChar != 45 && e->KeyChar != 32 && e->KeyChar != 44)
			e->Handled = true;
	}
	private: System::Void tBMax_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8 && e->KeyChar != 45 && e->KeyChar != 32 && e->KeyChar != 44)
			e->Handled = true;
	}
		   String^ old3;
	private: System::Void btnOutput3_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Title = "Вывод в файл";
		saveFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
		saveFileDialog1->FilterIndex = 1;
		saveFileDialog1->RestoreDirectory = true;
		saveFileDialog1->OverwritePrompt = true;
		saveFileDialog1->CreatePrompt = true;
		if (tBResult3->Text == "")
			Error("Строка результата пуста");
		else
		{
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ str = System::IO::File::ReadAllText(saveFileDialog1->FileName);
				tBOutput3->Text = saveFileDialog1->FileName;
				if (tBResult3->Text != "" && old3 != tBResult3->Text)
				{
					if (str != "")
					{
						System::IO::File::AppendAllText(saveFileDialog1->FileName, "\n");
					}
					old3 = tBResult3->Text;
					System::IO::File::AppendAllText(saveFileDialog1->FileName, "При исходных данных a=" + tB1->Text + ", b=" + tB2->Text + ", c=" + tB3->Text + ", d=" + tB4->Text + "\n" + "Наибольший общий делитель равен " + tBResult3->Text + "\n");
				}
			}
		}
	}

	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == 13)
			e->Handled = false;
	}
	private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8 && e->KeyChar != 45 && e->KeyChar != 32 && e->KeyChar != 44)
			e->Handled = true;
	}
	private: System::Void tB1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar))
			e->Handled = true;
	}
	private: System::Void tB2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar))
			e->Handled = true;
	}
	private: System::Void tB3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar))
			e->Handled = true;
	}
	private: System::Void tB4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar))
			e->Handled = true;
	}
	private: System::Void tBMin_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Дана последовательность действительных чисел a1 <= a2 <= ... <= аn. Вставить действительное число b в нее так, чтобы последовательность осталась неубывающей.", "Задание 1");
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Сформировать квадратную матрицу порядка n по заданному образцу.", "Задание 2");
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Составить программу нахождения наибольшего общего делителя четырех натуральных чисел.", "Задание 3");
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Строка, содержащая произвольный русский текст, состоит не более чем из 200 символов. Написать, какие буквы и сколько раз встречаются в этом тексте. Ответ должен приводиться в грамматически правильной форме, например: а – 25 раз, к – 3 раза и т.д.", "Задание 4");
	}
	private: System::Void tBKolvo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}

