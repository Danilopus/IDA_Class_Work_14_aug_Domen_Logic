#pragma once
#include <string>
#include "Hand.h"

class Player
{
	Hand* _hand_ptr;
	std::string _uniq_name;
public:

	Card* Defend_begin(Table* table_ptr)
	{
		//Возвращает карту из руки, которой лучше всего отбится, либо nullptr - тогда берем
		return Defend_tactic(table_ptr);
	}
	Card* Defend_tactic(Table* table_ptr);
	
	Card* Atack_begin(Table* table_ptr)
	{
		return Atack_tactic(table_ptr);
	}
	Card* Atack_tactic(Table* table_ptr);


	void Defend_continue();
	void Atack_continue();

	void Take_card(Card* _new_card)
	{
		_hand_ptr->Put_card(_new_card);
	}
	
	void Make_Turn()
	{
		//Ход начинается с отбоя пришедшего
		Beat_cards();

		//Затем определяем лучший текущий ход
		Turn_first();



	}
	
};

