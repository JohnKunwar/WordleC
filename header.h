#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>


// variable
extern char WORD[5];
extern bool Game_on;
// function
void intro(void);
void won_celeberation();
void loss_celeberation();
void  word_select();
int game();
