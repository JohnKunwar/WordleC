SRC = main.c intro_outro.c
OBJ = main.o intro_outro.o
PROG = wordle

$(PROG) : $(OBJ)
	gcc $(OBJ) -o $(PROG)


$(OBJ) : $(SRC)

