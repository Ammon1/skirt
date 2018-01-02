#pragma once

namespace Matematyka {
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Reflection;

	[assembly:AssemblyVersionAttribute("1.0")];

	/// <summary>
	/// Podsumowanie informacji o Loading
	/// </summary>
	public ref class Loading : public System::Windows::Forms::Form
	{
	public:
		bool pause = true;
	public:
		Loading(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Loading()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  derivative;



	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckedListBox^  separator;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  apply1;
	private: System::Windows::Forms::TextBox^  X_min_1;
	private: System::Windows::Forms::TextBox^  X_max_1;




	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  X_max_2;

	private: System::Windows::Forms::TextBox^  X_min_2;

	private: System::Windows::Forms::Button^  apply2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  Y_max_1;

	private: System::Windows::Forms::TextBox^  Y_min_1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  Y_max_2;
	private: System::Windows::Forms::TextBox^  Y_min_2;
	private: System::Windows::Forms::Button^  clear;


	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->derivative = (gcnew System::Windows::Forms::Button());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->separator = (gcnew System::Windows::Forms::CheckedListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->apply1 = (gcnew System::Windows::Forms::Button());
			this->X_min_1 = (gcnew System::Windows::Forms::TextBox());
			this->X_max_1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->X_max_2 = (gcnew System::Windows::Forms::TextBox());
			this->X_min_2 = (gcnew System::Windows::Forms::TextBox());
			this->apply2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Y_max_1 = (gcnew System::Windows::Forms::TextBox());
			this->Y_min_1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Y_max_2 = (gcnew System::Windows::Forms::TextBox());
			this->Y_min_2 = (gcnew System::Windows::Forms::TextBox());
			this->clear = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 257);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Load Data";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Loading::button1_Click);
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			this->chart1->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Center;
			this->chart1->BorderlineColor = System::Drawing::Color::Black;
			this->chart1->BorderlineWidth = 0;
			this->chart1->BorderSkin->BackColor = System::Drawing::Color::Black;
			this->chart1->BorderSkin->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Center;
			this->chart1->BorderSkin->BorderWidth = 0;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(215, 14);
			this->chart1->Margin = System::Windows::Forms::Padding(0);
			this->chart1->MinimumSize = System::Drawing::Size(20, 20);
			this->chart1->Name = L"chart1";
			this->chart1->Padding = System::Windows::Forms::Padding(20);
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(351, 157);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			this->chart1->UseWaitCursor = true;
			this->chart1->Click += gcnew System::EventHandler(this, &Loading::chart1_Click);
			// 
			// derivative
			// 
			this->derivative->Location = System::Drawing::Point(6, 298);
			this->derivative->Name = L"derivative";
			this->derivative->Size = System::Drawing::Size(158, 36);
			this->derivative->TabIndex = 4;
			this->derivative->Text = L"derivative";
			this->derivative->UseVisualStyleBackColor = true;
			this->derivative->Click += gcnew System::EventHandler(this, &Loading::derivative_click);
			// 
			// chart2
			// 
			this->chart2->BackColor = System::Drawing::Color::Transparent;
			this->chart2->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Center;
			this->chart2->BorderlineColor = System::Drawing::Color::Black;
			this->chart2->BorderlineWidth = 0;
			this->chart2->BorderSkin->BackColor = System::Drawing::Color::Black;
			this->chart2->BorderSkin->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Center;
			this->chart2->BorderSkin->BorderWidth = 0;
			chartArea2->Name = L"ChartArea2";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(215, 171);
			this->chart2->Margin = System::Windows::Forms::Padding(0);
			this->chart2->MinimumSize = System::Drawing::Size(20, 20);
			this->chart2->Name = L"chart2";
			this->chart2->Padding = System::Windows::Forms::Padding(20);
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series2->ChartArea = L"ChartArea2";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Series2";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(351, 157);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			this->chart2->UseWaitCursor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"data separator";
			// 
			// separator
			// 
			this->separator->FormattingEnabled = true;
			this->separator->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Tab", L"Space", L"Coma", L"Dot" });
			this->separator->Location = System::Drawing::Point(6, 46);
			this->separator->Name = L"separator";
			this->separator->Size = System::Drawing::Size(114, 64);
			this->separator->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(139, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(81, 20);
			this->textBox1->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(150, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"error code";
			// 
			// apply1
			// 
			this->apply1->Location = System::Drawing::Point(569, 106);
			this->apply1->Name = L"apply1";
			this->apply1->Size = System::Drawing::Size(69, 32);
			this->apply1->TabIndex = 12;
			this->apply1->Text = L"apply";
			this->apply1->UseVisualStyleBackColor = true;
			this->apply1->Click += gcnew System::EventHandler(this, &Loading::apply_Click1);
			// 
			// X_min_1
			// 
			this->X_min_1->Location = System::Drawing::Point(569, 48);
			this->X_min_1->Name = L"X_min_1";
			this->X_min_1->Size = System::Drawing::Size(37, 20);
			this->X_min_1->TabIndex = 13;
			// 
			// X_max_1
			// 
			this->X_max_1->Location = System::Drawing::Point(569, 80);
			this->X_max_1->Name = L"X_max_1";
			this->X_max_1->Size = System::Drawing::Size(37, 20);
			this->X_max_1->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(612, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"X max";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(612, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"X min";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(612, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"X min";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(612, 232);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"X max";
			// 
			// X_max_2
			// 
			this->X_max_2->Location = System::Drawing::Point(569, 229);
			this->X_max_2->Name = L"X_max_2";
			this->X_max_2->Size = System::Drawing::Size(37, 20);
			this->X_max_2->TabIndex = 19;
			// 
			// X_min_2
			// 
			this->X_min_2->Location = System::Drawing::Point(569, 197);
			this->X_min_2->Name = L"X_min_2";
			this->X_min_2->ShortcutsEnabled = false;
			this->X_min_2->Size = System::Drawing::Size(37, 20);
			this->X_min_2->TabIndex = 18;
			// 
			// apply2
			// 
			this->apply2->Location = System::Drawing::Point(569, 255);
			this->apply2->Name = L"apply2";
			this->apply2->Size = System::Drawing::Size(69, 32);
			this->apply2->TabIndex = 17;
			this->apply2->Text = L"apply";
			this->apply2->UseVisualStyleBackColor = true;
			this->apply2->Click += gcnew System::EventHandler(this, &Loading::apply2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(717, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 13);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Y min";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(717, 86);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Y max";
			// 
			// Y_max_1
			// 
			this->Y_max_1->Location = System::Drawing::Point(674, 83);
			this->Y_max_1->Name = L"Y_max_1";
			this->Y_max_1->Size = System::Drawing::Size(37, 20);
			this->Y_max_1->TabIndex = 23;
			// 
			// Y_min_1
			// 
			this->Y_min_1->Location = System::Drawing::Point(674, 51);
			this->Y_min_1->Name = L"Y_min_1";
			this->Y_min_1->Size = System::Drawing::Size(37, 20);
			this->Y_min_1->TabIndex = 22;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(720, 200);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(33, 13);
			this->label9->TabIndex = 29;
			this->label9->Text = L"Y min";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(720, 232);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(36, 13);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Y max";
			// 
			// Y_max_2
			// 
			this->Y_max_2->Location = System::Drawing::Point(674, 232);
			this->Y_max_2->Name = L"Y_max_2";
			this->Y_max_2->Size = System::Drawing::Size(37, 20);
			this->Y_max_2->TabIndex = 27;
			// 
			// Y_min_2
			// 
			this->Y_min_2->Location = System::Drawing::Point(674, 200);
			this->Y_min_2->Name = L"Y_min_2";
			this->Y_min_2->Size = System::Drawing::Size(37, 20);
			this->Y_min_2->TabIndex = 26;
			// 
			// clear
			// 
			this->clear->Location = System::Drawing::Point(139, 80);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(81, 25);
			this->clear->TabIndex = 30;
			this->clear->Text = L"clear";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &Loading::clear_Click);
			// 
			// Loading
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(912, 383);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->Y_max_2);
			this->Controls->Add(this->Y_min_2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Y_max_1);
			this->Controls->Add(this->Y_min_1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->X_max_2);
			this->Controls->Add(this->X_min_2);
			this->Controls->Add(this->apply2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->X_max_1);
			this->Controls->Add(this->X_min_1);
			this->Controls->Add(this->apply1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->separator);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->derivative);
			this->Controls->Add(this->button1);
			this->MinimumSize = System::Drawing::Size(20, 38);
			this->Name = L"Loading";
			this->Padding = System::Windows::Forms::Padding(150, 32, 0, 0);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Loading";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//loading data from file
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{

		//load file
		array<String^>^	file_data = load();
		int countter = 0;
		p_to_data = take_data(file_data);
		chart1->Enabled = false;
		chart2->Enabled = false;

	}

	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 //function to load data
	private: array<String^>^ load() {
		// Displays an OpenFileDialog so the user can select a Cursor.
		OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "Text Files|*.txt";
		openFileDialog1->Title = "Select a Text File";

		// Show the Dialog.
		// If the user clicked OK in the dialog and
		// a .CUR file was selected, open it.
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			// Assign the cursor in the Stream to
			// the Form's Cursor property.
			String^ filename = openFileDialog1->FileName;
			array<String^>^ file_data = File::ReadAllLines(filename);
			return file_data;
		}

	}
			 //function to sava data into dynamic table
	private: double** take_data(array<String^>^	file_data) {
		//temporary data containers
		double Number1;
		double Number2;
		//temporary pointer to deta
		double** p1_to_data;
		bool is_sep=false;

		size = file_data->Length;

		p1_to_data = new double*[size];
		for (int i = 0; i < size; i++)
		{
			p1_to_data[i] = new double[2];
		}
		wchar_t sepa;
		IEnumerator^ sep = separator->CheckedItems->GetEnumerator();
		
		
		while (sep->MoveNext()) {
			//String^ itemChecked = safe_cast<String^>(sep->Current);
			String^ itemChecked = safe_cast<String^>(sep->Current);
			if (itemChecked == "Coma") { sepa = ','; }
			else if (itemChecked == "Dot") { sepa = '.'; }
			else if (itemChecked == "Tab") { sepa = '\t'; }
			else if (itemChecked == "Space") { sepa = ' '; }
			is_sep = true;
		}
		if (is_sep == false) { textBox1->Text = "no separator choosen"; return p1_to_data; }
		int countter = 0;
		

		for each(String^ line in file_data) {
			String^ number1;
			String^ number2;

			bool is_space = false;
			//built two string from each line
			for each(wchar_t line_char in line)
			{
				//f there is tab then skip it
				if (line_char == '\t') {
					is_space = true; continue;
				}
				//for separator as . change to ,
				if (line_char == '.')line_char = ',';
				//save as number 1
				if (is_space == false) { number1 += line_char.ToString(); }
				//save as number 2
				else if (is_space == true) { number2 += line_char.ToString(); }

			}
			//transfer strings to numbers
			try { Number1 = Double::Parse(number1); }
			catch (int e) { textBox1->Text = e.ToString(); };
			try { Number2 = Double::Parse(number2); }
			catch (int e) { textBox1->Text = e.ToString(); };
			//saving numbera to p_to_data
			try { p1_to_data[countter][0] = Number1; }
			catch (int e) { textBox1->Text = e.ToString(); }
			try { p1_to_data[countter][1] = Number2; }
			catch (int f) { textBox1->Text = f.ToString(); }


			//display XY in chart
			chart1->Series["Series1"]->Points->AddXY(Number1, Number2);
			countter++;

		}
		return p1_to_data;
	}

			
	private: System::Void derivative_click(System::Object^  sender, System::EventArgs^  e) {
		//define local copy of p_to_data
		double** P_D = p_to_data;
		//define local variation and dynamic table
		double** P_Diff = p_to_data;
		P_Diff = new double*[size];
		//calculation of differential and ploting it
		for (int i = 0; i < size; i++)
		{
			P_Diff[i] = new double[2];
		}
		for (int i = 0; i < (size - 1); i++) {
			P_Diff[i][1] = P_D[i + 1][1] - P_D[i][1];
			P_Diff[i][0] = p_to_data[i][0];
			chart2->Series["Series2"]->Points->AddXY(P_Diff[i][0], P_Diff[i][1]);

			//	TextBox->Text += P_Diff[i][0].ToString()+"\n";
			//	TextBox1->Text += P_Diff[i][1].ToString() + "\n";


		}
		delete P_D;
		delete P_Diff;
	}
	private: System::Void apply_Click1(System::Object^  sender, System::EventArgs^  e) {
		double  zmienna;
		if (Double::TryParse((X_max_1->Text), zmienna)) { chart1->ChartAreas[L"ChartArea1"]->AxisX->Maximum = zmienna;}
		else textBox1->Text = "wrong scale";
		if (Double::TryParse((X_min_1->Text), zmienna)) { chart1->ChartAreas[L"ChartArea1"]->AxisX->Minimum = zmienna;}
		else textBox1->Text = "wrong scale"; 
		if (Double::TryParse((Y_max_1->Text), zmienna)) { chart1->ChartAreas[L"ChartArea1"]->AxisY->Maximum = zmienna; }
		else textBox1->Text = "wrong scale";
		if (Double::TryParse((Y_min_1->Text), zmienna)) { chart1->ChartAreas[L"ChartArea1"]->AxisY->Minimum = zmienna; } 
		else textBox1->Text = "wrong scale"; 
	}

	private: System::Void apply2_Click(System::Object^  sender, System::EventArgs^  e) {
		double  zmienna;
		if (Double::TryParse((X_max_2->Text), zmienna)) { chart2->ChartAreas[L"ChartArea2"]->AxisX->Maximum = zmienna; }
		else textBox1->Text = "wrong scale";
		if (Double::TryParse((X_min_2->Text), zmienna)) { chart2->ChartAreas[L"ChartArea2"]->AxisX->Minimum = zmienna;}
		else textBox1->Text = "wrong scale";
		if (Double::TryParse((Y_max_2->Text), zmienna)) { chart2->ChartAreas[L"ChartArea2"]->AxisY->Maximum = zmienna;}
		else textBox1->Text = "wrong scale";
		if (Double::TryParse((Y_min_2->Text), zmienna)) { chart2->ChartAreas[L"ChartArea2"]->AxisY->Minimum = zmienna; }
		else textBox1->Text = "wrong scale";
	}
			 
private: System::Void clear_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "";
}
		 double** p_to_data;
		 int size;
};
}