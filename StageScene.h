#pragma once
#include "IScene.h"
#include "Player.h"
#include "InputHandler.h"
#include <memory>

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

	std::unique_ptr<Enemy> enemy_;
	std::unique_ptr<Player> player_;
	std::unique_ptr<InputHandler> inputHandler_;

	ICommand* command_;
};
