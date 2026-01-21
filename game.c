// Instance of a single game
#include "header.h"


int color_select[5] = {0, 0, 0, 0, 0}; // 0 means red 1 means green and 2 means yellow
// function to display in a wordle format
void display(char stage[])
{
    printf("\t\t\t\t\t");
    for (int i = 0; i < 5; i++)
	{
	    if (color_select[i] == 0)
		printf(RED);
	    else if (color_select[i] == 1)
		printf(GREEN);
	    else
		printf(YELLOW);
	    
	    printf("%c ", stage[i]);
	}
    printf(COLOR_RESET"\n");
}

// valid vord check function
bool check_word(char word[6])
{
    FILE *f;
    char buffer[6];
        
    // Opening a file
    if ((f = fopen("word_list.txt", "r")) == NULL)
	{
	    fprintf(stderr, "Can't open file\n");
	    exit(1);
	}

    // checking the word if it is in the word_text
    while(fscanf(f, "%s", buffer) != EOF)
	{
	    if (strcmp(buffer, word) == 0)
		{
		    fclose(f);
		    return true;		    
		}

	}
    fclose(f);
    return false;
}

// function to lowercase the word
void lowercase(char word[])
{
    for(int i = 0; i < 6; i++)
	{
	    if(word[i] > 'A' && word[i] < 'Z')
		{
		    int t = word[i] -'A';
		    word[i] = 'a' + t;
		}
	}
}

// change the game stage
void change_stage(char stage[], char guess_word[])
{
    int i, j;
    int count_letter[5] = {0};
    for (i = 0; i < 5; i++)
	{
	    if (guess_word[i] == WORD[i])
		{
		    stage[i] = '*';
		    color_select[i] = 1;
		}
	}

    for (i = 0; i < 5; i++)
	{
	    if (stage[i] != '*')
		{
		    for(j = 0; j < 5; j++)
			{
			    if (stage[j] == '*')
				continue;
			    if (guess_word[i] == WORD[j] && count_letter[j] == 0)
				{
				    count_letter[j] = 1;
				    stage[i] = '#';
				    color_select[i] = 2;
				}
			    
			}
		}
	}
}

// Main instance of game
int game()
{

    char guessed_word[6];
    bool valid_word = false;
    char win_stage[] = "*****";
    bool won = false;

    printf("\n\t\t\t***************GAME BEGINS******************\n\n");
    
    for (int i = 1; i <= 6; i++)
	{
	    
	    char stage[] = "_____";   // reseting format string
	    // reseting colour_select
	    for(int j = 0; j < 5; j++)
		color_select[j] = 0;
	    
	   // getting input from the user and checking if the word is valid or not
	    do {
		printf("Enter your word (%i): ", i);
		scanf("%s", guessed_word);
		lowercase(guessed_word);
		valid_word = check_word(guessed_word);
	    }while (!valid_word);
	    change_stage(stage, guessed_word); // function to change the stage #, *, _
	    display(guessed_word);	    
	    display(stage);
	    
	    if (strcmp(stage, win_stage) == 0)
		{
		    printf("\n\nYour guess was correct the word was %s\n", WORD);
		    won_celeberation();
		    won = true;
		    break;
		}
	}
    
    if (won == false)
	{
	    	loss_celeberation();
		printf("\n\n The correct word was  %s\n", WORD);
	}

    
    return 0;
}
