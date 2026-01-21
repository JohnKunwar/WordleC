// Contains the ASCII art for Intro, Won and Loss Celeberation
#include "header.h"

void intro(void)
{
    printf("\n \
__        __            _ _                       ____          \n \
\\ \\      / /__  _ __ __| | | ___    ___  _ __    / ___|         \n \
 \\ \\ /\\ / / _ \\| '__/ _` | |/ _ \\  / _ \\| '_ \\  | |             \n \
  \\ V  V / (_) | | | (_| | |  __/ | (_) | | | | | |___          \n \
   \\_/\\_/ \\___/|_|  \\__,_|_|\\___|  \\___/|_| |_|  \\____|         \n \
=======================================================================\n\n\n");

    printf("SYMBOLS:\n \t"GREEN" * -> Your guessed is correct in that position \n \
\t"YELLOW" # -> Your guessed is correct but wrong position \n \
\t"RED" _ -> Your guessed is incorrect\n" COLOR_RESET );

}

void won_celeberation()
{
    printf(GREEN "\n \
__   _____  _   _  __        _____  _   _  \n \
\\ \\ / / _ \\| | | | \\ \\      / / _ \\| \\ | | \n \
 \\ V / | | | | | |  \\ \\ /\\ / / | | |  \\| | \n \
  | || |_| | |_| |   \\ V  V /| |_| | |\\  | \n \
  |_| \\___/ \\___/     \\_/\\_/  \\___/|_| \\_| \n\n" COLOR_RESET);
}

void loss_celeberation()
{
    printf(RED "\
 __   _____  _   _   _     ___  ____  _____    \n \
\\ \\ / / _ \\| | | | | |   / _ \\/ ___|| ____|   \n \
 \\ V / | | | | | | | |  | | | \\___ \\|  _|     \n \
  | || |_| | |_| | | |__| |_| |___) | |___    \n \
  |_| \\___/ \\___/  |_____\\___/|____/|_____| \n\n" COLOR_RESET);
}


