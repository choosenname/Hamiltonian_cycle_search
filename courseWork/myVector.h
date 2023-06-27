	#pragma once

namespace courseWork // ���������� ������������ ���� ������ �������
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	template<typename Ty> // ������� ������ Ty ��� ������ � ������� ����� �����
	public ref class myVector : public System::Windows::Forms::Form // ������ ��������� ����� ��������� �� ����� �����
	{
	public:
		myVector()
		{
			Arr = nullptr; // ��������� ���������� ������ �������� nullptr
			size = 0; // ������ ����� ����
		}

		~myVector()
		{
			if (Arr != nullptr) // ��������� �������� � �������
			{
				delete[] Arr; // ������� ������� Arr
			}
		}

		// ����� ��������� ��������� � �����
		void push_back(Ty&& Val)
		{
			if (size == 0) // ��������� ���������� ��������� � ����������
			{
				// ���� size == 0
				Arr = new Ty[++size]; // ������� ������ ���� ������� � ���������� ��������� size

				Arr[0] = Val; // �������� � ������� ������� ��������
			}
			else
			{
				Ty* tArr = new Ty[++size]; // ������� ����� ��������� ������ ���� ������� � ���������� ��������� size

				for (size_t i = 0; i < size - 1; i++)
				{
					// ���������� ��������� ����� ������
					tArr[i] = Arr[i];
				}

				tArr[size - 1] = Val; // �������� � ��������� ������� ������� ���������� ��������

				delete[] Arr; // ������� ���������� ������

				Arr = tArr; // �������� � ���� ����� ��������
			}
		}

		// ����� �������� ���������� ��������
		void pop_back()
		{
			if (size) // ��������� ���� �� �������� � �������
			{
				Ty* tArr = new Ty[--size];  // ������� ����� ��������� ������ ���� ������� � ���������� ��������� size

				for (size_t i = 0; i < size; i++)
				{
					// ���������� ��������� ����� ������
					tArr[i] = Arr[i];
				}

				delete[] Arr; // ������� ���������� ������

				Arr = tArr; // �������� � ���� ����� ��������
			}
		}

		//
		void Clear()
		{
			while (size != 0)
			{
				// ���������� �������� ����� ���� size �� ����� ����� 0
				pop_back();
			}
		}
		Ty& operator[](const int& Pos) { return Arr[Pos]; } // ���������� ��������� [] ��� ��������� ������������� �������� �������
		//int size() const { return size; }

		Ty* Arr; // ������� ���������� ���� �������
		int size; // ������� ���������� ���������� �� ���������� ���������
	};
}