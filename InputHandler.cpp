#include "InputHandler.h"
#include "Novice.h"

void InputHandler::AssignMoveLeftCommand2PlayerKeyA() {
	ICommand* command = new MoveLeftCommand();
	this->pressKeyA_ = command;
}

void InputHandler::AssignMoveRightCommand2PlayerKeyD() {
	ICommand* command = new MoveRightCommand();
	this->pressKeyD_ = command;
}

ICommand* InputHandler::HandlerInput() {
	if (Novice::CheckHitKey(DIK_D)) {
		return pressKeyD_;
	}
	else if (Novice::CheckHitKey(DIK_A)) {
		return pressKeyA_;
	}
	return nullptr;
}
