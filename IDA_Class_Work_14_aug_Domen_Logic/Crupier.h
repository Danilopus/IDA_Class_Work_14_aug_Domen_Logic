#pragma once
#include <vector>
#include "CardDeck.h"
#include "Player.h"
#include "Game.h"


class Crupier
{
	//CardDeck* _card_deck_ptr = nullptr;
public:
	void Make_your_turn(Player* player);
	void Start_Game_Session(GameType _game_type, std::set<Player*> players_set)
	{
		Game* new_game = new Game;

		// �������� ������� ���� � ��������� ��������� ����
		new_game->StartGame(_game_type, players_set);

		// 
		
		
		//
		bool winning_conditions;
		while (winning_conditions)
		{
		new_game->Make_Turn();
		}
	}
	
};

