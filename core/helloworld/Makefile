CC=gcc
OBJ=main.o
BIN=helloworld

run: main
	./$(BIN)

main: $(OBJ)
	$(CC) $(OBJ) -o $(BIN)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm $(BIN) $(OBJ)
