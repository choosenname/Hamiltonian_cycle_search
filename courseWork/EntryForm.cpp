#include "EntryForm.h"
#include "RegistrationForm.h"


namespace courseWork
{
		// ���������� ��� ������� �� linkLabel
	System::Void EntryForm::linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

		RegistrationForm^ open = gcnew RegistrationForm(this,Theme);  // �������� ��������� ������� ����� �����������, �������� ���������� Theme � ��������� ����

		open->Show(); // ��������� ����� �����������

		this->Hide(); // � �������� �������
	}
}