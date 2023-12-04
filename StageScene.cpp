#include "StageScene.h"
#include <Novice.h>

void StageScene::Initialize() {
	player_ = std::make_unique<Player>();
	enemy_ = std::make_unique<Enemy>();
	inputHandler_ = std::make_unique<InputHandler>();

	player_->Initialize();

	inputHandler_->AssignMoveLeftCommand2PlayerKeyA();
	inputHandler_->AssignMoveRightCommand2PlayerKeyD();
}

void StageScene::Updata() {
	command_ = inputHandler_->HandlerInput();

	if (this->command_) {
		command_->Exec(*player_);
	}
}

void StageScene::Draw() {
	player_->Draw();
}