#pragma once
#include <vector>
#include "Card.h"


class CardDeck
{
	//int _cards_quantity;
	std::vector <Card*> _card_deck_vct;

public:
	Card* Get_Card()
	{
		return std::move(_card_deck_vct[0]);
	}

};

