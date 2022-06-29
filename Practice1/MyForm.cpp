#include "MyForm.h"
#include "Chess.h"
#include <iostream>

using namespace Practice1;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ChessBoard counter;


[STAThread]
int main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Practice1::MyForm form; 
    Application::Run(%form);
    
    return 0;
}

System::Void Practice1::MyForm::btnDraw_Click(System::Object^ sender, System::EventArgs^ e) {
    
    counter.x = Convert::ToSingle(inputX->Text);
    counter.y = Convert::ToSingle(inputY->Text);
    counter.d = Convert::ToSingle(inputD->Text);

    if (counter.color_argb == NULL){
        counter.color_argb = Color::Gray.ToArgb();
    }

    Color ccolour = Color::FromArgb(counter.color_argb);

    Draw(counter.x, counter.y, counter.d, ccolour);
}

void Practice1::MyForm::Draw(float x, float y, float d, Color ccolor_c) {

    pictureBox1->Refresh();
   
    Graphics^ g = pictureBox1->CreateGraphics();

    SolidBrush^ fillBrush = gcnew SolidBrush(ccolor_c);

    array<PointF>^ curvePoints = counter.countt(x, y, d); // Center
    array<PointF>^ curvePoints2 = counter.countt(x, y - d, d); // Top
    array<PointF>^ curvePoints3 = counter.countt(x + d, y, d); // Right
    array<PointF>^ curvePoints4 = counter.countt(x, y + d, d); // Bottom
    array<PointF>^ curvePoints5 = counter.countt(x - d, y, d); // Left

    //x = x - d;
    //array<PointF>^ curvePoints6 = counter.countt(x, y, d); // Center
    //array<PointF>^ curvePoints7 = counter.countt(x, y - d, d); // Top
    //array<PointF>^ curvePoints8 = counter.countt(x + d, y, d); // Right
    //array<PointF>^ curvePoints9 = counter.countt(x, y + d, d); // Bottom
    //array<PointF>^ curvePoints10 = counter.countt(x - d, y, d); // Left
  
    g->FillPolygon(fillBrush, curvePoints);

    g->FillPolygon(fillBrush, curvePoints2);

    g->FillPolygon(fillBrush, curvePoints3);

    g->FillPolygon(fillBrush, curvePoints4);

    g->FillPolygon(fillBrush, curvePoints5);

    //g->FillPolygon(fillBrush, curvePoints6);
    //g->FillPolygon(fillBrush, curvePoints7);
    //g->FillPolygon(fillBrush, curvePoints8);
    //g->FillPolygon(fillBrush, curvePoints9);
    //g->FillPolygon(fillBrush, curvePoints10);
}

System::Void Practice1::MyForm::btnColor_Click(System::Object^ sender, System::EventArgs^ e) {
    ColorDialog^ MyDialog = gcnew ColorDialog;
 
    MyDialog->AllowFullOpen = false;

    MyDialog->ShowHelp = true;

    counter.color_argb = Color::Gray.ToArgb();
    if (MyDialog->ShowDialog() == ::System::Windows::Forms::DialogResult::OK){
        counter.color_argb = MyDialog->Color.ToArgb();
    }
    else {
        counter.color_argb = Color::Gray.ToArgb();
    }
    
    Color ccolour = Color::FromArgb(counter.color_argb);
    Draw(counter.x, counter.y, counter.d, ccolour);
}