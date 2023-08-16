#pragma once

class GameRules
{
	int const MAX_CARD_IN_HAND;
	enum class DeckType { cards_36, cards_52, cards_54_w_Jockers} _deck_type;

public:
	static GameRules* Get_Game_Rules(int GameID)
	{
		switch (GameID)

			GameRules* temp_ptr = new Fool;
			
			GameRules* temp_ptr = new CG101;


		return temp_ptr;
	}
	CardDeck* Get_card_deck()
	{
		return new CardDeck(_deck_type);
	}

};

