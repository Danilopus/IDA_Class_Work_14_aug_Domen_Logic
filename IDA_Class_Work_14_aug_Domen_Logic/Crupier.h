#pragma once
#include <vector>
#include "CardDeck.h"
#include "Player.h"
#include "Game.h"


class Crupier
{
	CardDeck* _card_deck_ptr = nullptr;
public:
	void Make_your_turn(Player* player);
	void Start_Game_Session()
	{
		Game* new_game = new Game;
		new_game->StartGame(int game_id);

	}

	
};

