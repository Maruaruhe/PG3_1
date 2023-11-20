#pragma once
#include <Vector2.h>
class Player
{
private:
	Vector2 position;
	float radius;
	Vector2 velocity;

public:
	Player();

	void Initialize();
	void Updata();
	void Draw();

	void MoveRight();
	void MoveLeft();

public:
};

