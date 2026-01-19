// Includes the function to select a word randomly from the word_list file
#include "header.h"

char WORD[5] = "sport";

int give_index()
{
    FILE *f;
    int total_words = 0;
    int index;
    
    // Opening a file
    if ((f = fopen("word_list.txt", "r")) == NULL)
	{
	    fprintf(stderr, "Can't open file\n");
	    exit(1);
	}

    // counting total words contain in a file
    while(fscanf(f,"%s", WORD) != EOF)
	total_words++;


    // Random number generator and index
    srand(time(NULL));
    index = (rand() % total_words) + 1;
    fclose(f);
    
    return index;
}

void word_select()
{
    FILE *f;
    int total_words = 0;
    int index = give_index();
    
    // Opening a file
    if ((f = fopen("word_list.txt", "r")) == NULL)
	{
	    fprintf(stderr, "Can't open file\n");
	    exit(1);
	}


    for(; index != 0; index--)
	{
	    if(fscanf(f,"%s", WORD) == EOF)
		{
		    fprintf(stderr, "Reading a word can't be completed\n");
		    exit(2);
		}
	}
    fclose(f);
}
