#pragma once
#include "IScene.h"
#include "Player.h"

class StageScene :public IScene
{
public:
	void Initialize() override;
	void Updata() override;
	void Draw() override;
private:
	struct Enemy {
		Vector2 position;
		bool isAlive;
		float radius;
	};
	Enemy enemy;
	Player player;
};
