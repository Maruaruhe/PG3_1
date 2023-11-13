#include "TitleScene.h"
#include <Novice.h>

void TitleScene::Initialize() {
	
}

void TitleScene::Updata() {
	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
		sceneNo = STAGE;
	}
}

void TitleScene::Draw() {
	Novice::DrawBox(0, 0, 2000, 1000, 0, BLUE, kFillModeSolid);
	Novice::ScreenPrintf(0, 0, "タイトル");
}