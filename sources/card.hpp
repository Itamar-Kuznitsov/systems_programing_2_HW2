#pragma once


class Card{
    public:
        // constructor:
        Card(int type);

        // public functions:
        int get_card_type();
        
        // destructor: 
        // ~Card();

    private:
        // type of card - represented by number between 1 to 13 
        int type;
};
