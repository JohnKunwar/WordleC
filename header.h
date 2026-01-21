#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>


// Define ANSI color codes as macros
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define COLOR_RESET   "\033[0m"

// variable
extern char WORD[5];
extern bool Game_on;
// function
void intro(void);
void won_celeberation();
void loss_celeberation();
void  word_select();
int game();
