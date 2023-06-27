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
	/// ������ ��� EntryForm
	/// </summary>
	public ref class EntryForm : public System::Windows::Forms::Form
	{
	public:
		EntryForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pinkyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ englishToolStripMenuItem;
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
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->englishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->���������ToolStripMenuItem });
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->BackColor = System::Drawing::Color::Transparent;
			this->���������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->����ToolStripMenuItem
			});
			resources->ApplyResources(this->���������ToolStripMenuItem, L"���������ToolStripMenuItem");
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->DropDownClosed += gcnew System::EventHandler(this, &EntryForm::���������ToolStripMenuItem_DropDownClosed);
			this->���������ToolStripMenuItem->DropDownOpening += gcnew System::EventHandler(this, &EntryForm::���������ToolStripMenuItem_DropDownOpening);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->englishToolStripMenuItem
			});
			resources->ApplyResources(this->����ToolStripMenuItem, L"����ToolStripMenuItem");
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			// 
			// �������ToolStripMenuItem
			// 
			resources->ApplyResources(this->�������ToolStripMenuItem, L"�������ToolStripMenuItem");
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &EntryForm::�������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			resources->ApplyResources(this->��������ToolStripMenuItem, L"��������ToolStripMenuItem");
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &EntryForm::��������ToolStripMenuItem_Click);
			// 
			// englishToolStripMenuItem
			// 
			resources->ApplyResources(this->englishToolStripMenuItem, L"englishToolStripMenuItem");
			this->englishToolStripMenuItem->Name = L"englishToolStripMenuItem";
			this->englishToolStripMenuItem->Click += gcnew System::EventHandler(this, &EntryForm::englishToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->������ToolStripMenuItem, this->pinkyToolStripMenuItem
			});
			resources->ApplyResources(this->����ToolStripMenuItem, L"����ToolStripMenuItem");
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			// 
			// �������ToolStripMenuItem
			// 
			resources->ApplyResources(this->�������ToolStripMenuItem, L"�������ToolStripMenuItem");
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &EntryForm::�������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			resources->ApplyResources(this->������ToolStripMenuItem, L"������ToolStripMenuItem");
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &EntryForm::������ToolStripMenuItem_Click);
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
		// ResourceManager �����. ������������ ��������� ��������, �������������� ������� ������ � ��������,
		// ��������� � ������ � ������������� �����������, �� ����� ����������.
	private: ResourceManager^ resourceManager = gcnew ResourceManager("courseWork.EntryForm", Assembly::GetExecutingAssembly());
		   // ������� ��������� ������� resource manager, � ���������� �������� ���� �������� ��� ������� �����, � ����� ������� Assembly::GetExecutingAssembly() �������� ������, ������� �������� ����������� � ������� ������ ���.
	private: ResourceManager^ myResourceManager = gcnew ResourceManager("courseWork.�������", Assembly::GetExecutingAssembly()); // ���������� ������ �������� ����� ��� ������� ���� ��������
	private: int Theme = 0; // ���������� ���������� �� ������� ���� ����

		   // ����� ������� ��������� ��� ������ �������� ����� �������������
	private: System::Void EntryForm_Load(System::Object^ sender, System::EventArgs^ e) {
		�������ToolStripMenuItem->Enabled = false; // �������� ����� ���������� �� ����� ����� ���� �� �������
		���������ToolStripMenuItem->Image = Image::FromFile("Icon\\setting_black.png"); // ������������� ������ �������� ��������
		buttonPassVision->BackgroundImage = Image::FromFile("Icon\\NotVisible.png"); // ������������� �������� �����
	}
		
		   // ������� ������� �� ������ �����
	private: System::Void EntryButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = LoginTextBox->Text; // �������� � ���������� login ����� LoginTextBox
		String^ pass = PasswordTextBox->Text; // �������� � ���������� pass ����� PasswordTextBox

		if (login != "") // ��������� ������ �� �����
		{
			if (pass != "") // ����� �������� ���� �� ���� ����� ������
			{
				// StreamReader �����, ��������� ������ TextReader, ������� ��������� ������� �� ������ ������ � ������������ ���������.
				StreamReader^ sReader = gcnew StreamReader("Data\\UserData"); // ������� ����� ������ �� ����� UserData
				String^ line; // ������� ���������� line ���� ��������� ������ String

				while ((line = sReader->ReadLine()) != nullptr) // ������ ���� � ��������� �� ������ �� ���
				{
					if (line == login) // ��������� ������������� �� ������� ������������� ����� ��������� � ����
					{
						line = sReader->ReadLine(); // ���� ��� ��� �� ������� ��������� ������� ������������ line
						if (line == pass) // ����������� ������������� �� ������� ������������� ������ ����������� � ����
						{
							MainForm^ open = gcnew MainForm(Theme); // �������� ��������� ������� ������� ����� � �������� ���������� Theme

							open->Show(); // ��������� ������� �����

							this->Hide(); // � ������� ������
						}
						else // ���� ������ �� ���������
							MessageBox::Show(myResourceManager->GetString("PasNotExistEx")); // ������� ������������ �� ���� 

						sReader->Close(); // ������� ����� ������
						return; // �������� ���������� ������
					}
					else
					{
						sReader->ReadLine(); // ������� ��������� ����� ����� �� �� ������� �� � ����������
						// �.�. � ��� ��������� ������
						continue; // ��������� ���������� �����
					}
				}
				// ���� ���� ������ � �� ����� ����������� ������
				sReader->Close(); // ������� ����� ������
				MessageBox::Show(myResourceManager->GetString("LogNotExistEx")); // ������ ��� ��������� ������������� ����� �� ����������
			}
			else
				MessageBox::Show(resourceManager->GetString("PassworLabel2.Text")); // �������� ������������ ������ ������ ���� �� ����
		}
		else
			MessageBox::Show(resourceManager->GetString("LoginLabel1.Text")); // ���� ����� ������ �� ������ ������������ ��� ������
	}

		   // ������� ������� ��������� ����� ������������ �������� � ��������� �������, ��� ���� ������� ���������� ���������� � ������
	private: System::Void LoginTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == 13) // ����������� �������� �� ��������� ������������� ������ �������� ����� ������ � ����� 13
		{
			PasswordTextBox->Focus(); // ��������� ������ �� ��������� ����� ����
			e->Handled = true; // �������� ��� ������� ���� ����������
		}
	}
		   // ������� ������� ��������� ����� ������������ �������� � ��������� �������, ��� ���� ������� ���������� ���������� � ������
	private: System::Void PasswordTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == 13) // ��������� �������� �� ��������� ������������� ������ �������� ����� ������ � ����� 13
		{
			EntryButton_Click(this, gcnew EventArgs());
			e->Handled = true; // �������� ��� ������� ���� ����������
		}
	}
		   // ���������� ����� ������� ���������� ����������� ��������
	private: System::Void LoginTextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		LoginLabel1->Visible = false; // ����� LoginLabel1 ���������
	}
		   // ���������� ����� ������� ���������� ����������� ��������
	private: System::Void PasswordTextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		PassworLabel2->Visible = false; // ����� PassworLabel2 ���������
	}

		   // ���������� ����� ������� ���������� ��������� ���� ��������
	private: System::Void LoginTextBox_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->LoginTextBox->Text == "") // ��������� ������ �� textBox
			LoginLabel1->Visible = true; // ���� ��� ��� �� ����� LoginLabel1 �������
	}
		   // ���������� ����� ������� ���������� ��������� ���� ��������
	private: System::Void PasswordTextBox_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->PasswordTextBox->Text == "") // ��������� ������ �� textBox
			PassworLabel2->Visible = true; // ���� ��� ��� �� ����� PassworLabel2 �������
	}
		   // ���������� ��� ������ �������� ����������
	private: System::Void LoginLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
		LoginTextBox->Focus(); // ��������� ����� �� textBox ����������� ��� label'��
	}

		   // ���������� ��� ������ �������� ����������
	private: System::Void PassworLabel2_Click(System::Object^ sender, System::EventArgs^ e) {
		PasswordTextBox->Focus(); // ��������� ����� �� textBox ����������� �� label'��
	}

		   // ������� �� ������� ������ ����������� ������
	private: System::Void buttonPassVision_Click(System::Object^ sender, System::EventArgs^ e) {
		if (PasswordTextBox->UseSystemPasswordChar) // ��������� ������ �� ����� � TextBox ������������ ��� ���� ������ �� ���������
		{
			PasswordTextBox->UseSystemPasswordChar = false; // ���� ��� ��� �� ��������� ����������� ������

			buttonPassVision->BackgroundImage = Image::FromFile("Icon\\NotVisible.png"); //  � ������ ����������� ������
		}
		else
		{
			PasswordTextBox->UseSystemPasswordChar = true; //  � ��������� ������� �������� ����� ������ ������ �� ���������

			buttonPassVision->BackgroundImage = Image::FromFile("Icon\\Visible.png"); //  � ����� ������ ����������� ������
		}
	}

		   // �������� ����� �����������
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);

		   // ����� ���� �� �������
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackgroundImage = Image::FromFile("Backgrounds\\09. Light Sky Blue.png"); // ������ ������������� ����
		EntryButton->BackColor = Color::Turquoise; // ���� ������
		���������ToolStripMenuItem->Image = Image::FromFile("Icon\\setting_black.png"); // � ������ �������� ����� ��� ���� ����� �� ����

		changeColor(Color::Black); // �������� �������� ����� � ������� ��� ����� ����� ��������� �����

		�������ToolStripMenuItem->Enabled = false; // �������� ����� ����

		Theme = 0; // � ����������� ���������� ��� ����
	}

		   // ����� ���� �� ������
	private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackgroundImage = Image::FromFile("Backgrounds\\100. Chetwode Blue.png"); // ������ ����������� ����
		EntryButton->BackColor = Color::DarkSlateBlue; // ���� ������
		���������ToolStripMenuItem->Image = Image::FromFile("Icon\\setting_white.png"); // � ������ �������� ����� ��� ���� ����� �� ����

		changeColor(Color::White); // �������� �������� ����� � ������� ��� ����� ����� ��������� �����

		������ToolStripMenuItem->Enabled = false; // �������� ����� ����

		Theme = 1; // � ����������� ���������� ��� ����
	}

		   // ����� ���� �� �������
	private: System::Void pinkyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackgroundImage = Image::FromFile("Backgrounds\\59. Light Blue.png"); // ������ ������������� ����
		EntryButton->BackColor = ColorTranslator::FromHtml("#E59DD0"); // ���� ������ (���������� ���� ������ �� 16-��� ���� ��� ���� ���������� ����� ColorTranslator::FromHtml())
		���������ToolStripMenuItem->Image = Image::FromFile("Icon\\setting_black.png"); // � ������ �������� ����� ��� ���� ����� �� ����

		changeColor(Color::Black); // �������� �������� ����� � ������� ��� ����� ����� ��������� �����

		pinkyToolStripMenuItem->Enabled = false; // �������� ����� ����

		Theme = 2; // � ����������� ���������� ��� ����
	}

		   // ��������� ����� ������ Control'��
	private: void changeColor(Color cl) {
		for each (Control ^ ct in Controls) // ���������� ���� for each ��� �������� ���� ��������� ���������� ����� ���������� � ���������  Controls
		{
			if (ct != LoginLabel1 && ct != PassworLabel2 && ct != LoginTextBox && ct != PasswordTextBox && ct != buttonPassVision) // �������� �������� �� ��������� ������� ���������� ����� �� ������������
				ct->ForeColor = cl; // ���� ��� �� ��� �� ������ ���� ������
		}
		linkLabel1->LinkColor = cl; // �������� ������ ���� ������ � linkLabel1 ��������� ������ ���� ��� ����������� �����
		���������ToolStripMenuItem->ForeColor = cl; // � ����� ���� ������ �������� �.�. �� �� �������� ������ ��������� Controls

		// ��������������� �������� ��� ������ ���
		�������ToolStripMenuItem->Enabled = true;
		������ToolStripMenuItem->Enabled = true;
		pinkyToolStripMenuItem->Enabled = true;
	}
		   // ��������� ��� �������� DropDown
	private: System::Void ���������ToolStripMenuItem_DropDownOpening(System::Object^ sender, System::EventArgs^ e) {
		���������ToolStripMenuItem->ForeColor = Color::Black; // ���������� ���� ������ � ������ ������ ��� ��� ������ ����� �����
		���������ToolStripMenuItem->Image = Image::FromFile("Icon\\setting_black.png"); // �� ���� �� ������� ������ ������ ������
	}
		   // ��������� ��� �������� DropDown
	private: System::Void ���������ToolStripMenuItem_DropDownClosed(System::Object^ sender, System::EventArgs^ e) {
		if (Theme == 1) // ���� ��� ���� 1 �� ���� ������
		{
			���������ToolStripMenuItem->ForeColor = Color::White; // �� ���������� ���� ������ ��������
			���������ToolStripMenuItem->Image = Image::FromFile("Icon\\setting_white.png"); // � � ������
		}
	}
		   // ���������� ��� ����� ����� �� �������
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		changeLang(""); // �������� ������ �������� ����� �.�. ������� �� ��������� � �� ������ ������ ������� ��������� �� ����������
	}
		   // ���������� ��� ����� ����� �� �����������
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		changeLang("be"); // �������� ����������� ����
	}
		   // ���������� ��� ����� ����� �� ����������
	private: System::Void englishToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		changeLang("en"); // �������� �������� ���������� ����
	}
		   // ����� ����� ����� (���������� �������� �����)
	private: void changeLang(String^ l) {
		// ������ ���� � ������������ ��������� ��� �������� ������
		Thread::CurrentThread->CurrentUICulture = gcnew Globalization::CultureInfo(l);
		Thread::CurrentThread->CurrentCulture = gcnew Globalization::CultureInfo(l);

		this->Text = resourceManager->GetString("$this.Text"); // �������� ����� ��������� ���������� � ����� �������� ��� ������ resourceManager

		ComponentResourceManager^ resources = gcnew ComponentResourceManager(this->GetType()); // ������� ������ ������� ���� ������� � ������������� �������

		for each (Control ^ ct in Controls) // ���������� ���� for each ��� �������� ���� ��������� ���������� ����� ���������� � ���������  Controls
		{
			resources->ApplyResources(ct, ct->Name); // �������� �������� ������� � ���������������� �������� �������
		}

		// �������� ��� ������ ����� �����
		�������ToolStripMenuItem->Enabled = true;
		��������ToolStripMenuItem->Enabled = true;
		englishToolStripMenuItem->Enabled = true;

		for each (ToolStripMenuItem ^ item in menuStrip1->Items) // ���������� ���� for each ��� �������� ���� ��������� ���������� ����� ���������� � ���������  menuStrip1->Items
		{
			applyLangToToolStripMenu(resources, item); // ���������� �������� ����������� ����� ���������� �������� � ��������� menuStrip1
		}
	}
		   // ����� ���������� �������� � ��������� ToolStripMenu
	private: void applyLangToToolStripMenu(ComponentResourceManager^ resources, ToolStripMenuItem^ item)
	{
		resources->ApplyResources(item, item->Name); // �������� �������� ������� � ���������������� �������� �������
		for each (ToolStripMenuItem ^ itm in item->DropDownItems) // ���������� �������� ��������� DropDownItems
			applyLangToToolStripMenu(resources, itm); // ���������� �������� �����
	}
};
}
