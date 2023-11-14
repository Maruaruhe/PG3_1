#pragma once
#include <memory>
#include "IScene.h"
#include "TitleScene.h"
#include "StageScene.h"
#include "ClearScene.h"

class GameManager
{
public:
	GameManager();
	~GameManager();

	int Run();
private:
	IScene* iScene;

	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	std::unique_ptr<IScene> sceneArr_[3];

	int currentSceneNo_;
	int preSceneNo_;
};

