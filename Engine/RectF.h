#pragma once

#include"Vec2.h"

class RectF
{
public:
	RectF() = default;
	RectF(float left_in, float right_in, float top_in, float bottom_in);
	RectF(const Vec2& topLeft, const Vec2& bottomRight);
	RectF(const Vec2& topLeft, float width, float height);
	//other의 대한 어떠한 값도 변경되어서는 안된다.
	bool IsOverlappingWidth(const RectF& other) const;
public:
	float left;
	float right;
	float top;
	float bottom;
};