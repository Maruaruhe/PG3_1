#pragma once
#include <Input.h>

enum SCENE {
	TITLE,
	STAGE,
	CLEAR
};
class IScene
{
protected:
	static int sceneNo;

	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

public:

	virtual void Initialize() = 0;
	virtual void Updata() = 0;
	virtual void Draw() = 0;

	virtual ~IScene();

	int GetSceneNo() { return sceneNo; }
};

