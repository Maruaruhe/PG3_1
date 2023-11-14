#include "StageScene.h"

void StageScene::Initialize() {
	enemy.position = { 640,200 };
	enemy.radius = 25;
	enemy.isAlive = true;

	player.position = { 640,600 };
	player.radius = 15;

	bullet.position = { 0,0 };
	bullet.radius = 10;
	bullet.isShot = false;
}

void StageScene::Updata(char keys[256], char preKeys[256]) {
	if (keys[DIK_A]) {
		player.position.x -= 3;
	}
	if (keys[DIK_D]) {
		player.position.x += 3;
	}

	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE] && !bullet.isShot) {
		bullet.isShot = true;
		bullet.position = player.position;
	}

	if (bullet.isShot) {
		bullet.position.y -= 5;
		Vector2 distance;
		distance.x = bullet.position.x - enemy.position.x;
		distance.y = bullet.position.y - enemy.position.y;
		if (distance.x * distance.x + distance.y * distance.y <= (bullet.radius + enemy.radius) * (bullet.radius + enemy.radius)) {
			bullet.isShot = false;
			enemy.isAlive = false;

			sceneNo = CLEAR;
		}
		if (bullet.position.y <= 0 - bullet.radius) {
			bullet.isShot = false;
		}
	}
}

void StageScene::Draw() {
	Novice::ScreenPrintf(0, 0, "isAlive = %d", bullet.isShot);
	if (enemy.isAlive) {
		Novice::DrawEllipse(int(enemy.position.x), int(enemy.position.y), int(enemy.radius), int(enemy.radius), 0.0f, RED, kFillModeSolid);
	}
	Novice::DrawEllipse(int(player.position.x), int(player.position.y), int(player.radius), int(player.radius), 0.0f, BLUE, kFillModeSolid);
	if (bullet.isShot) {
		Novice::DrawEllipse(int(bullet.position.x), int(bullet.position.y), int(bullet.radius), int(bullet.radius), 0.0f, GREEN, kFillModeSolid);
	}
}