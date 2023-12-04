#pragma once
#include "Command.h"

class InputHandler
{
public:
	ICommand* HandlerInput();

	void AssignMoveLeftCommand2PlayerKeyA();
	void AssignMoveRightCommand2PlayerKeyD();

private:
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;
};

