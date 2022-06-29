#include "Chess.h"


array<PointF>^ ChessBoard::countt(float x, float y, float d)
{
	array<PointF>^ pointsArr = { PointF(x, y), PointF(x + d / 2, y + d / 2), PointF(x, y + d), PointF(x - d / 2, y + d / 2) };

	return pointsArr;
}