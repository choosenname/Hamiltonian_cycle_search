	#pragma once

namespace courseWork // используем пространство имен нашего проекта
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	template<typename Ty> // создаем шаблон Ty для работы с файлами любых типов
	public ref class myVector : public System::Windows::Forms::Form // создаём публичный класс наследник от нашей формы
	{
	public:
		myVector()
		{
			Arr = nullptr; // прививаем переменной пустое значение nullptr
			size = 0; // размер равен нулю
		}

		~myVector()
		{
			if (Arr != nullptr) // проверяем значение в массиве
			{
				delete[] Arr; // удаляем элемент Arr
			}
		}

		// Метод помещения элементов с класс
		void push_back(Ty&& Val)
		{
			if (size == 0) // проверяем количество элементов в переменной
			{
				// если size == 0
				Arr = new Ty[++size]; // создаем массив типа шаблона и количества элементов size

				Arr[0] = Val; // помещаем в нулевой элемент значение
			}
			else
			{
				Ty* tArr = new Ty[++size]; // создаем новый временный массив типа шаблона и количества элементов size

				for (size_t i = 0; i < size - 1; i++)
				{
					// циклически заполняем новый массив
					tArr[i] = Arr[i];
				}

				tArr[size - 1] = Val; // помещаем в последний элемент массива переданное значение

				delete[] Arr; // удаляем предыдущий массив

				Arr = tArr; // помещаем в него новые значения
			}
		}

		// метод удаления последнего элемента
		void pop_back()
		{
			if (size) // проверяем есть ли значения в векторе
			{
				Ty* tArr = new Ty[--size];  // создаем новый временный массив типа шаблона и количества элементов size

				for (size_t i = 0; i < size; i++)
				{
					// циклически заполняем новый массив
					tArr[i] = Arr[i];
				}

				delete[] Arr; // удаляем предыдущий массив

				Arr = tArr; // помещаем в него новые значения
			}
		}

		//
		void Clear()
		{
			while (size != 0)
			{
				// циклически вызываем метод пока size не будет равен 0
				pop_back();
			}
		}
		Ty& operator[](const int& Pos) { return Arr[Pos]; } // перегрузка оператора [] для получения определенного элемента вектора
		//int size() const { return size; }

		Ty* Arr; // создаем переменную типа шаблона
		int size; // создаем переменную отвечающую за количество элементов
	};
}