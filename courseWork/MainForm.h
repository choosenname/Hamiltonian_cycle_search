#pragma once
#include "EnterData.h"
#include "ReferenceForm.h"
#include "graphClass.h"
#include "myVector.h"

namespace courseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::IO;
	using namespace System::Resources;
	using namespace System::Reflection;

	/// <summary>
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(int th)
		{
			InitializeComponent();
			image = gcnew Bitmap(2900, 5000);
			graph.createGraphics(image);
			Theme = th;
		}
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ clearButton;
	private: System::Windows::Forms::Button^ searchButton;




	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;


	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ englishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pinkyToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBoxPath;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;




	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->englishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pinkyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBoxPath = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseClick);
			this->pictureBox1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseDoubleClick);
			// 
			// dataGridView1
			// 
			resources->ApplyResources(this->dataGridView1, L"dataGridView1");
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 24;
			// 
			// clearButton
			// 
			resources->ApplyResources(this->clearButton, L"clearButton");
			this->clearButton->BackColor = System::Drawing::Color::White;
			this->clearButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clearButton->ForeColor = System::Drawing::Color::White;
			this->clearButton->Name = L"clearButton";
			this->clearButton->UseVisualStyleBackColor = false;
			this->clearButton->Click += gcnew System::EventHandler(this, &MainForm::clearButton_Click);
			// 
			// searchButton
			// 
			resources->ApplyResources(this->searchButton, L"searchButton");
			this->searchButton->Name = L"searchButton";
			this->searchButton->UseVisualStyleBackColor = false;
			this->searchButton->Click += gcnew System::EventHandler(this, &MainForm::searchButton_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->���������ToolStripMenuItem,
					this->����ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->����ToolStripMenuItem
			});
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			resources->ApplyResources(this->���������ToolStripMenuItem, L"���������ToolStripMenuItem");
			this->���������ToolStripMenuItem->DropDownClosed += gcnew System::EventHandler(this, &MainForm::���������ToolStripMenuItem_DropDownClosed);
			this->���������ToolStripMenuItem->DropDownOpened += gcnew System::EventHandler(this, &MainForm::���������ToolStripMenuItem_DropDownOpened);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->englishToolStripMenuItem
			});
			resources->ApplyResources(this->toolStripMenuItem1, L"toolStripMenuItem1");
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			// 
			// �������ToolStripMenuItem
			// 
			resources->ApplyResources(this->�������ToolStripMenuItem, L"�������ToolStripMenuItem");
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			resources->ApplyResources(this->��������ToolStripMenuItem, L"��������ToolStripMenuItem");
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::��������ToolStripMenuItem_Click);
			// 
			// englishToolStripMenuItem
			// 
			resources->ApplyResources(this->englishToolStripMenuItem, L"englishToolStripMenuItem");
			this->englishToolStripMenuItem->Name = L"englishToolStripMenuItem";
			this->englishToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::englishToolStripMenuItem_Click);
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
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			resources->ApplyResources(this->������ToolStripMenuItem, L"������ToolStripMenuItem");
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::������ToolStripMenuItem_Click);
			// 
			// pinkyToolStripMenuItem
			// 
			resources->ApplyResources(this->pinkyToolStripMenuItem, L"pinkyToolStripMenuItem");
			this->pinkyToolStripMenuItem->Name = L"pinkyToolStripMenuItem";
			this->pinkyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::pinkyToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->���������ToolStripMenuItem,
					this->������������ToolStripMenuItem, this->�������ToolStripMenuItem1
			});
			resources->ApplyResources(this->����ToolStripMenuItem, L"����ToolStripMenuItem");
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->DropDownClosed += gcnew System::EventHandler(this, &MainForm::����ToolStripMenuItem_DropDownClosed);
			this->����ToolStripMenuItem->DropDownOpened += gcnew System::EventHandler(this, &MainForm::����ToolStripMenuItem_DropDownOpened);
			// 
			// ���������ToolStripMenuItem
			// 
			resources->ApplyResources(this->���������ToolStripMenuItem, L"���������ToolStripMenuItem");
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::���������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			resources->ApplyResources(this->������������ToolStripMenuItem, L"������������ToolStripMenuItem");
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::������������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem1
			// 
			resources->ApplyResources(this->�������ToolStripMenuItem1, L"�������ToolStripMenuItem1");
			this->�������ToolStripMenuItem1->Name = L"�������ToolStripMenuItem1";
			this->�������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::�������ToolStripMenuItem1_Click);
			// 
			// �������ToolStripMenuItem
			// 
			resources->ApplyResources(this->�������ToolStripMenuItem, L"�������ToolStripMenuItem");
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�������ToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"graph.gr";
			this->openFileDialog1->InitialDirectory = L"C:\\Users\\admin\\Desktop";
			this->openFileDialog1->RestoreDirectory = true;
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"gr";
			this->saveFileDialog1->FileName = L"graph.gr";
			resources->ApplyResources(this->saveFileDialog1, L"saveFileDialog1");
			this->saveFileDialog1->InitialDirectory = L"C:\\Users\\admin\\Desktop";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// textBoxPath
			// 
			resources->ApplyResources(this->textBoxPath, L"textBoxPath");
			this->textBoxPath->BackColor = System::Drawing::Color::White;
			this->textBoxPath->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBoxPath->Name = L"textBoxPath";
			this->textBoxPath->ReadOnly = true;
			this->textBoxPath->Click += gcnew System::EventHandler(this, &MainForm::textBoxPath_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Name = L"label1";
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			resources->ApplyResources(this, L"$this");
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxPath);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->clearButton);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainForm::MainForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int Theme;  // ���������� ���������� �� ������� ���� ����
	private: Bitmap^ image; // ���������� ��������� �������
	private: graph graph; // ������� ������ ������ ������ graph
	private: Thread^ thread; // ������� ����� ����� ����������
	private: int graphIterator = 0; // ���������� ���������� �� ���������� ������
	private: myVector<int> arrX; // ������ ������ myVector �������� ���������� �� ��� x
	private: myVector<int> arrY; // ������ ������ myVector �������� ���������� �� ��� y
	private: int isHighlight = -1; // ���������� � ������� ��������� ��������� ������������� �������
		 // ResourceManager �����. ������������ ��������� ��������, �������������� ������� ������ � ��������,
		// ��������� � ������ � ������������� �����������, �� ����� ����������.
	private: ResourceManager^ resourceManager = gcnew ResourceManager("courseWork.MainForm", Assembly::GetExecutingAssembly());
		   // ������� ��������� ������� resource manager, � ���������� �������� ���� �������� ��� ������� �����, � ����� ������� Assembly::GetExecutingAssembly() �������� ������, ������� �������� ����������� � ������� ������ ���.
	private: ResourceManager^ myResourceManager = gcnew ResourceManager("courseWork.�������", Assembly::GetExecutingAssembly()); // ���������� ������ �������� ����� ��� ������� ���� ��������

		   // ��������� ��� ������ �������� ����� �������������
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		searchButton->Enabled = false; // ��������� ������ ������ �����
		searchButton->BackColor = ColorTranslator::FromHtml("#F9CC00"); // ������ ���� ������

		// ��������� ������ ���������� �����
		���������ToolStripMenuItem->Enabled = false;
		������������ToolStripMenuItem->Enabled = false;

		switch (Theme) // �������� � switch-case �������� Theme
		{
		case 0: // ���� ��� ���� ����� 0 �� ���� �������
		{
			�������ToolStripMenuItem_Click(this, gcnew EventArgs()); // �������� ������� �� ������ ����� ���� �� �������
			break;
		}
		case 1: // ���� ���� ������
		{
			������ToolStripMenuItem_Click(this, gcnew EventArgs()); // �������� ������� �� ������ ����� ���� �� ������
			break;
		}
		case 2: // ���� ���� �������
		{
			pinkyToolStripMenuItem_Click(this, gcnew EventArgs()); // �������� ������� �� ������ ����� ���� �� �������
			break;
		}
		}
	}
		   // ���������� ��� ������� �� pictureBox1
	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		for (int current = graphIterator - 1; current >= 0; current--)
		{ // �������� �� ���� ��������
			if ((e->X >= arrX[current] - 40 && e->Y >= arrY[current] - 40) && (e->X <= arrX[current] + 40 && e->Y <= arrY[current] + 40))
			{ // ��������� ����� �� ������������ �� ������� � ������� 40 ��������
				if ((e->X >= arrX[current] - 20 && e->Y >= arrY[current] - 20) && (e->X <= arrX[current] + 20 && e->Y <= arrY[current] + 20))
				{ // ��������� ����� �� ������������ ����� �� �������

					if (isHighlight > -1) // �������� �� �������
					{
						if (isHighlight != current) // ���� �������� �� ����� ������� �� ����� ������ ��� ���������
						{
							int tmp = isHighlight;

							// ������ ����� ����� ���������
							graph.drawLine(arrX[tmp], arrY[tmp], isHighlight, arrX[current], arrY[current], current);

							// � ������� ��������� ������ 1 �� ����������� ��������
							this->dataGridView1->Rows[isHighlight]->Cells[current]->Value = 1;
							this->dataGridView1->Rows[current]->Cells[isHighlight]->Value = 1;
						}
						else // ���� ��� ��� �� ������ ������� � �����
							graph.drawEllipse(Brushes::White, arrX[current], arrY[current], current);

						// � ������� ���������
						isHighlight = -1;
					}
					else // ������� �� ��������
					{
						//  �� ������ ��
						graph.drawEllipse(Brushes::Aqua, arrX[current], arrY[current], current);
						isHighlight = current; // � �������� � ��������������� ����������
					}
				}
				goto n; // �������� ���������� ������� ���������� ������
			}
			else
				continue; // ���������� �������� �����
		}
		// ���� ����� ��� ������
		arrX.push_back(e->X); // �� �������� ���������� � ����������
		arrY.push_back(e->Y);
		graph.drawEllipse(Brushes::White, e->X, e->Y, graphIterator); // � ������ �������

		this->dataGridView1->Columns->Add(graphIterator.ToString(), graphIterator.ToString()); // ��������� ������� � ������ ��������
		this->dataGridView1->Columns[graphIterator]->SortMode = DataGridViewColumnSortMode::NotSortable; // ��������� ��������� �� ����������� ��� �������
		this->dataGridView1->Rows->Add(); // ��������� ������
		this->dataGridView1->Rows[graphIterator]->HeaderCell->Value = Convert::ToString(graphIterator); // ������ �������� ��� ������
		this->dataGridView1->Rows[graphIterator + 1]->Cells[graphIterator]->Value = Convert::ToString(graphIterator); // � ��� ������ ��� �������� ������

		for (int i = 0; i < graphIterator + 1; i++) 
		{
			this->dataGridView1->Rows[graphIterator]->Cells[i]->Value = 0;
		}

		for (int i = graphIterator; i >= 0; i--)
		{
			this->dataGridView1->Rows[i]->Cells[graphIterator]->Value = 0;
		}

		graphIterator++;

		if (!searchButton->Enabled)
		{
			searchButton->Enabled = true;
			searchButton->BackColor = Color::Gold;
			���������ToolStripMenuItem->Enabled = true;
			������������ToolStripMenuItem->Enabled = true;
		}

	n:
		this->pictureBox1->Image = image;
	}

	private: System::Void pictureBox1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		for (int current = graphIterator - 1; current >= 0; current--)
		{
			if ((e->X >= arrX[current] - 20 && e->Y >= arrY[current] - 20) && (e->X <= arrX[current] + 20 && e->Y <= arrY[current] + 20))
			{
				graph.drawEllipse(Brushes::Blue, arrX[current], arrY[current], current);
				this->pictureBox1->Image = image;

				isHighlight = -1;

				EnterData::str = dataGridView1->Rows[graphIterator]->Cells[current]->Value->ToString();

				EnterData^ f = gcnew EnterData(Theme);

				f->ShowDialog();

				dataGridView1->Rows[graphIterator]->Cells[current]->Value = EnterData::str;

				graph.drawEllipse(Brushes::White, arrX[current], arrY[current], current);
				pictureBox1->Image = image;
			}
		}
	}

	private: bool isButton2On = true;
	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isButton2On)
		{
			thread = gcnew Thread(gcnew ThreadStart(this, &MainForm::gamilton));
			thread->Start();

			this->searchButton->Text = myResourceManager->GetString("StopSearch");
			this->searchButton->BackColor = Color::LightCoral;

			pictureBox1->Enabled = false;

			isButton2On = false;
		}
		else
			ButtonOn();
	}

		   delegate void InvokeDelegateButtonOn();
	private: void ButtonOn()
	{

		this->searchButton->Text = resourceManager->GetString("$this.Text");
		this->searchButton->BackColor = Color::Gold;

		this->pictureBox1->Enabled = true;

		isButton2On = true;

		thread->Abort();
	}

	private: void gamilton()
	{
		isHighlight = -1;

		bool* visited = new bool[graphIterator];          // ����� ����, �� ������� ���������� �������
		int* path = new int[graphIterator];				 // ������ ���������� ������

		for (int i = 0; i < graphIterator; i++)
		{
			graph.drawEllipse(Brushes::White, arrX[i], arrY[i], i);
			visited[i] = true;
		}
		visited[0] = false;

		path[0] = 0;

		graph.drawEllipse(Brushes::Red, arrX[0], arrY[0], 0);

		this->pictureBox1->Image = image;

		if (GamiltonCycleSearch(visited, path, 1))
		{
			graph.drawEllipse(Brushes::Coral, arrX[path[graphIterator - 1]], arrY[path[graphIterator - 1]], path[graphIterator - 1]);
			String^ strfed;
			for (int i = 0; i < graphIterator; i++)
				strfed += path[i] + "->";
			strfed += "0";
			this->textBoxPath->BeginInvoke(gcnew InvokeDelegateSetTextToLable(this, &MainForm::SetTextToLable), strfed);
		}
		else
		{
			graph.drawEllipse(Brushes::White, arrX[0], arrY[0], 0);
			this->pictureBox1->Image = image;
			this->textBoxPath->BeginInvoke(gcnew InvokeDelegateSetTextToLable(this, &MainForm::SetTextToLable), myResourceManager->GetString("isNoHamiltonianCycle"));
		}

		delete[] visited;
		delete[] path;

		this->BeginInvoke(gcnew InvokeDelegateButtonOn(this, &MainForm::ButtonOn));
	}


		   delegate void InvokeDelegateSetTextToLable(System::String^ str);
	private: void SetTextToLable(System::String^ str) {
		this->textBoxPath->Text = str;
	}
		   // ����������� ����� ����������� �����
	private: bool GamiltonCycleSearch(bool* visited, int* path, int k)
	{
		int v; // ������ �������
		bool isGamiltonCycle = false; // ������� ���������� ����, ������� - �� �������
		for (v = 0; v < graphIterator && !isGamiltonCycle; v++) // ����� ������� �� ���� �������� � ���� �� ������ ����
		{
			if (visited[v]) // ��������� �������� �� v �������
			{
				// ���� ������� ��� �� ����������, �� ������ �� �������� ��� ��������� ��� ���������
				graph.drawEllipse(Brushes::Blue, arrX[v], arrY[v], v); // �������������� ������� �������� ������ �������
				this->pictureBox1->Image = image; // ��������� ��������� � pictureBox1

				Thread::Sleep(500); // ������������� ����� �� 500 ��. ��� ���� ����� ��������� ���� �������
			}

			// ���� �� ����� ����� ������� �������� � ��������, ��������� ��� ���������� ������
			// ��, ��������� ������� ��������� �� ������ [path[k - 1]] � ������� [v]
			if (Convert::ToInt32(this->dataGridView1->Rows[path[k - 1]]->Cells[v]->Value) == 1)
			{
				if (k == graphIterator && v == 0) //���� ������ ��� ������� � ����� �� ���������,
					isGamiltonCycle = true;	// �� ���� ������
				else
				{
					if (visited[v])	// ��������� ����, ���� � ������� v ��� �� ����
					{
						graph.drawEllipse(Brushes::Coral, arrX[path[k - 1]], arrY[path[k - 1]], path[k - 1]); // �������� ���������� ������� ��� ���������� �������� ���������� �������
						graph.drawEllipse(Brushes::Red, arrX[v], arrY[v], v); // � ������� v ��� ������� � ������� ���������� ��������
						this->pictureBox1->Image = image; // ��������� ��������� � pictureBox1

						// �� ������������� �������� �.�. ��������� ����� ����� ��� ������ ������� ��� ����� 

						visited[v] = false;	// �������� ������� ��� ����������
						path[k] = v; // ��������� ������� � ��������� ����

						isGamiltonCycle = GamiltonCycleSearch(visited, path, k + 1); // ���� ��������� �������

						if (!isGamiltonCycle) // ��������� ������ �� ����������� ����
						{
							visited[v] = true; // ���� ���� �� ������, �� �������� ������� �������, ��� �� ����������

							Thread::Sleep(500); // ������������ ����� �� 500 ��. ��� ���� ����� ��������� ���� �������

							// �������� ������������ ����� � ��� ���� ��������
							graph.drawEllipse(Brushes::Red, arrX[path[k - 1]], arrY[path[k - 1]], path[k - 1]); // �������� ���������� ������� ������� �������� ��� ����� ������� �� ��� ������� �� ������� ���� �����
							graph.drawEllipse(Brushes::White, arrX[v], arrY[v], v); // � ������� ������� ������� �������

							this->pictureBox1->Image = image;
						}
					}
					else
						continue; // ���� � ������� ��� ����, �� �� ������ ��������� �������
				}
			}
			else if (visited[v])
			{
				// ���� ������� �� ��������� � ��� ���� �� ��������
				graph.drawEllipse(Brushes::White, arrX[v], arrY[v], v); // ������ �� ����� �������
				this->pictureBox1->Image = image;
			}
		}
		return isGamiltonCycle;	//���������� ����� ��� ���
	}

	private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = false;

		if (thread != nullptr)
			ButtonOn();

		searchButton->Enabled = false;
		searchButton->BackColor = ColorTranslator::FromHtml("#F9CC00");

		���������ToolStripMenuItem->Enabled = false;
		������������ToolStripMenuItem->Enabled = false;

		graph.clear_graph();
		this->pictureBox1->Image = image;

		graphIterator = 0;

		arrX.Clear();
		arrY.Clear();

		this->dataGridView1->Columns->Clear();

		isHighlight = -1;
	}

	private: System::Void MainForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		try
		{
			thread->Abort();
		}
		catch (...) {};

		Application::Exit();
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		���������ToolStripMenuItem_Click(this, gcnew EventArgs());
	}
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		changeLang("");
	}
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		changeLang("be");
	}
	private: System::Void englishToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		changeLang("en");
	}
	private: void changeLang(String^ l) {
		Thread::CurrentThread->CurrentUICulture = gcnew Globalization::CultureInfo(l);
		Thread::CurrentThread->CurrentCulture = gcnew Globalization::CultureInfo(l);

		this->WindowState = System::Windows::Forms::FormWindowState::Normal;
		this->Width = 1397;
		this->Height = 766;

		this->Text = resourceManager->GetString("$this.Text");

		ComponentResourceManager^ resources = gcnew ComponentResourceManager(this->GetType());

		for each (Control ^ ct in Controls)
		{
			resources->ApplyResources(ct, ct->Name);
		}

		�������ToolStripMenuItem->Enabled = true;
		��������ToolStripMenuItem->Enabled = true;
		englishToolStripMenuItem->Enabled = true;

		for each (ToolStripMenuItem ^ item in menuStrip1->Items)
		{
			applyLangToToolStripMenu(resources, item);
		}
	}
	private: void applyLangToToolStripMenu(ComponentResourceManager^ resources, ToolStripMenuItem^ item)
	{
		resources->ApplyResources(item, item->Name);
		for each (ToolStripMenuItem ^ itm in item->DropDownItems)
			applyLangToToolStripMenu(resources, itm);
	}
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->BackgroundColor = Color::LightGray;
		���������ToolStripMenuItem->Image = Image::FromFile("Icon\\setting_black.png");
		textBoxPath->BackColor = Color::White;

		changeColor(Color::WhiteSmoke, Color::Black);

		�������ToolStripMenuItem->Enabled = false;
		Theme = 0;
	}
	private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->BackgroundColor = Color::Gray;
		���������ToolStripMenuItem->Image = Image::FromFile("Icon\\setting_white.png");
		textBoxPath->BackColor = Color::DarkGray;

		changeColor(Color::DimGray, Color::White);

		������ToolStripMenuItem->Enabled = false;
		Theme = 1;
	}
	private: System::Void pinkyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->BackgroundColor = Color::Snow;
		���������ToolStripMenuItem->Image = Image::FromFile("Icon\\setting_black.png");
		textBoxPath->BackColor = Color::Snow;

		changeColor(Color::Lavender, Color::Black);

		pinkyToolStripMenuItem->Enabled = false;
		Theme = 2;
	}
	private: void changeColor(Color cl1, Color cl2) {
		this->BackColor = cl1;

		���������ToolStripMenuItem->ForeColor = cl2;
		����ToolStripMenuItem->ForeColor = cl2;
		�������ToolStripMenuItem->ForeColor = cl2;

		label1->BackColor = cl1;
		label1->ForeColor = cl2;

		textBoxPath->ForeColor = cl2;

		�������ToolStripMenuItem->Enabled = true;
		������ToolStripMenuItem->Enabled = true;
		pinkyToolStripMenuItem->Enabled = true;
	}
	private: System::Void ���������ToolStripMenuItem_DropDownOpened(System::Object^ sender, System::EventArgs^ e) {
		���������ToolStripMenuItem->ForeColor = Color::Black;
		���������ToolStripMenuItem->Image = Image::FromFile("Icon\\setting_black.png");
	}
	private: System::Void ���������ToolStripMenuItem_DropDownClosed(System::Object^ sender, System::EventArgs^ e) {
		if (Theme == 1)
		{
			���������ToolStripMenuItem->ForeColor = Color::White;
			���������ToolStripMenuItem->Image = Image::FromFile("Icon\\setting_white.png");
		}
	}
	private: System::Void ����ToolStripMenuItem_DropDownOpened(System::Object^ sender, System::EventArgs^ e) {
		����ToolStripMenuItem->ForeColor = Color::Black;
		����ToolStripMenuItem->Image = Image::FromFile("Icon\\folder_open.png");
	}
	private: System::Void ����ToolStripMenuItem_DropDownClosed(System::Object^ sender, System::EventArgs^ e) {
		if (Theme == 1)
		{
			����ToolStripMenuItem->ForeColor = Color::White;
		}
		����ToolStripMenuItem->Image = Image::FromFile("Icon\\folder_close.png");
	}
	private: String^ Path;
	private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (Path != nullptr)
			{
				StreamWriter^ sWriter = gcnew StreamWriter(saveFileDialog1->FileName, false);

				sWriter->Write(graphIterator + "\n");

				for (int i = 0; i < graphIterator - 1; i++)
					sWriter->Write(arrX[i] + " ");
				sWriter->Write(arrX[graphIterator - 1] + "\n");

				for (int i = 0; i < graphIterator - 1; i++)
					sWriter->Write(arrY[i] + " ");
				sWriter->Write(arrY[graphIterator - 1] + "\n");

				for (int i = 0; i <= graphIterator; i++)
				{
					for (int j = 0; j < graphIterator - 1; j++)
					{
						sWriter->Write(dataGridView1->Rows[i]->Cells[j]->Value + " ");
					}
					sWriter->Write(dataGridView1->Rows[i]->Cells[graphIterator - 1]->Value + "\n");
				}

				sWriter->WriteLine(isHighlight);

				sWriter->Close();
			}
			else
			{
				������������ToolStripMenuItem_Click(this, gcnew EventArgs());
			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message->ToString()); //�������� ����� ���������� � MessageBox()
		}
	}
	private: System::Void ������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				StreamWriter^ sWriter = gcnew StreamWriter(saveFileDialog1->FileName, false);

				sWriter->Write(graphIterator + "\n");

				for (int i = 0; i < graphIterator - 1; i++)
					sWriter->Write(arrX[i] + " ");
				sWriter->Write(arrX[graphIterator - 1] + "\n");

				for (int i = 0; i < graphIterator - 1; i++)
					sWriter->Write(arrY[i] + " ");
				sWriter->Write(arrY[graphIterator - 1] + "\n");

				for (int i = 0; i <= graphIterator; i++)
				{
					for (int j = 0; j < graphIterator - 1; j++)
					{
						sWriter->Write(dataGridView1->Rows[i]->Cells[j]->Value + " ");
					}
					sWriter->Write(dataGridView1->Rows[i]->Cells[graphIterator - 1]->Value + "\n");
				}

				sWriter->WriteLine(isHighlight);

				sWriter->Close();

				Path = saveFileDialog1->FileName;
				timer1->Enabled = true;
			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message->ToString()); //�������� ����� ���������� � MessageBox()
		}
	}
	private: System::Void �������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				StreamReader^ sReader = gcnew StreamReader(openFileDialog1->FileName);

				clearButton_Click(this, gcnew EventArgs());

				graphIterator = Convert::ToInt32(sReader->ReadLine());

				String^ str = sReader->ReadLine();

				array <String^>^ sss = str->Split(' ');

				for (int i = 0; i < sss->Length; i++)
					arrX.push_back(Convert::ToInt32(sss[i]));

				str = sReader->ReadLine();
				sss = str->Split(' ');

				for (int i = 0; i < sss->Length; i++)
					arrY.push_back(Convert::ToInt32(sss[i]));

				for (int i = 0; i < graphIterator; i++)
				{
					this->dataGridView1->Columns->Add(i.ToString(), i.ToString());
					this->dataGridView1->Columns[i]->SortMode = DataGridViewColumnSortMode::NotSortable;
					this->dataGridView1->Rows->Add();
					this->dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i);
				}

				for (int i = 0; i <= graphIterator; i++)
				{
					str = sReader->ReadLine();
					sss = str->Split(' ');

					for (int j = 0; j < sss->Length; j++)
						dataGridView1->Rows[i]->Cells[j]->Value = sss[j];
				}

				isHighlight = Convert::ToInt32(sReader->ReadLine());

				for (int i = 0; i < graphIterator; i++)
				{
					graph.drawEllipse(Brushes::White, arrX[i], arrY[i], i);

					for (int j = 0; j < graphIterator; j++)
						if (Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value) != 0)
							graph.drawLine(arrX[i], arrY[i], i, arrX[j], arrY[j], j);
				}

				if (isHighlight > -1)
				{
					int tmp = isHighlight;
					graph.drawEllipse(Brushes::Aqua, arrX[tmp], arrY[tmp], isHighlight);
				}

				sReader->Close();

				Path = openFileDialog1->FileName;

				searchButton->Enabled = true;
				searchButton->BackColor = Color::Gold;

				���������ToolStripMenuItem->Enabled = true;
				������������ToolStripMenuItem->Enabled = true;

				timer1->Enabled = true;
			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message->ToString()); //�������� ����� ���������� � MessageBox()
		}
	}
	private: System::Void textBoxPath_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxPath->SelectAll();
		textBoxPath->Copy();
	}
	private: ReferenceForm^ form;
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (form == nullptr || form->IsDisposed)
		{
			form = gcnew ReferenceForm(Theme);
			form->Show();
		}
		else
			form->Focus();
	}
	};
}