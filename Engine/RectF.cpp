#include "RectF.h"

RectF::RectF(float left_in, float right_in, float top_in, float bottom_in)
	:
	left(left_in),
	right(right_in),
	top(top_in),
	bottom(bottom_in)
{
}

RectF::RectF(const Vec2& topLeft, const Vec2& bottomRight)
	:
	RectF(topLeft.x, bottomRight.x,topLeft.y,bottomRight.y)
{
}

RectF::RectF(const Vec2& topLeft, float width, float height)
	:
	RectF(topLeft,topLeft+Vec2(width,height))
{
}

bool RectF::IsOverlappingWidth(const RectF& other) const
{
	//충돌했음을 반환
	return 
		right>other.left&&
		left<other.right&&
		top<other.bottom&&
		bottom>other.top;
}

RectF RectF::FromCenter(const Vec2& center, float halfWidth, float halfHeight)
{
	const Vec2 half(halfWidth, halfHeight);
	return RectF(center - half, center + half); 
}
