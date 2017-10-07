#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include <fstream>
namespace Проект4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox8;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(239, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(79, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"5";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(239, 51);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(79, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(239, 97);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(79, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"5";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(378, 12);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(79, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"1";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(378, 51);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(79, 20);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"0";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(378, 97);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(79, 20);
			this->textBox6->TabIndex = 5;
			this->textBox6->Text = L"0,00001";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(214, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"p=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(182, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"u(-MAX)=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(198, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Tmax=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(337, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"MAX=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(325, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"u(MAX)=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(346, 100);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(26, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"dT=";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(475, 15);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"LX=";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(507, 12);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(79, 20);
			this->textBox7->TabIndex = 12;
			this->textBox7->Text = L"200";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(507, 81);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 32);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(240, 138);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(372, 230);
			this->chart1->TabIndex = 15;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(478, 54);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"k=";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(507, 51);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(79, 20);
			this->textBox8->TabIndex = 16;
			this->textBox8->Text = L"5000";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 384);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double InitCond(double x, double MAX) {
			if (((x >= -MAX) && (x <= -MAX / 2)) || (x >= MAX / 2) && (x <= MAX)) {
				return 0;
			}
			else {
				if ((x >= -MAX / 2) && (x <= MAX / 2)) {
					return cos(x*M_PI / MAX);
				}
			}
		}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		chart1->Series["Series1"]->Points->Clear();
		std::ofstream file;
		file.open("result");
		int k = Convert::ToInt16(textBox8->Text);
		double p = Convert::ToDouble(textBox1->Text);
		double MAX = Convert::ToDouble(textBox4->Text);
		double ugr1 = Convert::ToDouble(textBox2->Text);
		double ugr2 = Convert::ToDouble(textBox5->Text);
		double Tmax = Convert::ToDouble(textBox3->Text);
		double dT = Convert::ToDouble(textBox6->Text);
		int LX = Convert::ToInt32(textBox7->Text);
		int m = Tmax / dT + 1;
		int n = LX + 1;
		double *v, *vnext;
		v = new double[n];
		vnext = new double[n];
		double h = 2 * MAX / LX;
		for (int i = 0; i < n; ++i) {
			v[i] = InitCond(-MAX + 2 * MAX*i / LX, MAX);
			chart1->Series["Series1"]->Points->AddXY(-MAX + 2 * MAX*i / LX, v[i]);
			file << v[i] << ' ';
		}
		file << std::endl;
		for (int i = 1; i < m; ++i) {
			vnext[0] = ugr1;
			vnext[n - 1] = ugr2;
			for (int j = 1; j < n - 1; ++j) {
				vnext[j] = v[j] + p*dT *(v[j + 1] - 2 * v[j] + v[j - 1]) / (h*h);
			}
			if (i % k == 0) {
				for (int j = 0; j < n; ++j) {
					file << vnext[j] << ' ';
					chart1->Series["Series1"]->Points->AddXY(-MAX + 2 * MAX*j / LX, vnext[j]);
				}
				file << std::endl;
			}
			double * tmp = v;
			v = vnext;
			vnext = tmp;
		}
	}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
