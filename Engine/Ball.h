#pragma once

#include"Vec2.h"
#include"Graphics.h"

class Ball
{
public:
	Ball(const Vec2& pos_in, const Vec2& vel_in);
	void Draw(Graphics& gfx) const;
	void Update(float dt);
	bool DoWallCollision(const RectF& walls);
	void ReboundX();
	void ReboundY();
	RectF GetRect() const;
private:
	static constexpr float radius = 7.0f;
	Vec2 pos;
	Vec2 vel;
};