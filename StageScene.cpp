#include "StageScene.h"
#include <Novice.h>

void StageScene::Initialize() {
	enemy.position = { 640,200 };
	enemy.radius = 25;
	enemy.isAlive = true;

	player.Initialize();
}

void StageScene::Updata() {
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);
	
	player.Updata();
}

void StageScene::Draw() {
	if (enemy.isAlive) {
		Novice::DrawEllipse(int(enemy.position.x), int(enemy.position.y), int(enemy.radius), int(enemy.radius), 0.0f, RED, kFillModeSolid);
	}
	player.Draw();
}