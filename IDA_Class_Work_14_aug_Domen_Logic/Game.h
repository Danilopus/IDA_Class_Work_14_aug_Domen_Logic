#pragma once
#include "GameRules.h"


class Game
{
	std::vector<Player*> _players_stack;
	GameRules* _game_rules;
	int GameId;

public: 

	void StartGame(int GameId);
};

