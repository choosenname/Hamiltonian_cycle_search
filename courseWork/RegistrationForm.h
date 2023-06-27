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
	/// ������ ��� RegistrationForm
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
		/// ���������� ��� ������������ �������.
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
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
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
		// ResourceManager �����. ������������ ��������� ��������, �������������� ������� ������ � ��������,
		// ��������� � ������ � ������������� �����������, �� ����� ����������.
	private: ResourceManager^ resourceManager = gcnew ResourceManager("courseWork.RegistrationForm", Assembly::GetExecutingAssembly());
		   // ������� ��������� ������� resource manager, � ���������� �������� ���� �������� ��� ������� �����, � ����� ������� Assembly::GetExecutingAssembly() �������� ������, ������� �������� ����������� � ������� ������ ���.
	private: ResourceManager^ myResourceManager = gcnew ResourceManager("courseWork.�������", Assembly::GetExecutingAssembly()); // ���������� ������ �������� ����� ��� ������� ���� ��������
	private: int Theme; // ���������� ���������� �� ������� ���� ����
	private: EntryForm^ Parent; // ������� ��������� ����� �����

		   // ��������� ��� ������ �������� ����� �������������
	private: System::Void RegistrationForm_Load(System::Object^ sender, System::EventArgs^ e) {
		switch (Theme) // �������� � switch-case �������� Theme
		{
		case 0: // ���� ��� ���� ����� 0 �� ���� �������
		{
			// �� ������ ���������� �.�. ������� ���� ����� �� ���������
			break;
		}
		case 1: // ���� ���� ������
		{
			this->BackgroundImage = Image::FromFile("Backgrounds\\Dark Blue With Black Vignette.png"); // �������� ��� ����
			RegistrationButton->BackColor = ColorTranslator::FromHtml("#0D1C6D"); // � ���� ������, ����� ������� 16-�� ����

			changeColor(Color::White); // ���������� ����� ����� ����� � �������� ��������� ������ �����

			break;
		}
		case 2: // ���� ���� �������
		{
			this->BackgroundImage = Image::FromFile("Backgrounds\\50. Columbia Blue.png"); // �������� ��� ����
			RegistrationButton->BackColor = ColorTranslator::FromHtml("#D25ED5"); // � ���� ������, ����� ������� 16-�� ����

			changeColor(Color::Black); // ���������� ����� ����� ����� � �������� ��������� ������� �����

			break;
		}
		}
	}
		   // ����� ����� �����
	private: void changeColor(Color cl) {
		for each (Control ^ ct in Controls) // ���������� ���� for each ��� �������� ���� ��������� ���������� ����� ���������� � ���������  Controls
		{
			// �������� �������� �� ��������� ������� ���������� ����� �� ������������
			if (ct != LoginLabel1 && ct != PassworLabel2 && ct != PassworLabel3 && ct != LoginTextBox && ct != PasswordTextBox && ct != Password2TextBox && ct != buttonPassVision)
				ct->ForeColor = cl; // ���� ��� �� ��� �� ������ ���� ������
		}
		linkLabel1->LinkColor = cl; // �������� ������ ���� ������ � linkLabel1 ��������� ������ ���� ��� ����������� �����
	}
		   // ��������� ��� ������� ������ �����������
	private: System::Void RegistrationButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try // ���� try ��� ��������� ������
		{
			String^ login = LoginTextBox->Text; // �������������� ���������� login ������� �� LoginTextBox ��� ����������
			String^ password = PasswordTextBox->Text; // �������������� ���������� password ������� �� PasswordTextBox ��� ���������� 

			if (login != "") // ��������� ������ �� LoginTextBox
			{
				if (login->Length >= 3 && login->Length <= 32) // ��������� �������� �� ������ ������
				{
					Regex^ regex = gcnew Regex("^[a-zA-Z0-9_-]{3,32}$"); // �������������� ��������� ������� Regex ��� �������� ����������� ���������, � ����������� �� �����

					if (regex->IsMatch(login)) // ��������� ������������� �� ����� ����������� ���������
					{
						// ���� ����� ��������
						StreamReader^ sReader = gcnew StreamReader("Data\\UserData"); // ������� ����� ��������� ������� StreamReader ��� ������ �����
						String^ line; // ������� ��������� ������� String

						while ((line = sReader->ReadLine()) != nullptr) // ������ ����� ����� � ��������� �� ������ �� ��
						{
							if (line == login) // ��������� ������� �� ����� � ����
							{
								MessageBox::Show(myResourceManager->GetString("LogExistEx")); // �������� ��� ����� ��� ����

								sReader->Close(); // ��������� ����� ������
								return; // �������� ���������� ������
							}
							else
							{
								sReader->ReadLine(); // ������ ��������� �����
								//line = sReader->ReadLine();
								continue; // ���������� ��������
							}
						}
						// ���� ������ �� ����������� 
						sReader->Close(); // ��������� ����� ������

						if (password != "") // ��������� ������ �� ����� � ���� ��� ������
						{
							if (password->Length >= 8 && password->Length <= 64) // ��������� ����� ������
							{
								regex = gcnew Regex("^[a-zA-Z0-9_@#$%^!&*?-]{8,64}$"); // ����������� ��������� ������� Regex ��� �������� ����������� ���������

								if (regex->IsMatch(password)) // ��������� ������������� �� ������ ����������� ���������
								{
									if (Password2TextBox->Text != "") // ��������� ������ �� ������ ���� ��� ������
									{
										if (password == Password2TextBox->Text) // ��������� ���������� �� ������
										{
											StreamWriter^ sWriter = gcnew StreamWriter("Data\\UserData", true); // ������� ����� ��������� ������� StreamWriter ��� ������ � ����

											sWriter->WriteLine(login); // ���������� �����
											sWriter->WriteLine(password); // � ��� ��� ������

											sWriter->Close(); // ��������� ����� ��� ������

											MainForm^ open = gcnew MainForm(Theme); // �������� ��������� ������� ������� ����� � �������� ���������� Theme

											open->Show(); // ��������� ������� �����

											//RegistrationForm::Hide();
											this->Close(); // ��������� ������� �����
											Parent->Hide(); // �������� ����� �����
										}
										else
											MessageBox::Show(myResourceManager->GetString("PassMatchEx")); // �������� ��� ������ �� ���������
									}
									else
										MessageBox::Show(resourceManager->GetString("PassworLabel3.Text")); // ������ ������ � ������ ���� ������
								}
								else
									MessageBox::Show(myResourceManager->GetString("PassContentEx")); // �������� ��� ������ �������� �� ���������� �������
							}
							else
								MessageBox::Show(myResourceManager->GetString("PassLengthEx")); // ���� ����� ������ �� ��������, ������� �� ���� ���������
						}
						else
							MessageBox::Show(resourceManager->GetString("PassworLabel2.Text")); // ������ ������������ ������ ������
					}
					else
						MessageBox::Show(myResourceManager->GetString("LogContentEx")); // �������� ��� ����� �������� �� ���������� �������
				}
				else
					MessageBox::Show(myResourceManager->GetString("LogLengthEx")); // ���� ����� ������ �� ��������, ������� �� ���� ���������
			}
			else
				MessageBox::Show(resourceManager->GetString("LoginLabel1.Text")); // ������ ������������ ������ �����
		}
		catch (System::Exception^ ex) // ����������� ����� ������
		{
			MessageBox::Show(ex->Message->ToString()); //�������� ����� ���������� � MessageBox()
		}
	}
		   // ������� ������� ��������� ����� ������������ �������� � ��������� �������, ��� ���� ������� ���������� ���������� � ������
	private: System::Void LoginTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		try // ���� try ��� ��������� ������
		{
			if (e->KeyChar == 13) // ����������� �������� �� ��������� ������������� ������ �������� ����� ������ � ����� 13
			{
				e->Handled = true; // �������� ��� ������� ���� ����������

				String^ login = LoginTextBox->Text; // �������������� ���������� login ������� �� LoginTextBox ��� ����������

				if (login != "") // ��������� ������ �� LoginTextBox
				{
					if (login->Length >= 3 && login->Length <= 32) // ��������� �������� �� ������ ������
					{
						Regex^ regex = gcnew Regex("^[a-zA-Z0-9_-]{3,32}$"); // �������������� ��������� ������� Regex ��� �������� ����������� ���������, � ����������� �� �����

						if (regex->IsMatch(login)) // ��������� ������������� �� ����� ����������� ���������
						{
							PasswordTextBox->Focus(); // ��������� ������ �� ��������� ����� ����
						}
						else
							MessageBox::Show(myResourceManager->GetString("LogContentEx")); // �������� ��� ����� �������� �� ���������� �������
					}
					else
						MessageBox::Show(myResourceManager->GetString("LogLengthEx")); // ���� ����� ������ �� ��������, ������� �� ���� ���������
				}
				else
					MessageBox::Show(resourceManager->GetString("LoginLabel1.Text")); // ������ ������������ ������ �����
			}
		}
		catch (System::Exception^ ex) // ����������� ����� ������
		{
			MessageBox::Show(ex->Message->ToString()); //�������� ����� ���������� � MessageBox()
		}
	}
		   // ������� ������� ��������� ����� ������������ �������� � ��������� �������, ��� ���� ������� ���������� ���������� � ������
	private: System::Void PasswordTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		try // ���� try ��� ��������� ������
		{
			if (e->KeyChar == 13) // ����������� �������� �� ��������� ������������� ������ �������� ����� ������ � ����� 13
			{
				e->Handled = true; // �������� ��� ������� ���� ����������

				String^ password = PasswordTextBox->Text; // �������������� ���������� password ������� �� PasswordTextBox ��� ���������� 

				if (password != "") // ��������� ������ �� ����� � ���� ��� ������
				{
					if (password->Length >= 8 && password->Length <= 64) // ��������� ����� ������
					{
						Regex^ regex = gcnew Regex("^[a-zA-Z0-9_@#$%^!&*?-]{8,64}$"); // ����������� ��������� ������� Regex ��� �������� ����������� ���������

						if (regex->IsMatch(password)) // ��������� ������������� �� ������ ����������� ���������
						{
							Password2TextBox->Focus(); // ��������� ������ �� ��������� ����� ����
						}
						else
							MessageBox::Show(myResourceManager->GetString("PassContentEx")); // �������� ��� ������ �������� �� ���������� �������
					}
					else
						MessageBox::Show(myResourceManager->GetString("PassLengthEx")); // E��� ����� ������ �� ��������, ������� �� ���� ���������
				}
				else
					MessageBox::Show(resourceManager->GetString("PassworLabel2.Text")); // ������ ������������ ������ ������
			}
		}
		catch (System::Exception^ ex) // ����������� ����� ������
		{
			MessageBox::Show(ex->Message->ToString()); //�������� ����� ���������� � MessageBox()
		}
	}
		   // ������� ������� ��������� ����� ������������ �������� � ��������� �������, ��� ���� ������� ���������� ���������� � ������
	private: System::Void Password2TextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		try // ���� try ��� ��������� ������
		{
			if (e->KeyChar == 13) // ����������� �������� �� ��������� ������������� ������ �������� ����� ������ � ����� 13
			{
				e->Handled = true; // �������� ��� ������� ���� ����������

				if (Password2TextBox->Text != "") // ��������� ������ �� ����� � ���� ��� ������
				{
					if (PasswordTextBox->Text == Password2TextBox->Text) // ��������� ���������� �� ������
						RegistrationButton_Click(this, gcnew EventArgs()); // �������� ������� �� ������
					else
						MessageBox::Show(myResourceManager->GetString("PassMatchEx")); // �������� ��� ������ �� ���������
				}
				else
					MessageBox::Show(resourceManager->GetString("PassworLabel3.Text")); // ������ ������ � ������ ���� ������
			}
		}
		catch (System::Exception^ ex) // ����������� ����� ������
		{
			MessageBox::Show(ex->Message->ToString()); //�������� ����� ���������� � MessageBox()
		}
	}

		   // ���������� ����� ������� ���������� ����������� ��������
	private: System::Void LoginTextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->LoginLabel1->Visible = false; // ����� LoginLabel1 ���������
	}
		   // ���������� ����� ������� ���������� ����������� ��������
	private: System::Void PasswordTextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->PassworLabel2->Visible = false; // ����� PassworLabel2 ���������
	}
		   // ���������� ����� ������� ���������� ����������� ��������
	private: System::Void Password2TextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->PassworLabel3->Visible = false; // ����� PassworLabel3 ���������
	}

		   // ���������� ����� ������� ���������� ��������� ���� ��������
	private: System::Void LoginTextBox_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->LoginTextBox->Text == "") // ��������� ������ �� textBox
			this->LoginLabel1->Visible = true; // ���� ��� ��� �� ����� LoginLabel1 �������
	}
		   // ���������� ����� ������� ���������� ��������� ���� ��������
	private: System::Void PasswordTextBox_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->PasswordTextBox->Text == "") // ��������� ������ �� textBox
			this->PassworLabel2->Visible = true; // ���� ��� ��� �� ����� PassworLabel2 �������
	}
		   // ���������� ����� ������� ���������� ��������� ���� ��������
	private: System::Void Password2TextBox_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->Password2TextBox->Text == "") // ��������� ������ �� textBox
			this->PassworLabel3->Visible = true; // ���� ��� ��� �� ����� PassworLabel3 �������
	}

		   // ���������� ��� ������ �������� ����������
	private: System::Void LoginLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
		LoginTextBox->Focus(); // ��������� ����� �� textBox ����������� ��� label'��
	}
		   // ���������� ��� ������ �������� ����������
	private: System::Void PassworLabel2_Click(System::Object^ sender, System::EventArgs^ e) {
		PasswordTextBox->Focus(); // ��������� ����� �� textBox ����������� ��� label'��
	}
		   // ���������� ��� ������ �������� ����������
	private: System::Void PassworLabel3_Click(System::Object^ sender, System::EventArgs^ e) {
		Password2TextBox->Focus(); // ��������� ����� �� textBox ����������� ��� label'��
	}

		   // ������� �� ������� ������ ����������� ������
	private: System::Void buttonPassVision_Click(System::Object^ sender, System::EventArgs^ e) {
		if (PasswordTextBox->UseSystemPasswordChar == true) // ��������� ������ �� ����� � TextBox ������������ ��� ���� ������ �� ���������
		{
			// ���� ��� ��� �� ��������� ����������� ������
			PasswordTextBox->UseSystemPasswordChar = false;
			Password2TextBox->UseSystemPasswordChar = false;

			buttonPassVision->BackgroundImage = Image::FromFile("Icon\\NotVisible.png"); //  � ������ ����������� ������
		}
		else
		{
			//  � ��������� ������� �������� ����� ������ ������ �� ���������
			PasswordTextBox->UseSystemPasswordChar = true;
			Password2TextBox->UseSystemPasswordChar = true;

			buttonPassVision->BackgroundImage = Image::FromFile("Icon\\Visible.png"); //  � ����� ������ ����������� ������
		}
	}
		   // ���������� �� ������� �� linkLabel1
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->Close(); // ��������� ������� �����
	}
		   // ���������� ��� ������ �������� �����
	private: System::Void RegistrationForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Parent->Show(); // ���������� ����� �����
	}
	};
}