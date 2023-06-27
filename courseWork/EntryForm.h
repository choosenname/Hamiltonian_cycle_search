#pragma once
#include "MainForm.h"

namespace courseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Resources;
	using namespace System::Reflection;

	/// <summary>
	/// Сводка для EntryForm
	/// </summary>
	public ref class EntryForm : public System::Windows::Forms::Form
	{
	public:
		EntryForm(void)
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
		~EntryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ LoginTextBox;
	private: System::Windows::Forms::TextBox^ PasswordTextBox;
	private: System::Windows::Forms::Button^ EntryButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ LoginLabel1;
	private: System::Windows::Forms::Label^ PassworLabel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ языкToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ темаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ светлаяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ темнаяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pinkyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ беларускіToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ englishToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonPassVision;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EntryForm::typeid));
			this->LoginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->EntryButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LoginLabel1 = (gcnew System::Windows::Forms::Label());
			this->PassworLabel2 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->языкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->беларускіToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->englishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->темаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->светлаяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->темнаяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pinkyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonPassVision = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// LoginTextBox
			// 
			this->LoginTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->LoginTextBox, L"LoginTextBox");
			this->LoginTextBox->ForeColor = System::Drawing::Color::Black;
			this->LoginTextBox->Name = L"LoginTextBox";
			this->LoginTextBox->Enter += gcnew System::EventHandler(this, &EntryForm::LoginTextBox_Enter);
			this->LoginTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EntryForm::LoginTextBox_KeyPress);
			this->LoginTextBox->Leave += gcnew System::EventHandler(this, &EntryForm::LoginTextBox_Leave);
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->PasswordTextBox, L"PasswordTextBox");
			this->PasswordTextBox->ForeColor = System::Drawing::Color::Black;
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Enter += gcnew System::EventHandler(this, &EntryForm::PasswordTextBox_Enter);
			this->PasswordTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EntryForm::PasswordTextBox_KeyPress);
			this->PasswordTextBox->Leave += gcnew System::EventHandler(this, &EntryForm::PasswordTextBox_Leave);
			// 
			// EntryButton
			// 
			this->EntryButton->BackColor = System::Drawing::Color::Turquoise;
			resources->ApplyResources(this->EntryButton, L"EntryButton");
			this->EntryButton->Name = L"EntryButton";
			this->EntryButton->UseVisualStyleBackColor = false;
			this->EntryButton->Click += gcnew System::EventHandler(this, &EntryForm::EntryButton_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Name = L"label1";
			// 
			// LoginLabel1
			// 
			resources->ApplyResources(this->LoginLabel1, L"LoginLabel1");
			this->LoginLabel1->BackColor = System::Drawing::Color::White;
			this->LoginLabel1->Name = L"LoginLabel1";
			this->LoginLabel1->Click += gcnew System::EventHandler(this, &EntryForm::LoginLabel1_Click);
			// 
			// PassworLabel2
			// 
			resources->ApplyResources(this->PassworLabel2, L"PassworLabel2");
			this->PassworLabel2->BackColor = System::Drawing::Color::White;
			this->PassworLabel2->Name = L"PassworLabel2";
			this->PassworLabel2->Click += gcnew System::EventHandler(this, &EntryForm::PassworLabel2_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Name = L"label2";
			// 
			// linkLabel1
			// 
			resources->ApplyResources(this->linkLabel1, L"linkLabel1");
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->TabStop = true;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &EntryForm::linkLabel1_LinkClicked);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->настройкиToolStripMenuItem });
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->BackColor = System::Drawing::Color::Transparent;
			this->настройкиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->языкToolStripMenuItem,
					this->темаToolStripMenuItem
			});
			resources->ApplyResources(this->настройкиToolStripMenuItem, L"настройкиToolStripMenuItem");
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->DropDownClosed += gcnew System::EventHandler(this, &EntryForm::настройкиToolStripMenuItem_DropDownClosed);
			this->настройкиToolStripMenuItem->DropDownOpening += gcnew System::EventHandler(this, &EntryForm::настройкиToolStripMenuItem_DropDownOpening);
			// 
			// языкToolStripMenuItem
			// 
			this->языкToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->русскийToolStripMenuItem,
					this->беларускіToolStripMenuItem, this->englishToolStripMenuItem
			});
			resources->ApplyResources(this->языкToolStripMenuItem, L"языкToolStripMenuItem");
			this->языкToolStripMenuItem->Name = L"языкToolStripMenuItem";
			// 
			// русскийToolStripMenuItem
			// 
			resources->ApplyResources(this->русскийToolStripMenuItem, L"русскийToolStripMenuItem");
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			this->русскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &EntryForm::русскийToolStripMenuItem_Click);
			// 
			// беларускіToolStripMenuItem
			// 
			resources->ApplyResources(this->беларускіToolStripMenuItem, L"беларускіToolStripMenuItem");
			this->беларускіToolStripMenuItem->Name = L"беларускіToolStripMenuItem";
			this->беларускіToolStripMenuItem->Click += gcnew System::EventHandler(this, &EntryForm::беларускіToolStripMenuItem_Click);
			// 
			// englishToolStripMenuItem
			// 
			resources->ApplyResources(this->englishToolStripMenuItem, L"englishToolStripMenuItem");
			this->englishToolStripMenuItem->Name = L"englishToolStripMenuItem";
			this->englishToolStripMenuItem->Click += gcnew System::EventHandler(this, &EntryForm::englishToolStripMenuItem_Click);
			// 
			// темаToolStripMenuItem
			// 
			this->темаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->светлаяToolStripMenuItem,
					this->темнаяToolStripMenuItem, this->pinkyToolStripMenuItem
			});
			resources->ApplyResources(this->темаToolStripMenuItem, L"темаToolStripMenuItem");
			this->темаToolStripMenuItem->Name = L"темаToolStripMenuItem";
			// 
			// светлаяToolStripMenuItem
			// 
			resources->ApplyResources(this->светлаяToolStripMenuItem, L"светлаяToolStripMenuItem");
			this->светлаяToolStripMenuItem->Name = L"светлаяToolStripMenuItem";
			this->светлаяToolStripMenuItem->Click += gcnew System::EventHandler(this, &EntryForm::светлаяToolStripMenuItem_Click);
			// 
			// темнаяToolStripMenuItem
			// 
			resources->ApplyResources(this->темнаяToolStripMenuItem, L"темнаяToolStripMenuItem");
			this->темнаяToolStripMenuItem->Name = L"темнаяToolStripMenuItem";
			this->темнаяToolStripMenuItem->Click += gcnew System::EventHandler(this, &EntryForm::темнаяToolStripMenuItem_Click);
			// 
			// pinkyToolStripMenuItem
			// 
			resources->ApplyResources(this->pinkyToolStripMenuItem, L"pinkyToolStripMenuItem");
			this->pinkyToolStripMenuItem->Name = L"pinkyToolStripMenuItem";
			this->pinkyToolStripMenuItem->Click += gcnew System::EventHandler(this, &EntryForm::pinkyToolStripMenuItem_Click);
			// 
			// buttonPassVision
			// 
			this->buttonPassVision->BackColor = System::Drawing::Color::White;
			resources->ApplyResources(this->buttonPassVision, L"buttonPassVision");
			this->buttonPassVision->ForeColor = System::Drawing::Color::White;
			this->buttonPassVision->Name = L"buttonPassVision";
			this->buttonPassVision->UseVisualStyleBackColor = false;
			this->buttonPassVision->Click += gcnew System::EventHandler(this, &EntryForm::buttonPassVision_Click);
			// 
			// EntryForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			resources->ApplyResources(this, L"$this");
			this->BackColor = System::Drawing::SystemColors::Control;
			this->Controls->Add(this->buttonPassVision);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->PassworLabel2);
			this->Controls->Add(this->LoginLabel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->EntryButton);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->LoginTextBox);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"EntryForm";
			this->Load += gcnew System::EventHandler(this, &EntryForm::EntryForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// ResourceManager Класс. Представляет диспетчер ресурсов, обеспечивающий удобный доступ к ресурсам,
		// связанным с языком и региональными параметрами, во время выполнения.
	private: ResourceManager^ resourceManager = gcnew ResourceManager("courseWork.EntryForm", Assembly::GetExecutingAssembly());
		   // создаем экземпляр объекта resource manager, в параметрах передаем файл ресурсов для текущей формы, а также методом Assembly::GetExecutingAssembly() передаем сборку, которая содержит выполняемый в текущий момент код.
	private: ResourceManager^ myResourceManager = gcnew ResourceManager("courseWork.Ресурсы", Assembly::GetExecutingAssembly()); // аналогично только передаем общий для проекта файл ресурсов
	private: int Theme = 0; // переменная отвечающая за текущую тему окна

		   // Метод который возникает при каждой загрузке формы пользователем
	private: System::Void EntryForm_Load(System::Object^ sender, System::EventArgs^ e) {
		светлаяToolStripMenuItem->Enabled = false; // отключим кнопу отвечающую за смену цвета темы на светлую
		настройкиToolStripMenuItem->Image = Image::FromFile("Icon\\setting_black.png"); // устанавливаем темную картинку настроек
		buttonPassVision->BackgroundImage = Image::FromFile("Icon\\NotVisible.png"); // устанавливаем картинку глаза
	}
		
		   // Событие нажатие на кнопку входа
	private: System::Void EntryButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = LoginTextBox->Text; // помещаем в переменную login текст LoginTextBox
		String^ pass = PasswordTextBox->Text; // помещаем в переменную pass текст PasswordTextBox

		if (login != "") // проверяем пустой ли логин
		{
			if (pass != "") // также проверим пуст ли поле ввода пароля
			{
				// StreamReader Класс, Реализует объект TextReader, который считывает символы из потока байтов в определенной кодировке.
				StreamReader^ sReader = gcnew StreamReader("Data\\UserData"); // создаем поток чтения из файла UserData
				String^ line; // создаем переменную line типа указатель класса String

				while ((line = sReader->ReadLine()) != nullptr) // читаем линю и проверяем не пустая ли она
				{
					if (line == login) // проверяем соответствует ли введены пользователем логин записному в файл
					{
						line = sReader->ReadLine(); // если это так то запишем следующую строчку перенесенную line
						if (line == pass) // проверяемым соответствует ли введены пользователем пароль записанному в файл
						{
							MainForm^ open = gcnew MainForm(Theme); // создадим экземпляр объекта главной формы и передаем переменную Theme

							open->Show(); // отобразим главную форму

							this->Hide(); // а текущую скроем
						}
						else // если пароль не совпадает
							MessageBox::Show(myResourceManager->GetString("PasNotExistEx")); // сообщим пользователю об этом 

						sReader->Close(); // закроем поток чтения
						return; // закончим выполнение метода
					}
					else
					{
						sReader->ReadLine(); // прочтем следующую линию файла но не пометим ее в переменную
						// т.к. в ней храниться пароль
						continue; // продолжим выполнение цикла
					}
				}
				// если цикл прошел и не нашел подходящего логина
				sReader->Close(); // закроем поток чтения
				MessageBox::Show(myResourceManager->GetString("LogNotExistEx")); // сообщи что введенный пользователем логин не существует
			}
			else
				MessageBox::Show(resourceManager->GetString("PassworLabel2.Text")); // попросим пользователя ввести пароль если он пуст
		}
		else
			MessageBox::Show(resourceManager->GetString("LoginLabel1.Text")); // если логин пустой то просим пользователя его ввести
	}

		   // Событие которое возникает когда пользователь нажимает и отпускает клавишу, при этом элемент управления находиться в фокусе
	private: System::Void LoginTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == 13) // проверяемым является ли введенный пользователем символ символом новой строки с кодом 13
		{
			PasswordTextBox->Focus(); // переводим курсор на следующий текст бокс
			e->Handled = true; // сообщаем что событие было обработано
		}
	}
		   // Событие которое возникает когда пользователь нажимает и отпускает клавишу, при этом элемент управления находиться в фокусе
	private: System::Void PasswordTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == 13) // проверяем является ли введенный пользователем символ символом новой строки с кодом 13
		{
			EntryButton_Click(this, gcnew EventArgs());
			e->Handled = true; // сообщаем что событие было обработано
		}
	}
		   // Происходит когда элемент управления становиться активным
	private: System::Void LoginTextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		LoginLabel1->Visible = false; // делам LoginLabel1 невидимым
	}
		   // Происходит когда элемент управления становиться активным
	private: System::Void PasswordTextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		PassworLabel2->Visible = false; // делам PassworLabel2 невидимым
	}

		   // Происходит когда элемент управления перестает быть активным
	private: System::Void LoginTextBox_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->LoginTextBox->Text == "") // проверяем пустой ли textBox
			LoginLabel1->Visible = true; // если это так то делам LoginLabel1 видимым
	}
		   // Происходит когда элемент управления перестает быть активным
	private: System::Void PasswordTextBox_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->PasswordTextBox->Text == "") // проверяем пустой ли textBox
			PassworLabel2->Visible = true; // если это так то делам PassworLabel2 видимым
	}
		   // Происходит при щелчке элемента управления
	private: System::Void LoginLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
		LoginTextBox->Focus(); // переводим фокус на textBox находящийся под label'ом
	}

		   // Происходит при щелчке элемента управления
	private: System::Void PassworLabel2_Click(System::Object^ sender, System::EventArgs^ e) {
		PasswordTextBox->Focus(); // переводим фокус на textBox находящийся по label'ом
	}

		   // Событие на нажатие кнопки отображения пароля
	private: System::Void buttonPassVision_Click(System::Object^ sender, System::EventArgs^ e) {
		if (PasswordTextBox->UseSystemPasswordChar) // проверяем должен ли текст в TextBox отображаться как знак пароля по умолчанию
		{
			PasswordTextBox->UseSystemPasswordChar = false; // если это так то отключаем отображение пароля

			buttonPassVision->BackgroundImage = Image::FromFile("Icon\\NotVisible.png"); //  и меняем изображение кнопки
		}
		else
		{
			PasswordTextBox->UseSystemPasswordChar = true; //  в противном случаем скрываем текст знаком пароля по умолчанию

			buttonPassVision->BackgroundImage = Image::FromFile("Icon\\Visible.png"); //  и также меняем изображение кнопки
		}
	}

		   // Открытие формы регистрации
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);

		   // Смена темы на светлую
	private: System::Void светлаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackgroundImage = Image::FromFile("Backgrounds\\09. Light Sky Blue.png"); // меняем обезображение фона
		EntryButton->BackColor = Color::Turquoise; // цвет кнопки
		настройкиToolStripMenuItem->Image = Image::FromFile("Icon\\setting_black.png"); // и иконку настроек чтобы она была видна на фоне

		changeColor(Color::Black); // передаем параметр цвета в функцию для смены цвета элементов формы

		светлаяToolStripMenuItem->Enabled = false; // отключим кнопу темы

		Theme = 0; // и присваиваем переменной код темы
	}

		   // Смена темы на темную
	private: System::Void темнаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackgroundImage = Image::FromFile("Backgrounds\\100. Chetwode Blue.png"); // меняем изображение фона
		EntryButton->BackColor = Color::DarkSlateBlue; // цвет кнопки
		настройкиToolStripMenuItem->Image = Image::FromFile("Icon\\setting_white.png"); // и иконку настроек чтобы она была видна на фоне

		changeColor(Color::White); // передаем параметр цвета в функцию для смены цвета элементов формы

		темнаяToolStripMenuItem->Enabled = false; // отключим кнопу темы

		Theme = 1; // и присваиваем переменной код темы
	}

		   // Смена темы на розовую
	private: System::Void pinkyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackgroundImage = Image::FromFile("Backgrounds\\59. Light Blue.png"); // меняем обезображение фона
		EntryButton->BackColor = ColorTranslator::FromHtml("#E59DD0"); // цвет кнопки (определяем цвет кнопки по 16-ому коды для чего используем метод ColorTranslator::FromHtml())
		настройкиToolStripMenuItem->Image = Image::FromFile("Icon\\setting_black.png"); // и иконку настроек чтобы она была видна на фоне

		changeColor(Color::Black); // передаем параметр цвета в функцию для смены цвета элементов формы

		pinkyToolStripMenuItem->Enabled = false; // отключим кнопу темы

		Theme = 2; // и присваиваем переменной код темы
	}

		   // Изменение цвета текста Control'ов
	private: void changeColor(Color cl) {
		for each (Control ^ ct in Controls) // используем цикл for each для перебора всех элементов управления формы содержащий в коллекции  Controls
		{
			if (ct != LoginLabel1 && ct != PassworLabel2 && ct != LoginTextBox && ct != PasswordTextBox && ct != buttonPassVision) // проверим является ли очередной элемент управления одним из предложенных
				ct->ForeColor = cl; // если это не так то меняем цвет текста
		}
		linkLabel1->LinkColor = cl; // отдельно меняем цвет текста у linkLabel1 используя другое поле для определения цвета
		настройкиToolStripMenuItem->ForeColor = cl; // а также цвет кнопки настроек т.к. он не является частью коллекции Controls

		// последовательно включаем все кнопки тем
		светлаяToolStripMenuItem->Enabled = true;
		темнаяToolStripMenuItem->Enabled = true;
		pinkyToolStripMenuItem->Enabled = true;
	}
		   // Возникает при открытии DropDown
	private: System::Void настройкиToolStripMenuItem_DropDownOpening(System::Object^ sender, System::EventArgs^ e) {
		настройкиToolStripMenuItem->ForeColor = Color::Black; // перекрасим цвет кнопки в черный потому что фот всегда будет белым
		настройкиToolStripMenuItem->Image = Image::FromFile("Icon\\setting_black.png"); // по этой же причине меняем иконку кнопки
	}
		   // Возникаем при закрытии DropDown
	private: System::Void настройкиToolStripMenuItem_DropDownClosed(System::Object^ sender, System::EventArgs^ e) {
		if (Theme == 1) // если код темы 1 то есть темная
		{
			настройкиToolStripMenuItem->ForeColor = Color::White; // то возвращаем цвет кнопки настроек
			настройкиToolStripMenuItem->Image = Image::FromFile("Icon\\setting_white.png"); // и её иконку
		}
	}
		   // Происходит при смене языка ну русский
	private: System::Void русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		changeLang(""); // передаем пустой параметр языка т.к. русский по умолчанию и от выбора любого другого результат не поменяться
	}
		   // Происходит при смене языка ну белорусский
	private: System::Void беларускіToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		changeLang("be"); // передаем белорусский язык
	}
		   // Происходит при смене языка ну английский
	private: System::Void englishToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		changeLang("en"); // передаем параметр английский язык
	}
		   // Метод смены языка (применения ресурсов языка)
	private: void changeLang(String^ l) {
		// задаем язык и региональные параметры для текущего потока
		Thread::CurrentThread->CurrentUICulture = gcnew Globalization::CultureInfo(l);
		Thread::CurrentThread->CurrentCulture = gcnew Globalization::CultureInfo(l);

		this->Text = resourceManager->GetString("$this.Text"); // помещаем текст заголовка записанный в файле ресурсов при помощи resourceManager

		ComponentResourceManager^ resources = gcnew ComponentResourceManager(this->GetType()); // создаем объект который ищет ресурсы в сопутствующий сборках

		for each (Control ^ ct in Controls) // используем цикл for each для перебора всех элементов управления формы содержащий в коллекции  Controls
		{
			resources->ApplyResources(ct, ct->Name); // применят значение ресурса к соответствующему свойству объекта
		}

		// включаем все кнопки смены языка
		русскийToolStripMenuItem->Enabled = true;
		беларускіToolStripMenuItem->Enabled = true;
		englishToolStripMenuItem->Enabled = true;

		for each (ToolStripMenuItem ^ item in menuStrip1->Items) // используем цикл for each для перебора всех элементов управления формы содержащий в коллекции  menuStrip1->Items
		{
			applyLangToToolStripMenu(resources, item); // циклически вызываем рекурсивный метод применения ресурсов к элементам menuStrip1
		}
	}
		   // Метод применения ресурсов к элементам ToolStripMenu
	private: void applyLangToToolStripMenu(ComponentResourceManager^ resources, ToolStripMenuItem^ item)
	{
		resources->ApplyResources(item, item->Name); // применят значение ресурса к соответствующему свойству объекта
		for each (ToolStripMenuItem ^ itm in item->DropDownItems) // перебираем элементы коллекции DropDownItems
			applyLangToToolStripMenu(resources, itm); // рекурсивно вызываем метод
	}
};
}
