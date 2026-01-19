// Instance of a single game
#include "header.h"

// function to display in a wordle format
void display(char stage[])
{
    printf("\t\t\t\t\t");
    for (int i = 0; i < 5; i++)
	{
	    printf("%c ", stage[i]);
	}
    printf("\n");
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

// Main instance of game
int game()
{
    char stage[] = "_____";
    char guessed_word[6];
    bool valid_word = false;

    printf("\n\t\t\t***************GAME BEGINS******************\n\n");

    for (int i = 1; i <= 6; i++)
	{
	    display(stage);

	    // getting input from the user and checking if the word is valid or not
	    do {
		printf("Enter your word (%i): ", i);
		scanf("%s", guessed_word);
		lowercase(guessed_word);
		valid_word = check_word(guessed_word);
	    }while (!valid_word);
	    
	    display(guessed_word);
//	    change_stage(stage, guessed_word);
	}
    return 0;
}
