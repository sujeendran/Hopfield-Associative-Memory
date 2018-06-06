#pragma once
namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected:
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(40, 108);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(309, 272);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(377, 108);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(309, 272);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(102, 386);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 54);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Generate Weight Matrix";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(102, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(78, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(102, 40);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(78, 22);
			this->textBox2->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Rows";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Columns";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Input Matrix";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(374, 77);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Weighted Matrix";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(704, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Test Vector";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(799, 9);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(210, 22);
			this->textBox3->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(707, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Result";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(777, 386);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(179, 54);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Compute";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Location = System::Drawing::Point(707, 108);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(302, 272);
			this->label7->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(374, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 17);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Filepath:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(442, 9);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(244, 22);
			this->textBox4->TabIndex = 16;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(442, 42);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(244, 32);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Read File Data";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1040, 449);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm";
			this->Text = L"Hopfield Associative Memory";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void multiply(double **res, double **A, double **B, int aRows, int aCols, int bRows, int bCols)
		{
			if (aCols != bRows)
				return;

			for (int i = 0; i < aRows; i++)
			{
				for (int j = 0; j < bCols; j++)
				{
					res[i][j] = 0;
					for (int k = 0; k < aCols; k++)
					{
						res[i][j] += A[i][k] * B[k][j];
					}
				}
			}
		}

		void transpose(double **T, double **A, int aRows, int aCols)
		{
			for (int i = 0; i < aRows; i++)
			{
				for (int j = 0; j < aCols; j++)
				{
					T[j][i] = A[i][j];
				}
			}
		}

		void meye(double **res, int N, int M)
		{
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					if (i == j)
						res[i][j] = M;
					else
						res[i][j] = 0;
				}
			}
		}

		void bipolar(double **res, int N)
		{
			for (int i = 0; i < N; i++)
			{
				if (res[i][0]<0)
					res[i][0] = -1;
				else
					res[i][0] = 1;
			}
		}

		void genweight(double **xxt, double **meye, int N)
		{
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					xxt[i][j] = (xxt[i][j] - meye[i][j]) / N;
				}
			}
		}
		int check(double **a, double **b, int N)
		{
			for (int i = 0; i < N; i++)
			{
				if (a[i][0] != b[i][0])
					return 0;
			}
			return 1;
		}

		int N, M, aRows, aCols, vRows;
		double **X, **Xt, **C, **mi, **V, **o1, **o2, **o3;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		richTextBox2->Text = "";
		if (textBox1->Text == "" || textBox2->Text == "")
		{
			MessageBox::Show("Please input dimensions of input vectors");
		}
		else
		{
			N = System::Convert::ToInt32(textBox1->Text);
			M = System::Convert::ToInt32(textBox2->Text);
			aRows = N;
			aCols = M;
			vRows = N;

			X = new double*[aRows];
			for (int i = 0; i < aRows; i++)
			{
				X[i] = new double[aCols];
			}
			Xt = new double*[aCols];
			for (int i = 0; i < aCols; i++)
			{
				Xt[i] = new double[aRows];
			}
			C = new double*[aRows];
			for (int i = 0; i < aRows; i++)
			{
				C[i] = new double[aRows];
			}
			mi = new double*[aRows];
			for (int i = 0; i < aRows; i++)
			{
				mi[i] = new double[aRows];
			}
			V = new double*[vRows];
			o1 = new double*[vRows];
			o2 = new double*[vRows];
			o3 = new double*[vRows];
			for (int i = 0; i < vRows; i++)
			{
				V[i] = new double[1];
				o1[i] = new double[1];
				o2[i] = new double[1];
				o3[i] = new double[1];
			}

			String ^str = richTextBox1->Text;
			array<String^>^ result;
			array<Char>^ separ = gcnew array<Char>{' ', '\n'};
			result = str->Split(separ, StringSplitOptions::None);

			if (result->Length != M * N)
			{
				MessageBox::Show("Input Vectors not matching dimensions provided");
			}
			else
			{
				int idx = 0;
				for (int i = 0; i < N; i++)
				{
					for (int j = 0; j < M; j++)
					{
						X[i][j] = System::Convert::ToDouble(result[idx]);
						idx++;
					}
				}

				transpose(Xt, X, aRows, aCols);
				multiply(C, X, Xt, aRows, aCols, aCols, aRows);
				meye(mi, N, M);
				genweight(C, mi, N);

				for (int i = 0; i < N; i++)
				{
					for (int j = 0; j < N; j++)
					{
						richTextBox2->Text = richTextBox2->Text + C[i][j] + "\t";
					}
					richTextBox2->Text = richTextBox2->Text + "\n";
				}
			}
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	label7->Text = "";
	String ^str = textBox3->Text;
	array<String^>^ result;
	array<Char>^ separ = gcnew array<Char>{' ', '\n'};
	result = str->Split(separ, StringSplitOptions::None);

	if (result->Length != N)
	{
		MessageBox::Show("Test Vector size not matching with input vectors");
	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			V[i][0] = System::Convert::ToDouble(result[i]);
		}

		multiply(o1, C, V, N, N, N, 1);
		bipolar(o1, N);
		while (true)
		{
			multiply(o2, C, o1, N, N, N, 1);
			bipolar(o2, N);
			multiply(o3, C, o2, N, N, N, 1);
			bipolar(o3, N);
			if (check(o1, o2, N) || check(o2, o3, N))
			{
				label7->Text = label7->Text + "Result: Converged Vector\n";
				for (int i = 0; i < N; i++)
				{
					label7->Text = label7->Text + o2[i][0] + "\n";
				}
				break;
			}
			if (check(o1, o3, N))
			{
				label7->Text = label7->Text + "Result: Looping Vectors\n";
				label7->Text = label7->Text + "\nV1:\n";
				for (int i = 0; i < N; i++)
				{
					label7->Text = label7->Text + o1[i][0] + "\n";
				}
				label7->Text = label7->Text + "\nV2:\n";
				for (int i = 0; i < N; i++)
				{
					label7->Text = label7->Text + o2[i][0] + "\n";
				}
				break;
			}
			multiply(o1, C, o3, N, N, N, 1);
			bipolar(o1, N);
		}
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ fileName = textBox4->Text;
	textBox1->Text = "";
	textBox2->Text = "";
	richTextBox1->Text = "";
	try
	{
		StreamReader^ DataIn = File::OpenText(fileName);
		String^ DataStr;
		int count = 0;
		while ((DataStr = DataIn->ReadLine()) != nullptr)
		{
			if (count == 0)
				textBox1->Text = textBox1->Text + DataStr;
			if (count == 1)
				textBox2->Text = textBox2->Text + DataStr;
			if (count == 2)
				richTextBox1->Text = richTextBox1->Text + DataStr;
			if (count > 2)
				richTextBox1->Text = richTextBox1->Text + "\n" + DataStr;
			count++;
		}
	}
	catch (Exception^ e)
	{
		if (dynamic_cast<FileNotFoundException^>(e))
			MessageBox::Show("File " + fileName + " not found");
	}
}
};
}
