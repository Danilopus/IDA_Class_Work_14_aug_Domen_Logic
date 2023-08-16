#pragma once
#include "GameRules.h"
#include "Table.h"

enum class GameType {Fool, CG101};

class Game
{
	std::vector<Player*> _players_list;
	//std::set<Player*> _players_set;
	GameRules* _game_rules;
	int GameId;
	Table* _table_ptr;
	CardDeck* _card_deck_ptr = nullptr;

public: 

	void StartGame(GameType GameId, std::set<Player*> players_set)
	{
		_game_rules = GameRules::Get_Game_Rules(GameId);
		_table_ptr = new Table;
		//_players_set = players_set;
		_card_deck_ptr = Get_card_deck();
		Players_init();

	}
	void Players_init()
	{
		for (auto& el : _players_list)
			el->Take_card(_card_deck_ptr->Get_Card());
	}
	CardDeck* Get_card_deck()
	{
		return _game_rules->Get_card_deck();
	}
	void Make_Turn()
	{
		int current_active = 0;
		(current_active < _players_list.size()) ? current_active++ : 0;
		

		//Кладем на стол карту, которой игрок решил отбится
		_table_ptr->Put_Card_on_Table(_players_list[current_active]->Defend_begin(_table_ptr));
		
		
		//Если не бита
		_players_list[current_active]->Atack_begin(_table_ptr);	

		_players_list[current_active+1]->Defend_begin(_table_ptr);

		
		
		(current_active < _players_list.size()) ? current_active++ : 0;

	}
	// Окончание хода "Бита", когда либо ходить, либо бить уже не чем
	void Turn_Over()
	{
		_table_ptr->clear();
	}
};

