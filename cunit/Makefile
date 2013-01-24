SRC= between_date_test.c
EXE= $(SRC:.c=)
CFLAGS= -Wall

$(EXE):$(SRC)
	$(CC) -o $(EXE) $(CFLAGS) -L/usr/local/lib -L../ -lbetween_date -lcunit -I../ $(SRC)

run:$(EXE)
	export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:../.:/usr/local/lib
	@echo ${LD_LIBRARY_PATH}
	./$(EXE)

clear:
	rm -f $(EXE) $(OBJ)
