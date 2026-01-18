# Game Info
Wordle is a word-guessing game. Where the player has to guess the 5 letter word within 6 tries.
Every time a player guessed a word. They are provided by the feedback of whether the letter is in
correct position, whether it exist on the word or whether it doesn't exist in the word. It is a
web-based game so, feedback is provided by changing tile-colour.
[[https://www.nytimes.com/games/wordle/index.html][wordle_official]]


# Game-design

 First the game provided with 5 dashes: |-|-|-|-|-|
 wait for the user to input the valid words: sport
 Then program should display the word:
                 S P O R T
		 * # * # - 
		   where '*' indicates it is correct possition '-' indicates letter doesn't exist in the word
		   and '#" indicates wrong placement.

for e.g

__        __            _ _                       ____ 
\ \      / /__  _ __ __| | | ___    ___  _ __    / ___|
 \ \ /\ / / _ \| '__/ _` | |/ _ \  / _ \| '_ \  | |    
  \ V  V / (_) | | | (_| | |  __/ | (_) | | | | | |___ 
   \_/\_/ \___/|_|  \__,_|_|\___|  \___/|_| |_|  \____|

----------------------------------------------------------

Symbols:
# - indicates BLANKS or GREY block
# * indicates GREEN block
# # indicates YELLOW block

Game begins:

                                  -----
				    
Enter your word:                  WOULD
Feed back:                        -#---

Enter Your word:                  ROKET
Feed back:                        ##--*

Enter Your word:                  BROOM
feed back:                        -#*--

Enter Your word:                  SPORT
feed back:                        *****

__   _____  _   _  __        _____  _   _  
\ \ / / _ \| | | | \ \      / / _ \| \ | | 
 \ V / | | | | | |  \ \ /\ / / | | |  \| | 
  | || |_| | |_| |   \ V  V /| |_| | |\  | 
  |_| \___/ \___/     \_/\_/  \___/|_| \_| 



__   _____  _   _   _     ___  ____  _____  
\ \ / / _ \| | | | | |   / _ \/ ___|| ____| 
 \ V / | | | | | | | |  | | | \___ \|  _|   
  | || |_| | |_| | | |__| |_| |___) | |___  
  |_| \___/ \___/  |_____\___/|____/|_____| 

Letter was ->                SPORT

play-again yes/no:                Y/N
