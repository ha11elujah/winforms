#pragma once
#include "MyForm.h"

namespace Winform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для mainFrom
	/// </summary>
	public ref class mainFrom : public System::Windows::Forms::Form
	{
	public:
		mainFrom(void)
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
		~mainFrom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ name;
	protected:

	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::Button^ btnmainmenu;
	private: System::Windows::Forms::Label^ surname;

	private: System::Windows::Forms::TextBox^ UserSurname;
	private: System::Windows::Forms::Label^ DataR;
	private: System::Windows::Forms::MaskedTextBox^ Dataroj;
	private: System::Windows::Forms::MaskedTextBox^ Adres;
	private: System::Windows::Forms::Label^ label4;



	protected:



	protected:


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
			this->name = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->btnmainmenu = (gcnew System::Windows::Forms::Button());
			this->surname = (gcnew System::Windows::Forms::Label());
			this->UserSurname = (gcnew System::Windows::Forms::TextBox());
			this->DataR = (gcnew System::Windows::Forms::Label());
			this->Dataroj = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Adres = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->name->Location = System::Drawing::Point(12, 9);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(133, 22);
			this->name->TabIndex = 2;
			this->name->Text = L"Введите имя ";
			this->name->Click += gcnew System::EventHandler(this, &mainFrom::label1_Click);
			// 
			// username
			// 
			this->username->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->username->Location = System::Drawing::Point(12, 55);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(133, 20);
			this->username->TabIndex = 3;
			this->username->TextChanged += gcnew System::EventHandler(this, &mainFrom::username_TextChanged);
			// 
			// btnmainmenu
			// 
			this->btnmainmenu->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->btnmainmenu->Location = System::Drawing::Point(12, 201);
			this->btnmainmenu->Name = L"btnmainmenu";
			this->btnmainmenu->Size = System::Drawing::Size(90, 27);
			this->btnmainmenu->TabIndex = 4;
			this->btnmainmenu->Text = L"войти";
			this->btnmainmenu->UseVisualStyleBackColor = true;
			this->btnmainmenu->Click += gcnew System::EventHandler(this, &mainFrom::button1_Click);
			// 
			// surname
			// 
			this->surname->AutoSize = true;
			this->surname->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->surname->Location = System::Drawing::Point(8, 95);
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(182, 22);
			this->surname->TabIndex = 5;
			this->surname->Text = L"Введите фамилию ";
			this->surname->Click += gcnew System::EventHandler(this, &mainFrom::label2_Click);
			// 
			// UserSurname
			// 
			this->UserSurname->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->UserSurname->Location = System::Drawing::Point(4, 131);
			this->UserSurname->Name = L"UserSurname";
			this->UserSurname->Size = System::Drawing::Size(141, 20);
			this->UserSurname->TabIndex = 6;
			this->UserSurname->TextChanged += gcnew System::EventHandler(this, &mainFrom::textBox1_TextChanged);
			// 
			// DataR
			// 
			this->DataR->AutoSize = true;
			this->DataR->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DataR->Location = System::Drawing::Point(234, 9);
			this->DataR->Name = L"DataR";
			this->DataR->Size = System::Drawing::Size(153, 22);
			this->DataR->TabIndex = 7;
			this->DataR->Text = L"Дата рождения";
			this->DataR->Click += gcnew System::EventHandler(this, &mainFrom::label3_Click);
			// 
			// Dataroj
			// 
			this->Dataroj->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Dataroj->Location = System::Drawing::Point(238, 55);
			this->Dataroj->Mask = L"00/00/0000";
			this->Dataroj->Name = L"Dataroj";
			this->Dataroj->Size = System::Drawing::Size(139, 20);
			this->Dataroj->TabIndex = 9;
			this->Dataroj->ValidatingType = System::DateTime::typeid;
			// 
			// Adres
			// 
			this->Adres->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Adres->Location = System::Drawing::Point(238, 131);
			this->Adres->Name = L"Adres";
			this->Adres->Size = System::Drawing::Size(160, 20);
			this->Adres->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(234, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 22);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Адрес";
			// 
			// mainFrom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(416, 266);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Adres);
			this->Controls->Add(this->Dataroj);
			this->Controls->Add(this->DataR);
			this->Controls->Add(this->UserSurname);
			this->Controls->Add(this->surname);
			this->Controls->Add(this->btnmainmenu);
			this->Controls->Add(this->username);
			this->Controls->Add(this->name);
			this->Name = L"mainFrom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" user name";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ userName = username->Text;
		String^ userSurname = UserSurname->Text;
		MessageBox::Show("Привет, " + userName + " " + userSurname + "!");
		MyForm^ f2 = gcnew MyForm();
		f2->Show();
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}


