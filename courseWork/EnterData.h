#pragma once

namespace courseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� EnterData
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
		/// ���������� ��� ������������ �������.
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
	public: static String^ str;// ������� ���������� str ���� String
	private: int Theme; // ���������� ���������� �� ������� ���� ����
		   // ��������� ��� ������ �������� ����� �������������
	private: System::Void EnterData_Load(System::Object^ sender, System::EventArgs^ e) {
		switch (Theme) // �������� � switch-case �������� Theme
		{
		case 0: // ���� ��� ���� ����� 0 �� ���� �������
		{
			// �� ������ ���������� �.�. ������� ���� ����� �� ���������
			break;
		}
		case 1:  // ���� ���� ������
		{
			textBox1->BackColor = Color::DarkGray; // ������ ��� textBox'�
			changeColor(Color::DimGray, Color::White); // ���������� ����� ����� �����
			break;
		}
		case 2: // ���� ���� �������
		{
			textBox1->BackColor = Color::Snow; // ������ ��� textBox'�
			changeColor(Color::Lavender, Color::Black); // ���������� ����� ����� �����
			break;
		}
		}
	}
		   // ����� ����� �����
	private: void changeColor(Color cl1, Color cl2) {
		this->BackColor = cl1; // ������ ��� ����� � ������ ���������� ����

		label1->BackColor = cl1; // ������ ��� label'a �� ������ ���������� ����
		label1->ForeColor = cl2; // ������ ����� label'a �� ������ ���������� ����

		textBox1->ForeColor = cl2; // ������ ����� textBox'� �� ������ ���������� ����
	}
		   // ��������� ��� ������� �� button1
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Contains(" ")) // ���� textBox �������� �������
		{
			MessageBox::Show("�������� �� ����� ��������� �������"); // �������� �� ������ ������������
		}
		else if (textBox1->Text->IsNullOrEmpty(textBox1->Text)) // ���� textBox ����
		{
			this->Close(); // ��������� ����
		}
		else
		{
			str = textBox1->Text; // ���������� ���������� � ����������
			this->Close(); // ��������� ����
		}
		/*MainForm^ f = gcnew MainForm();
		f->SetVolume(Current, textBox1->Text);*/
	}
		   // ������� ������� ��������� ����� ������������ �������� � ��������� �������, ��� ���� ������� ���������� ���������� � ������
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == 13) // ����������� �������� �� ��������� ������������� ������ �������� ����� ������ � ����� 13
		{
			e->Handled = true; // �������� ��� ������� ���� ����������
			button1_Click(this, gcnew EventArgs()); // �������� ������� ������� �� ������ 
		}
	}
		   // ���������� ��� ������� button2
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close(); // ��������� ����
	}
	};
}
