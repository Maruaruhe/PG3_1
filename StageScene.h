#pragma once
#include "IScene.h"

class StageScene :public IScene
{
public:
	void Initialize() override;
	void Updata(char keys[256], char preKeys[256]) override;
	void Draw() override;
private:
	struct Enemy {
		Vector2 position;
		bool isAlive;
		float radius;
	};
	struct Player {
		Vector2 position;
		float radius;
	};
	struct Bullet {
		Vector2 position;
		bool isShot;
		float radius;
	};
	Enemy enemy;
	Player player;
	Bullet bullet;
};
