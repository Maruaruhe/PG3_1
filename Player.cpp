#include "Player.h"

Player::Player() {
	position = { 640,600 };
	radius = 15;
}

void Player::Initialize() {

}
void Player::Updata() {

}
void Player::Draw() {

}

void Player::MoveRight() {
	position.x += velocity.x;
}
void Player::MoveLeft() {
	position.x -= velocity.x;
}