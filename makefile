SRC = main.c intro_outro.c select_word.c
OBJ = main.o intro_outro.o select_word.o
PROG = wordle

$(PROG) : $(OBJ)
	gcc $(OBJ) -o $(PROG)


$(OBJ) : $(SRC)

