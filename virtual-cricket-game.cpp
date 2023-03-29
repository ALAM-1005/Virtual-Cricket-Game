//============================================================================
// Name        : virtual-Cricket_Game.cpp
// Author      : MD JUNED ALAM
// Version     :v1.0
// Copyright   : This code is free and can be used without prior notice.
// Description : This is a virtual cricket Game.
//============================================================================
#include "game.h"
using namespace std;


int main() {

	Game game;
	game.welcome();

	cout << "\nPress Enter to continue";
	getchar();

    game.showAllPlayers();

	cout << "\nPress Enter to continue";
	getchar();

	game.selectPlayers();
	game.showTeamPlayers();

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout << "\nPress Enter to toss";
    getchar();

    game.toss();
    game.startFirstInnings();
    game.startSecondInnings();
    game.showMatchSummary();

	return 0;
}
