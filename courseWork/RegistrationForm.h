#pragma once
#include "EntryForm.h"
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
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Сводка для RegistrationForm
	/// </summary>
	public ref class RegistrationForm : public System::Windows::Forms::Form
	{
	public:
		RegistrationForm(EntryForm^ form, int th)
		{
			InitializeComponent();
			Parent = form;
			Theme = th;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ RegistrationButton;
	private: System::Windows::Forms::TextBox^ LoginTextBox;
	private: System::Windows::Forms::TextBox^ PasswordTextBox;
	private: System::Windows::Forms::TextBox^ Password2TextBox;
	private: System::Windows::Forms::Label^ LoginLabel1;
	private: System::Windows::Forms::Label^ PassworLabel2;
	private: System::Windows::Forms::Label^ PassworLabel3;

	private: System::Windows::Forms::LinkLabel^ linkLabel1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegistrationForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->RegistrationButton = (gcnew System::Windows::Forms::Button());
			this->LoginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->Password2TextBox = (gcnew System::Windows::Forms::TextBox());
			this->LoginLabel1 = (gcnew System::Windows::Forms::Label());
			this->PassworLabel2 = (gcnew System::Windows::Forms::Label());
			this->PassworLabel3 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->buttonPassVision = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Name = L"label1";
			// 
			// RegistrationButton
			// 
			this->RegistrationButton->BackColor = System::Drawing::Color::DeepSkyBlue;
			resources->ApplyResources(this->RegistrationButton, L"RegistrationButton");
			this->RegistrationButton->Name = L"RegistrationButton";
			this->RegistrationButton->UseVisualStyleBackColor = false;
			this->RegistrationButton->Click += gcnew System::EventHandler(this, &RegistrationForm::RegistrationButton_Click);
			// 
			// LoginTextBox
			// 
			this->LoginTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->LoginTextBox, L"LoginTextBox");
			this->LoginTextBox->ForeColor = System::Drawing::Color::Black;
			this->LoginTextBox->Name = L"LoginTextBox";
			this->LoginTextBox->Enter += gcnew System::EventHandler(this, &RegistrationForm::LoginTextBox_Enter);
			this->LoginTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RegistrationForm::LoginTextBox_KeyPress);
			this->LoginTextBox->Leave += gcnew System::EventHandler(this, &RegistrationForm::LoginTextBox_Leave);
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->PasswordTextBox, L"PasswordTextBox");
			this->PasswordTextBox->ForeColor = System::Drawing::Color::Black;
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Enter += gcnew System::EventHandler(this, &RegistrationForm::PasswordTextBox_Enter);
			this->PasswordTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RegistrationForm::PasswordTextBox_KeyPress);
			this->PasswordTextBox->Leave += gcnew System::EventHandler(this, &RegistrationForm::PasswordTextBox_Leave);
			// 
			// Password2TextBox
			// 
			this->Password2TextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->Password2TextBox, L"Password2TextBox");
			this->Password2TextBox->ForeColor = System::Drawing::Color::Black;
			this->Password2TextBox->Name = L"Password2TextBox";
			this->Password2TextBox->Enter += gcnew System::EventHandler(this, &RegistrationForm::Password2TextBox_Enter);
			this->Password2TextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RegistrationForm::Password2TextBox_KeyPress);
			this->Password2TextBox->Leave += gcnew System::EventHandler(this, &RegistrationForm::Password2TextBox_Leave);
			// 
			// LoginLabel1
			// 
			resources->ApplyResources(this->LoginLabel1, L"LoginLabel1");
			this->LoginLabel1->BackColor = System::Drawing::Color::White;
			this->LoginLabel1->Name = L"LoginLabel1";
			this->LoginLabel1->Click += gcnew System::EventHandler(this, &RegistrationForm::LoginLabel1_Click);
			// 
			// PassworLabel2
			// 
			resources->ApplyResources(this->PassworLabel2, L"PassworLabel2");
			this->PassworLabel2->BackColor = System::Drawing::Color::White;
			this->PassworLabel2->Name = L"PassworLabel2";
			this->PassworLabel2->Click += gcnew System::EventHandler(this, &RegistrationForm::PassworLabel2_Click);
			// 
			// PassworLabel3
			// 
			resources->ApplyResources(this->PassworLabel3, L"PassworLabel3");
			this->PassworLabel3->BackColor = System::Drawing::Color::White;
			this->PassworLabel3->Name = L"PassworLabel3";
			this->PassworLabel3->Click += gcnew System::EventHandler(this, &RegistrationForm::PassworLabel3_Click);
			// 
			// linkLabel1
			// 
			resources->ApplyResources(this->linkLabel1, L"linkLabel1");
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->TabStop = true;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegistrationForm::linkLabel1_LinkClicked);
			// 
			// buttonPassVision
			// 
			this->buttonPassVision->BackColor = System::Drawing::Color::White;
			resources->ApplyResources(this->buttonPassVision, L"buttonPassVision");
			this->buttonPassVision->ForeColor = System::Drawing::Color::White;
			this->buttonPassVision->Name = L"buttonPassVision";
			this->buttonPassVision->UseVisualStyleBackColor = false;
			this->buttonPassVision->Click += gcnew System::EventHandler(this, &RegistrationForm::buttonPassVision_Click);
			// 
			// RegistrationForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->buttonPassVision);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->PassworLabel3);
			this->Controls->Add(this->PassworLabel2);
			this->Controls->Add(this->LoginLabel1);
			this->Controls->Add(this->Password2TextBox);
			this->Controls->Add(this->RegistrationButton);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LoginTextBox);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"RegistrationForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &RegistrationForm::RegistrationForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &RegistrationForm::RegistrationForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// ResourceManager Класс. Представляет диспетчер ресурсов, обеспечивающий удобный доступ к ресурсам,
		// связанным с языком и региональными параметрами, во время выполнения.
	private: ResourceManager^ resourceManager = gcnew ResourceManager("courseWork.RegistrationForm", Assembly::GetExecutingAssembly());
		   // создаем экземпляр объекта resource manager, в параметрах передаем файл ресурсов для текущей формы, а также методом Assembly::GetExecutingAssembly() передаем сборку, которая содержит выполняемый в текущий момент код.
	private: ResourceManager^ myResourceManager = gcnew ResourceManager("courseWork.Ресурсы", Assembly::GetExecutingAssembly()); // аналогично только передаем общий для проекта файл ресурсов
	private: int Theme; // переменная отвечающая за текущую тему окна
	private: EntryForm^ Parent; // создаем экземпляр формы входа

		   // Возникает при каждой загрузке формы пользователем
	private: System::Void RegistrationForm_Load(System::Object^ sender, System::EventArgs^ e) {
		switch (Theme) // передаем в switch-case параметр Theme
		{
		case 0: // если код темы равен 0 то есть светлой
		{
			// то просто пропускаем т.к. светлая тема стоит по умолчанию
			break;
		}
		case 1: // если тема темная
		{
			this->BackgroundImage = Image::FromFile("Backgrounds\\Dark Blue With Black Vignette.png"); // изменяем фон окна
			RegistrationButton->BackColor = ColorTranslator::FromHtml("#0D1C6D"); // и цвет кнопки, путем задания 16-го кода

			changeColor(Color::White); // используем метод смены цвета и передаем параметры белого цвета

			break;
		}
		case 2: // если тема розовая
		{
			this->BackgroundImage = Image::FromFile("Backgrounds\\50. Columbia Blue.png"); // изменяем фон окна
			RegistrationButton->BackColor = ColorTranslator::FromHtml("#D25ED5"); // и цвет кнопки, путем задания 16-го кода

			changeColor(Color::Black); // используем метод смены цвета и передаем параметры черного цвета

			break;
		}
		}
	}
		   // Метод смены цвета
	private: void changeColor(Color cl) {
		for each (Control ^ ct in Controls) // используем цикл for each для перебора всех элементов управления формы содержащий в коллекции  Controls
		{
			// проверим является ли очередной элемент управления одним из предложенных
			if (ct != LoginLabel1 && ct != PassworLabel2 && ct != PassworLabel3 && ct != LoginTextBox && ct != PasswordTextBox && ct != Password2TextBox && ct != buttonPassVision)
				ct->ForeColor = cl; // если это не так то меняем цвет текста
		}
		linkLabel1->LinkColor = cl; // отдельно меняем цвет текста у linkLabel1 используя другое поле для определения цвета
	}
		   // Возникает при нажатии кнопки регистрации
	private: System::Void RegistrationButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try // блок try для обработки ошибок
		{
			String^ login = LoginTextBox->Text; // инициализируем переменную login текстом из LoginTextBox при декларации
			String^ password = PasswordTextBox->Text; // инициализируем переменную password текстом из PasswordTextBox при декларации 

			if (login != "") // проверяем пустой ли LoginTextBox
			{
				if (login->Length >= 3 && login->Length <= 32) // проверяем подходит ли длинна логина
				{
					Regex^ regex = gcnew Regex("^[a-zA-Z0-9_-]{3,32}$"); // инициализируем экземпляр объекта Regex для указания регулярного выражения, и декларируем на месте

					if (regex->IsMatch(login)) // проверяем соответствует ли логин регулярному выражению
					{
						// если логин подходит
						StreamReader^ sReader = gcnew StreamReader("Data\\UserData"); // создаем новый экземпляр объекта StreamReader для чтения файла
						String^ line; // создаем экземпляр объекта String

						while ((line = sReader->ReadLine()) != nullptr) // читаем линию файла и проверяем не пустой ли он
						{
							if (line == login) // проверяем записан ли логин в файл
							{
								MessageBox::Show(myResourceManager->GetString("LogExistEx")); // сообщаем что логин уже есть

								sReader->Close(); // закрываем поток чтения
								return; // закончим выполнение метода
							}
							else
							{
								sReader->ReadLine(); // читаем следующую линию
								//line = sReader->ReadLine();
								continue; // продолжаем проверку
							}
						}
						// если логина не повторяется 
						sReader->Close(); // закрываем поток чтения

						if (password != "") // проверяем введен ли текст в поле для пароля
						{
							if (password->Length >= 8 && password->Length <= 64) // проверяем длину пароля
							{
								regex = gcnew Regex("^[a-zA-Z0-9_@#$%^!&*?-]{8,64}$"); // декларируем экземпляр объекта Regex для указания регулярного выражения

								if (regex->IsMatch(password)) // проверяем соответствует ли пароль регулярному выражению
								{
									if (Password2TextBox->Text != "") // проверяем пустое ли второе поля для пароля
									{
										if (password == Password2TextBox->Text) // проверяем одинаковые ли пароли
										{
											StreamWriter^ sWriter = gcnew StreamWriter("Data\\UserData", true); // создаем новый экземпляр объекта StreamWriter для записи в файл

											sWriter->WriteLine(login); // записываем логин
											sWriter->WriteLine(password); // и под ним пароль

											sWriter->Close(); // закрываем поток для записи

											MainForm^ open = gcnew MainForm(Theme); // создадим экземпляр объекта главной формы и передаем переменную Theme

											open->Show(); // отобразим главную форму

											//RegistrationForm::Hide();
											this->Close(); // закрываем текущую форму
											Parent->Hide(); // скрываем форму входа
										}
										else
											MessageBox::Show(myResourceManager->GetString("PassMatchEx")); // сообщаем что пароли не совпадают
									}
									else
										MessageBox::Show(resourceManager->GetString("PassworLabel3.Text")); // просим ввести в второе поле пароля
								}
								else
									MessageBox::Show(myResourceManager->GetString("PassContentEx")); // сообщаем что пароль содержит не подходящие символы
							}
							else
								MessageBox::Show(myResourceManager->GetString("PassLengthEx")); // если длина пароля не подходит, выводим об этом сообщение
						}
						else
							MessageBox::Show(resourceManager->GetString("PassworLabel2.Text")); // просим пользователя ввести пароль
					}
					else
						MessageBox::Show(myResourceManager->GetString("LogContentEx")); // сообщаем что логин содержит не подходящие символы
				}
				else
					MessageBox::Show(myResourceManager->GetString("LogLengthEx")); // если длина логина не подходит, выводим об этом сообщение
			}
			else
				MessageBox::Show(resourceManager->GetString("LoginLabel1.Text")); // просим пользователя ввести логин
		}
		catch (System::Exception^ ex) // отлавливаем общую ошибку
		{
			MessageBox::Show(ex->Message->ToString()); //помещаем текст исключение в MessageBox()
		}
	}
		   // Событие которое возникает когда пользователь нажимает и отпускает клавишу, при этом элемент управления находиться в фокусе
	private: System::Void LoginTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		try // блок try для обработки ошибок
		{
			if (e->KeyChar == 13) // проверяемым является ли введенный пользователем символ символом новой строки с кодом 13
			{
				e->Handled = true; // сообщаем что событие было обработано

				String^ login = LoginTextBox->Text; // инициализируем переменную login текстом из LoginTextBox при декларации

				if (login != "") // проверяем пустой ли LoginTextBox
				{
					if (login->Length >= 3 && login->Length <= 32) // проверяем подходит ли длинна логина
					{
						Regex^ regex = gcnew Regex("^[a-zA-Z0-9_-]{3,32}$"); // инициализируем экземпляр объекта Regex для указания регулярного выражения, и декларируем на месте

						if (regex->IsMatch(login)) // проверяем соответствует ли логин регулярному выражению
						{
							PasswordTextBox->Focus(); // переводим курсор на следующий текст бокс
						}
						else
							MessageBox::Show(myResourceManager->GetString("LogContentEx")); // сообщаем что логин содержит не подходящие символы
					}
					else
						MessageBox::Show(myResourceManager->GetString("LogLengthEx")); // если длина логина не подходит, выводим об этом сообщение
				}
				else
					MessageBox::Show(resourceManager->GetString("LoginLabel1.Text")); // просим пользователя ввести логин
			}
		}
		catch (System::Exception^ ex) // отлавливаем общую ошибку
		{
			MessageBox::Show(ex->Message->ToString()); //помещаем текст исключение в MessageBox()
		}
	}
		   // Событие которое возникает когда пользователь нажимает и отпускает клавишу, при этом элемент управления находиться в фокусе
	private: System::Void PasswordTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		try // блок try для обработки ошибок
		{
			if (e->KeyChar == 13) // проверяемым является ли введенный пользователем символ символом новой строки с кодом 13
			{
				e->Handled = true; // сообщаем что событие было обработано

				String^ password = PasswordTextBox->Text; // инициализируем переменную password текстом из PasswordTextBox при декларации 

				if (password != "") // проверяем введен ли текст в поле для пароля
				{
					if (password->Length >= 8 && password->Length <= 64) // проверяем длину пароля
					{
						Regex^ regex = gcnew Regex("^[a-zA-Z0-9_@#$%^!&*?-]{8,64}$"); // декларируем экземпляр объекта Regex для указания регулярного выражения

						if (regex->IsMatch(password)) // проверяем соответствует ли пароль регулярному выражению
						{
							Password2TextBox->Focus(); // переводим курсор на следующий текст бокс
						}
						else
							MessageBox::Show(myResourceManager->GetString("PassContentEx")); // сообщаем что пароль содержит не подходящие символы
					}
					else
						MessageBox::Show(myResourceManager->GetString("PassLengthEx")); // Eсли длина пароля не подходит, выводим об этом сообщение
				}
				else
					MessageBox::Show(resourceManager->GetString("PassworLabel2.Text")); // просим пользователя ввести пароль
			}
		}
		catch (System::Exception^ ex) // отлавливаем общую ошибку
		{
			MessageBox::Show(ex->Message->ToString()); //помещаем текст исключение в MessageBox()
		}
	}
		   // Событие которое возникает когда пользователь нажимает и отпускает клавишу, при этом элемент управления находиться в фокусе
	private: System::Void Password2TextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		try // блок try для обработки ошибок
		{
			if (e->KeyChar == 13) // проверяемым является ли введенный пользователем символ символом новой строки с кодом 13
			{
				e->Handled = true; // сообщаем что событие было обработано

				if (Password2TextBox->Text != "") // проверяем введен ли текст в поле для пароля
				{
					if (PasswordTextBox->Text == Password2TextBox->Text) // проверяем одинаковые ли пароли
						RegistrationButton_Click(this, gcnew EventArgs()); // вызываем нажатие на кнопку
					else
						MessageBox::Show(myResourceManager->GetString("PassMatchEx")); // сообщаем что пароли не совпадают
				}
				else
					MessageBox::Show(resourceManager->GetString("PassworLabel3.Text")); // просим ввести в второе поле пароля
			}
		}
		catch (System::Exception^ ex) // отлавливаем общую ошибку
		{
			MessageBox::Show(ex->Message->ToString()); //помещаем текст исключение в MessageBox()
		}
	}

		   // Происходит когда элемент управления становиться активным
	private: System::Void LoginTextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->LoginLabel1->Visible = false; // делам LoginLabel1 невидимым
	}
		   // Происходит когда элемент управления становиться активным
	private: System::Void PasswordTextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->PassworLabel2->Visible = false; // делам PassworLabel2 невидимым
	}
		   // Происходит когда элемент управления становиться активным
	private: System::Void Password2TextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->PassworLabel3->Visible = false; // делам PassworLabel3 невидимым
	}

		   // Происходит когда элемент управления перестает быть активным
	private: System::Void LoginTextBox_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->LoginTextBox->Text == "") // проверяем пустой ли textBox
			this->LoginLabel1->Visible = true; // если это так то делам LoginLabel1 видимым
	}
		   // Происходит когда элемент управления перестает быть активным
	private: System::Void PasswordTextBox_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->PasswordTextBox->Text == "") // проверяем пустой ли textBox
			this->PassworLabel2->Visible = true; // если это так то делам PassworLabel2 видимым
	}
		   // Происходит когда элемент управления перестает быть активным
	private: System::Void Password2TextBox_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->Password2TextBox->Text == "") // проверяем пустой ли textBox
			this->PassworLabel3->Visible = true; // если это так то делам PassworLabel3 видимым
	}

		   // Происходит при щелчке элемента управления
	private: System::Void LoginLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
		LoginTextBox->Focus(); // переводим фокус на textBox находящийся под label'ом
	}
		   // Происходит при щелчке элемента управления
	private: System::Void PassworLabel2_Click(System::Object^ sender, System::EventArgs^ e) {
		PasswordTextBox->Focus(); // переводим фокус на textBox находящийся под label'ом
	}
		   // Происходит при щелчке элемента управления
	private: System::Void PassworLabel3_Click(System::Object^ sender, System::EventArgs^ e) {
		Password2TextBox->Focus(); // переводим фокус на textBox находящийся под label'ом
	}

		   // Событие на нажатие кнопки отображения пароля
	private: System::Void buttonPassVision_Click(System::Object^ sender, System::EventArgs^ e) {
		if (PasswordTextBox->UseSystemPasswordChar == true) // проверяем должен ли текст в TextBox отображаться как знак пароля по умолчанию
		{
			// если это так то отключаем отображение пароля
			PasswordTextBox->UseSystemPasswordChar = false;
			Password2TextBox->UseSystemPasswordChar = false;

			buttonPassVision->BackgroundImage = Image::FromFile("Icon\\NotVisible.png"); //  и меняем изображение кнопки
		}
		else
		{
			//  в противном случаем скрываем текст знаком пароля по умолчанию
			PasswordTextBox->UseSystemPasswordChar = true;
			Password2TextBox->UseSystemPasswordChar = true;

			buttonPassVision->BackgroundImage = Image::FromFile("Icon\\Visible.png"); //  и также меняем изображение кнопки
		}
	}
		   // Происходит пр нажатии на linkLabel1
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->Close(); // закрываем текущую форму
	}
		   // Происходит при каждом закрытии формы
	private: System::Void RegistrationForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Parent->Show(); // отображаем форму входа
	}
	};
}