#include "GameManager.h"
#include <Novice.h>

GameManager::GameManager() {
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[STAGE] = std::make_unique<StageScene>();
	sceneArr_[CLEAR] = std::make_unique<ClearScene>();
}
GameManager::~GameManager() {

}

int GameManager::Run() {
	while (Novice::ProcessMessage() == 0) {
		Novice::BeginFrame();
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		preSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

		if (preSceneNo_ != currentSceneNo_) {
			sceneArr_[currentSceneNo_]->Initialize();
		}

		sceneArr_[currentSceneNo_]->Updata(keys,preKeys);
		sceneArr_[currentSceneNo_]->Draw();

		Novice::EndFrame();

		if (keys[DIK_ESCAPE] && !keys[DIK_ESCAPE]) {
			break;
		}
	}
	return 0;
}