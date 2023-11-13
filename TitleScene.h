#pragma once
#include "IScene.h"

class TitleScene :public IScene
{
public:
	void Initialize() override;
	void Updata() override;
	void Draw() override;
};

