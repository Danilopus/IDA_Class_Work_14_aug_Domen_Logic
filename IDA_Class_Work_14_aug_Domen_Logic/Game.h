#pragma once
#include "GameRules.h"

enum class GameType {Fool, CG101};

class Game
{
	//std::vector<Player*> _players_list;
	std::set<Player*> _players_set
	GameRules* _game_rules;
	int GameId;

public: 

	void StartGame(int GameId, std::set<Player*> players_set)
	{
		_game_rules = GameRules::Get_Game_Rules(GameId);
		_players_set = players_set;

	}
	CardDeck* Get_card_deck()
	{
		return _game_rules->Get_card_deck();
	}
	void Make_Turn()
	{

	}
};

