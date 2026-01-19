// Main file of the wordle

#include "header.h"

bool Game_on = true;
int main(void)
{
    intro();
    int play_again;
    while(Game_on)
	{
	    word_select();
	    game();

	    printf("\nPress 1 to quit and press any number to play: ");
	    scanf("%i", &play_again);

	    if( play_again == 1)
		Game_on = false;
	}
    return 0;
}
