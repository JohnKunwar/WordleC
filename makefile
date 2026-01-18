SRC = main.c intro_outro.c select_word.c game.c
OBJ = main.o intro_outro.o select_word.o game.o
PROG = wordle

$(PROG) : $(OBJ)
	gcc $(OBJ) -o $(PROG)


$(OBJ) : $(SRC)

