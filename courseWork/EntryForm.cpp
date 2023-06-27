#include "EntryForm.h"
#include "RegistrationForm.h"


namespace courseWork
{
		// ѕроисходит при нажатии на linkLabel
	System::Void EntryForm::linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

		RegistrationForm^ open = gcnew RegistrationForm(this,Theme);  // создадим экземпл€р объекта формы регистрации, передаем переменную Theme и экземпл€р себ€

		open->Show(); // отобразим форму регистрации

		this->Hide(); // и скрываем текущую
	}
}