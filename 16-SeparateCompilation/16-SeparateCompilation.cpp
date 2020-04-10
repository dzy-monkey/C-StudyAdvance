/*
分离式编译
*/
#include <iostream>
#include "Test.h"

int main() {

	Game gameUser = { "测试",2.2f };
	printGameName(gameUser.gameName, gameUser.gameScore);
}



