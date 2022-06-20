#pragma once

namespace Winform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Speech::Synthesis;


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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ lstOutput;






	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txtauthor;
	private: System::Windows::Forms::TextBox^ txtbookName;
	private: System::Windows::Forms::TextBox^ txtpublication;
	private: System::Windows::Forms::TextBox^ txtprice;









	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::ComboBox^ txtID;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::TextBox^ searchText;
	private: System::Windows::Forms::Label^ label6;







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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lstOutput = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txtauthor = (gcnew System::Windows::Forms::TextBox());
			this->txtbookName = (gcnew System::Windows::Forms::TextBox());
			this->txtpublication = (gcnew System::Windows::Forms::TextBox());
			this->txtprice = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->searchText = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Код книги";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// lstOutput
			// 
			this->lstOutput->BackColor = System::Drawing::Color::AliceBlue;
			this->lstOutput->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lstOutput->FormattingEnabled = true;
			this->lstOutput->ItemHeight = 22;
			this->lstOutput->Location = System::Drawing::Point(17, 96);
			this->lstOutput->Name = L"lstOutput";
			this->lstOutput->Size = System::Drawing::Size(1104, 246);
			this->lstOutput->TabIndex = 2;
			this->lstOutput->Click += gcnew System::EventHandler(this, &MyForm::lstOutput_Click);
			this->lstOutput->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Brown;
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(305, 364);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 39);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Удалить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(102, 364);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 37);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Подтвердить";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// txtauthor
			// 
			this->txtauthor->Location = System::Drawing::Point(270, 50);
			this->txtauthor->Name = L"txtauthor";
			this->txtauthor->Size = System::Drawing::Size(113, 20);
			this->txtauthor->TabIndex = 8;
			// 
			// txtbookName
			// 
			this->txtbookName->Location = System::Drawing::Point(502, 50);
			this->txtbookName->Name = L"txtbookName";
			this->txtbookName->Size = System::Drawing::Size(119, 20);
			this->txtbookName->TabIndex = 9;
			this->txtbookName->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// txtpublication
			// 
			this->txtpublication->Location = System::Drawing::Point(755, 50);
			this->txtpublication->Name = L"txtpublication";
			this->txtpublication->Size = System::Drawing::Size(130, 20);
			this->txtpublication->TabIndex = 10;
			// 
			// txtprice
			// 
			this->txtprice->Location = System::Drawing::Point(1008, 50);
			this->txtprice->Name = L"txtprice";
			this->txtprice->Size = System::Drawing::Size(113, 20);
			this->txtprice->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(265, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 29);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Автор";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(498, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 29);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Название";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(750, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 29);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Год издания";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1003, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 29);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Цена";
			// 
			// txtID
			// 
			this->txtID->FormattingEnabled = true;
			this->txtID->Location = System::Drawing::Point(17, 50);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(108, 21);
			this->txtID->TabIndex = 21;
			this->txtID->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::txtID_SelectedIndexChanged);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(623, 365);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(94, 37);
			this->button6->TabIndex = 22;
			this->button6->Text = L"Добавить";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// searchText
			// 
			this->searchText->Location = System::Drawing::Point(899, 373);
			this->searchText->Name = L"searchText";
			this->searchText->Size = System::Drawing::Size(102, 20);
			this->searchText->TabIndex = 25;
			this->searchText->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(850, 345);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(197, 22);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Поиск под коду книги";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1148, 440);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->searchText);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtprice);
			this->Controls->Add(this->txtpublication);
			this->Controls->Add(this->txtbookName);
			this->Controls->Add(this->txtauthor);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->lstOutput);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ stdDetails = "{0,-50}{1,-55}{2,-55}{3,-55}{4,-50}";
		SpeechSynthesizer^ Sapi = gcnew SpeechSynthesizer;

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		lstOutput->Items->RemoveAt(lstOutput->SelectedIndex);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		lstOutput->Items->Add(String::Format(stdDetails, "Код", "Автор", "Название", "Год издания", "Цена"));
		txtID->Items->Add("Выберите код");
		txtID->Items->Add("1");
		txtID->Items->Add("2");
		txtID->Items->Add("3");
		txtID->Items->Add("4");
		txtID->Items->Add("5");
		txtID->Items->Add("6");


	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (lstOutput->SelectedIndex > 0)
		{
			int index = lstOutput->SelectedIndex;
			String text = lstOutput->SelectedItem->ToString();
			lstOutput->Items->RemoveAt(lstOutput->SelectedIndex);
			lstOutput->Items->Insert(index - 1, text);
		}*/
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ ID;
		String^ author;
		String^ bookName;
		String^ publication;
		String^ price;
		ID = txtID->Text;
		author = txtauthor->Text;
		bookName = txtbookName->Text;
		publication = txtpublication->Text;
		price = txtprice->Text;

		lstOutput->Items->Add(String::Format(stdDetails, ID, author, bookName, publication, price));



	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		txtauthor->Text = "";
		txtbookName->Text = "";
		txtpublication->Text = "";
		txtprice->Text = "";



	}
	private: System::Void txtID_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		/* if (lstOutput->SelectedIndex > lstOutput->items->Count){
		int index = lstOutput->SelectedIndex;
			String text = lstOutput->SelectedItem->ToString();
			lstOutput->Items->RemoveAt(lstOutput->SelectedIndex);
			lstOutput->Items->Insert(index +1, text);
			}
			*/
	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {

		{
		}
		}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	/*IO::StreamWriter^ sw = gcnew IO::StreamWriter("listbox.txt", false, System::Text::Encoding::Unicode);

	for each (Object ^ i in this->lstOutput->Items)
	{
		sw->WriteLine(i->ToString());
	}

	sw->Flush();
	sw->Close();

	delete sw;*/
	
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	//int index = lstOutput->FindString(searchText->Text);
//FOUNDLISTBOOKS->Items->Add(String::Format(stdDetails, ID, author, bookName, publication, price));
/*if (index != -1) {
lstOutput->GetSelected(index);*/
	lstOutput->SelectedIndex = lstOutput->FindString(searchText->Text);
}
private: System::Void lstOutput_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}