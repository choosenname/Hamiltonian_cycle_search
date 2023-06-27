#pragma once

namespace courseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для EnterData
	/// </summary>
	public ref class EnterData : public System::Windows::Forms::Form
	{
	public:
		EnterData(int th)
		{
			InitializeComponent();
			Theme = th;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~EnterData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EnterData::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EnterData::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Orange;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EnterData::button1_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Name = L"label1";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Crimson;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &EnterData::button2_Click);
			// 
			// EnterData
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"EnterData";
			this->Load += gcnew System::EventHandler(this, &EnterData::EnterData_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: static String^ str;// создаем переменную str типа String
	private: int Theme; // переменная отвечающая за текущую тему окна
		   // Возникает при каждой загрузке формы пользователем
	private: System::Void EnterData_Load(System::Object^ sender, System::EventArgs^ e) {
		switch (Theme) // передаем в switch-case параметр Theme
		{
		case 0: // если код темы равен 0 то есть светлой
		{
			// то просто пропускаем т.к. светлая тема стоит по умолчанию
			break;
		}
		case 1:  // если тема темная
		{
			textBox1->BackColor = Color::DarkGray; // меняем фон textBox'а
			changeColor(Color::DimGray, Color::White); // используем метод смены цвета
			break;
		}
		case 2: // если тема розовая
		{
			textBox1->BackColor = Color::Snow; // меняем фон textBox'а
			changeColor(Color::Lavender, Color::Black); // используем метод смены цвета
			break;
		}
		}
	}
		   // Метод смены цвета
	private: void changeColor(Color cl1, Color cl2) {
		this->BackColor = cl1; // красим фон формы в первый переданный цвет

		label1->BackColor = cl1; // красим фон label'a во первый переданный цвет
		label1->ForeColor = cl2; // красим текст label'a во второй переданный цвет

		textBox1->ForeColor = cl2; // красим текст textBox'а во второй переданный цвет
	}
		   // Возникает при нажатии на button1
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Contains(" ")) // если textBox содержит пробелы
		{
			MessageBox::Show("Значение не может содержать пробелы"); // сообщаем об ошибке пользователю
		}
		else if (textBox1->Text->IsNullOrEmpty(textBox1->Text)) // если textBox пуст
		{
			this->Close(); // закрываем окно
		}
		else
		{
			str = textBox1->Text; // записываем содержимое в переменную
			this->Close(); // закрываем окно
		}
		/*MainForm^ f = gcnew MainForm();
		f->SetVolume(Current, textBox1->Text);*/
	}
		   // Событие которое возникает когда пользователь нажимает и отпускает клавишу, при этом элемент управления находиться в фокусе
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == 13) // проверяемым является ли введенный пользователем символ символом новой строки с кодом 13
		{
			e->Handled = true; // сообщаем что событие было обработано
			button1_Click(this, gcnew EventArgs()); // вызываем событие нажатия на кнопку 
		}
	}
		   // Происходит при нажатии button2
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close(); // закрываем окно
	}
	};
}
