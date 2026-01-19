// Main file of the wordle

#include "header.h"

bool Game_on = true;
int main(void)
{
    intro();

    while(Game_on)
	{
	    word_select();
	    game();
	}
    return 0;
}
