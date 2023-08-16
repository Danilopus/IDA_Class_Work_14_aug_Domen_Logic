#pragma once
#include <vector>
#include "Card.h"


class Table
{
	std::vector <Card*> _table_cards;
public:
	void Show()
	{
		for (auto& el : _table_cards);
	}
	void Put_Card_on_Table(Card* card_to_table)
	{
		_table_cards.push_back(std::move(card_to_table));
	}
	void clear()
	{
		_table_cards.clear();
	}
};

