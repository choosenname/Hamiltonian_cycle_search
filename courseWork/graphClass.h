#pragma once

namespace courseWork // используем пространство имен нашего проекта
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class graph : public System::Windows::Forms::Form // создаём публичный класс наследник от нашей формы
	{
	private: Graphics^ gr; // объявляем поле класса объекта Graphics для работы с графикой

	public:

		void createGraphics(Bitmap^ image)
		{
			gr = Graphics::FromImage(image); // присваиваем область работы для нашего объекта
		}

		void clear_graph()
		{
			gr->Clear(Color::White); // вызываем метод Clear() у нашего объекта Graphics, куда передаем параметр Color::White
		}

		void drawEllipse(Brush^ b, int x, int y, int top) // метод рисования эллипса  с обводкой, принимает параметры цвета обводки (Brushes) координаты вершины, а также ее номер
		{
			gr->FillEllipse(b, x - 23, y - 23, 46, 46); // вызываем метод заливки эллипса с использованием цвета переданного пользователем
			gr->FillEllipse(Brushes::Black, x - 20, y - 20, 40, 40); // рисуем залитый эллипс поверх старого с меньшим размером и только черного цвета
			gr->DrawString(top.ToString(), gcnew Drawing::Font("Arial", 12), Brushes::White, x - 10, y - 10); // метод DrawString добавляет текст на наш эллипс, в нашем случае это номер вершины в перемен-ной top
		}

		void drawLine(int x, int y, int top, int x1, int y1, int top1) // метод рисования линий, принимает координаты 2-ух вершин и их номера
		{
			gr->DrawLine(Pens::Black, x, y, x1, y1); // вызов метода рисования линий, принимает цвет и координаты 2-ух вершин

			drawEllipse(Brushes::White, x, y, top); // вызываем метод рисования эллипса и передаем параметр цвета обводки White
			drawEllipse(Brushes::White, x1, y1, top1);
		}

	protected:
		~graph() { } // деструктор класса graph
	};

}