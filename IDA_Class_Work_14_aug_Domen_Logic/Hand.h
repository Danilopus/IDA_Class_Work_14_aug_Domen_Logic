#pragma once
#include <vector>
#include "Card.h"

class Hand
{
	std::vector <Card*> _cards_on_hand;
public:
	Card* Get_card();
	
	void Put_card(Card* _new_card)
	{
		_cards_on_hand.push_back(std::move(_new_card));
	}
};

