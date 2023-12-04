#include "Player.h"
#include "Novice.h"

Player::Player() {

}

void Player::Initialize() {
	position = { 640,600 };
	radius = 15;
	velocity = { 5,5 };
}
void Player::Updata() {

}
void Player::Draw() {
	Novice::DrawEllipse(int(position.x), int(position.y), int(radius), int(radius), 0.0f, BLUE, kFillModeSolid);
}

void Player::MoveRight() {
	position.x += velocity.x;
}
void Player::MoveLeft() {
	position.x -= velocity.x;
}