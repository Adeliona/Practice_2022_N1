#pragma once

namespace Practice1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

		}

	protected:

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnDraw;
	private: System::Windows::Forms::Button^ btnColor;
	protected:


	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::TextBox^ inputD;

	private: System::Windows::Forms::TextBox^ inputY;

	private: System::Windows::Forms::TextBox^ inputX;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->btnDraw = (gcnew System::Windows::Forms::Button());
			this->btnColor = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->inputD = (gcnew System::Windows::Forms::TextBox());
			this->inputY = (gcnew System::Windows::Forms::TextBox());
			this->inputX = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnDraw
			// 
			this->btnDraw->Location = System::Drawing::Point(547, 348);
			this->btnDraw->Name = L"btnDraw";
			this->btnDraw->Size = System::Drawing::Size(100, 28);
			this->btnDraw->TabIndex = 3;
			this->btnDraw->Text = L"Draw";
			this->btnDraw->UseVisualStyleBackColor = true;
			this->btnDraw->Click += gcnew System::EventHandler(this, &MyForm::btnDraw_Click);
			// 
			// btnColor
			// 
			this->btnColor->Location = System::Drawing::Point(547, 408);
			this->btnColor->Name = L"btnColor";
			this->btnColor->Size = System::Drawing::Size(100, 28);
			this->btnColor->TabIndex = 5;
			this->btnColor->Text = L"Colour";
			this->btnColor->UseVisualStyleBackColor = true;
			this->btnColor->Click += gcnew System::EventHandler(this, &MyForm::btnColor_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 500);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// inputD
			// 
			this->inputD->Location = System::Drawing::Point(549, 277);
			this->inputD->Name = L"inputD";
			this->inputD->Size = System::Drawing::Size(100, 22);
			this->inputD->TabIndex = 8;
			this->inputD->Text = L"100";
			this->inputD->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::inputCheck_KeyPress);
			// 
			// inputY
			// 
			this->inputY->Location = System::Drawing::Point(547, 216);
			this->inputY->Name = L"inputY";
			this->inputY->Size = System::Drawing::Size(100, 22);
			this->inputY->TabIndex = 9;
			this->inputY->Text = L"155";
			this->inputY->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::inputCheck_KeyPress);
			// 
			// inputX
			// 
			this->inputX->Location = System::Drawing::Point(547, 154);
			this->inputX->Name = L"inputX";
			this->inputX->Size = System::Drawing::Size(100, 22);
			this->inputX->TabIndex = 10;
			this->inputX->Text = L"185";
			this->inputX->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::inputCheck_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(546, 258);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Input d";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(545, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 16);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Input y";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(546, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Input x";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(710, 530);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->inputX);
			this->Controls->Add(this->inputY);
			this->Controls->Add(this->inputD);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnColor);
			this->Controls->Add(this->btnDraw);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void btnDraw_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btnColor_Click(System::Object^ sender, System::EventArgs^ e);
		void Draw(float x, float y, float d, Color ccolor);
		System::Void inputCheck_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8)
				e->Handled = true;
		}
};
}
