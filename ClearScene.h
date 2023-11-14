#pragma once
#include "IScene.h"

class ClearScene :public IScene
{
public:
	void Initialize() override;
	void Updata(char keys[256], char preKeys[256]) override;
	void Draw() override;
};
