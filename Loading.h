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
	private: System::Windows::Forms::Button^  delete_data;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckedListBox^  separator;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;

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
			this->delete_data = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->separator = (gcnew System::Windows::Forms::CheckedListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->chart1->Size = System::Drawing::Size(443, 157);
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
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(215, 171);
			this->chart2->Margin = System::Windows::Forms::Padding(0);
			this->chart2->MinimumSize = System::Drawing::Size(20, 20);
			this->chart2->Name = L"chart2";
			this->chart2->Padding = System::Windows::Forms::Padding(20);
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Series2";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(443, 157);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			this->chart2->UseWaitCursor = true;
			// 
			// delete_data
			// 
			this->delete_data->Location = System::Drawing::Point(6, 344);
			this->delete_data->Name = L"delete_data";
			this->delete_data->Size = System::Drawing::Size(158, 36);
			this->delete_data->TabIndex = 7;
			this->delete_data->Text = L"Delete Data";
			this->delete_data->UseVisualStyleBackColor = true;
			this->delete_data->Click += gcnew System::EventHandler(this, &Loading::delete_data_Click);
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
			// Loading
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(912, 383);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->separator);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->delete_data);
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
		wchar_t sepa;
		IEnumerator^ sep = separator->CheckedItems->GetEnumerator();
		while (sep->MoveNext()) {
			String^ itemChecked = safe_cast<String^>(sep->Current);
			if (itemChecked == "Coma") { sepa = ','; }
			else if (itemChecked == "Dot") { sepa = '.'; }
			else if (itemChecked == "Tab") { sepa = '\t'; }
			else if (itemChecked == "Space") { sepa = ' '; }
		}
		
		int countter = 0;
		//temporary pointer to deta
		double** p1_to_data;
		
		size = file_data->Length;
		
		p1_to_data = new double*[size];
		for (int i = 0; i < size; i++)
				{
					p1_to_data[i] = new double[2];
				}

			for each(String^ line in file_data) {
				String^ number1;
				String^ number2;

				bool is_space = false;
				//built two string from each line
				for each(wchar_t line_char in line)
						{
							//f there is tab then skip it
							if (line_char == sepa) {
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
				Number1 = Double::Parse(number1);
				Number2 = Double::Parse(number2);
				//saving numbera to p_to_data
				try { p1_to_data[countter][0] = Number1; }
				catch (int e) { textBox1->Text = e.ToString(); }
				try { p1_to_data[countter][1] = Number2; }
				catch (int f){ textBox1->Text = f.ToString(); }


				//display XY in chart
				chart1->Series["Series1"]->Points->AddXY(Number1, Number2);
				countter++;
				
			}
			return p1_to_data;
	}
			 
private: System::Void delete_data_Click(System::Object^  sender, System::EventArgs^  e) {
	delete p_to_data;
}
		 double** p_to_data;
		 int size;
private: System::Void derivative_click(System::Object^  sender, System::EventArgs^  e) {
	//define local copy of p_to_data
	double** P_D = p_to_data;
	//define local variation and dynamic table
	double** P_Diff = p_to_data;
	P_Diff = new double*[size];
	for (int i= 0; i < size; i++)
	{
		P_Diff[i] = new double[2];
	}
	for (int i = 0; i <(size -1); i++) {
		P_Diff[i][1] = P_D[i + 1][1] - P_D[i][1];
		P_Diff[i][0] = p_to_data[i][0];
		chart2->Series["Series2"]->Points->AddXY(P_Diff[i][0], P_Diff[i][1]); 
		
	//	TextBox->Text += P_Diff[i][0].ToString()+"\n";
	//	TextBox1->Text += P_Diff[i][1].ToString() + "\n";


	}
	
}
};
	

}