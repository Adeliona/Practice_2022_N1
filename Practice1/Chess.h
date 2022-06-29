#pragma once

using namespace System::Drawing;

class ChessBoard {
public: 
	float x; // coordinate of start point
	float y; // coordinate of start point
	float d; // diagonal of square
	int color_argb;
	array<PointF>^ countt(float x, float y, float d);

};