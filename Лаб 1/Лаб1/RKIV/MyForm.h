#pragma once
#define _USE_MATH_DEFINES

#include <cstdlib>
#include <time.h>
#include <string>
#include <vector>
#include "help.h"
#include <math.h>

//using namespace std;

namespace RKIV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;


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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  n;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::DataGridView^  dataGridView4;






	protected:













	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->n = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(159, 473);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0,5";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(159, 509);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"10";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 473);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"P";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 507);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"N";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1291, 696);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 36);
			this->button1->TabIndex = 4;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->n, this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(397, 453);
			this->dataGridView1->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"y";
			this->Column1->Name = L"Column1";
			// 
			// n
			// 
			this->n->HeaderText = L"n[i]";
			this->n->Name = L"n";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"n[i]/n";
			this->Column2->Name = L"Column2";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column3,
					this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10
			});
			this->dataGridView2->Location = System::Drawing::Point(425, 12);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(660, 187);
			this->dataGridView2->TabIndex = 6;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"E";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"x";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"|E-x|";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Dn";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"S^2";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"|Dn-S^2|";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Me";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"R";
			this->Column10->Name = L"Column10";
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(1094, 12);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(484, 344);
			this->zedGraphControl1->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1091, 394);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"D = ";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(425, 221);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(660, 244);
			this->dataGridView3->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(425, 488);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"max|v-p|";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 542);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"alpha";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(159, 539);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 12;
			this->textBox3->Text = L"0,1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 574);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(141, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Число интервалов k";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(159, 569);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 14;
			this->textBox4->Text = L"3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(425, 539);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 17);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Гипотеза -";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(425, 514);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 17);
			this->label8->TabIndex = 16;
			this->label8->Text = L"F(R0) = ";
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(425, 574);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(660, 150);
			this->dataGridView4->TabIndex = 17;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1875, 744);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		using namespace std;
		dataGridView1->Rows->Clear();
		dataGridView2->Rows->Clear();
		dataGridView3->Rows->Clear();
		dataGridView4->Rows->Clear();
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		srand(time(0));
		double p = Convert::ToDouble(textBox1->Text);
		double alpha = Convert::ToDouble(textBox3->Text);
		double Ey = 0, chX = 0, Dy = 0, S = 0, Me = 0, R = 0;
		int n = Convert::ToInt32(textBox2->Text);
		unsigned int y = 0;
		bool I = true;
		int ni = 0;
		double D = 0.0;
		vector<int> prob;
		vector<double> ver;
		for (int i = 0; i < 100000; i++)
			prob.push_back(0);
		int imax = 0, ii = 0;
		for (int j = 0; j < n; j++)
		{
			I = true;
			for (int i = 0; I == true; i++)
			{
				double u = (double)rand() / RAND_MAX;
				if (u < p)
				{
					if (i == 0)
						i++;
				}
				else if (u >= p && i == 0)
				{
					prob[0]++;
					I = false;
				}
				else
				{
					I = false;
					if (imax < i)
						imax = i;
					prob[i - 1]++;
				}
			}
		}
		int cur = 0, curi = 0;
		int curfs = 0;
		for (int i = 0; i < 3; i++)
		{
			dataGridView3->Columns->Add("", "");
			dataGridView3->Rows->Add();

		}
		for (double i = -2; i <= 0; i += 0.2)
		{
			f1_list->Add(i, 0);
			f2_list->Add(i, 0);
		}
		for (int i = 0; i < 50; i++)
		{
			if (prob[i] != 0)
				curfs++;
			if (i < 49)
				ver.push_back((1-p)*pow(p,i));
			if (i == 49)
				ver.push_back(pow(p,i) + (1-p)* pow(p,i-1));
		}
		for (int i = 0; i < 50; i++)
		{
			if (i < 49)
			{
				f1_list->Add(i, F(i, ver));
				f1_list->Add(i + 1, F(i, ver));
			}
			else if (i == 49)
				f1_list->Add(i, F(i, ver));
			Ey = Ey + i * ver[i];
			Dy = Dy + pow(i, 2) * ver[i];
		}
		double maxdif = 0;
		for (int i = 0; i <= imax; i++)
		{
			if (prob[i] != 0)
			{
				dataGridView1->Rows->Add();
				dataGridView1->Rows[cur]->Cells[0]->Value = i;
				dataGridView1->Rows[cur]->Cells[1]->Value = prob[i];
				dataGridView1->Rows[cur]->Cells[2]->Value = (double)prob[i] / n;
				chX = chX + (double)(i * prob[i]);
				R = i;
				curi = i;
				while (prob[curi + 1] == 0 && curi <= imax)
					curi++;
				curi++;
				f2_list->Add(i, Fs(i, n, prob));
				f2_list->Add(curi, Fs(i, n, prob));

				dataGridView3->Rows[0]->Cells[cur]->Value = i;
				dataGridView3->Rows[1]->Cells[cur]->Value = ver[i];
				dataGridView3->Rows[2]->Cells[cur]->Value = (double)prob[i]/n;
				if (maxdif < fabs((double)prob[i] / n - ver[i]))
					maxdif = fabs((double)prob[i] / n - ver[i]);
				dataGridView3->Columns->Add("", "");
				cur++;
			}
		}
		int k = imax - 1;
		if (k % 2 != 0)
		{
			Me = (k - 1) / 2;
		}
		else
		{
			Me = (k + 1) / 2;
		}
		chX = chX / n;
		for (double i = 0; i <= imax; i++)
		{
			if (prob[i] != 0)
			{
				S = S + pow(i - chX, 2) * prob[i];
			}
			if (fabs(F(i, ver) - Fs(i, n, prob)) > D)
				D = fabs(F(i, ver) - Fs(i, n, prob));
		}
		Dy = Dy - pow(Ey, 2);
		S = S / n;
		dataGridView2->Rows->Add();
		dataGridView2->Rows[0]->Cells[0]->Value = Ey;
		dataGridView2->Rows[0]->Cells[1]->Value = chX;
		dataGridView2->Rows[0]->Cells[2]->Value = fabs(Ey - chX);
		dataGridView2->Rows[0]->Cells[3]->Value = Dy;
		dataGridView2->Rows[0]->Cells[4]->Value = S;
		dataGridView2->Rows[0]->Cells[5]->Value = fabs(Dy - S);
		dataGridView2->Rows[0]->Cells[6]->Value = Me;
		dataGridView2->Rows[0]->Cells[7]->Value = R;
		label3->Text = "D = " + Convert::ToString(D);
		label4->Text = "max|v-p| = " + Convert::ToString(maxdif);
		LineItem Curve1 = panel->AddCurve("F(x)", f1_list, Color::Red, SymbolType::Plus);
		LineItem Curve2 = panel->AddCurve("F^(x)", f2_list, Color::Blue, SymbolType::Star);
		
		//---------------------------- Third lab
		int kk = Convert::ToInt32(textBox4->Text);
		double qq, nn;
		double R0 = 0.0;
		double h = (R+1) / kk;
		int kkpro = 0, qpro = 0;
		double qqq = 0.0;
		dataGridView4->Columns->Add("", "");
		dataGridView4->Rows->Add();
		for (double i = -h; kkpro < kk; i += h)
		{
			int i1 = (int)i;
			int i2 = (int)(i + h);
			qq = 0.0;
			nn = 0.0;
			for (int j = qpro; j <= R; j++)
			{
				if (j >= i1 && j <= i2)
				{
					//qq += ver[j];
					nn += prob[j];
					qpro++;
				}
			}
			qq = F(i2,ver) - F(i1,ver);
			qqq += qq;
			if (kkpro == kk - 1)
				qq = qq + (1 - qqq);
			R0 = R0 + (pow(nn - n * qq, 2) / (n*qq));
			dataGridView4->Columns->Add("", "");
			dataGridView4->Rows[0]->Cells[kkpro]->Value = qq;
			kkpro++;
		}
		R0 = FR0(R0, kk-1);
		if (R0 > alpha)
			label7->Text = "Гипотеза - Принята";
		else if (R0 <= alpha)
			label7->Text = "Гипотеза - Отвергнута";
		label8->Text = "F(R0) = " + Convert::ToString(R0);



		//--------------------------------
		panel->XAxis->Scale->Min = -2;
		panel->XAxis->Scale->Max = imax+2;

		panel->YAxis->Scale->Min = 0;
		panel->YAxis->Scale->Max = 1.5;

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
	}

};

}

