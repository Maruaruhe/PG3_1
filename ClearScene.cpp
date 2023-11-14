#include "ClearScene.h"


void ClearScene::Initialize() {

}
void ClearScene::Updata(char keys[256], char preKeys[256]) {
	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
		sceneNo = TITLE;
	}
}
void ClearScene::Draw() {
	Novice::DrawBox(0, 0, 2000, 1000, 0, BLACK, kFillModeSolid);
	Novice::ScreenPrintf(0, 0, "CLEAR PUSH SPACE");
}