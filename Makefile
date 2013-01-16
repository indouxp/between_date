CC=gcc
SRCS=between_date.c between_date.h
SRC=between_date.c
LIB=libbetween_date.so

$(LIB):$(SRC)
	$(CC) -shared -o $(LIB) $(SRC)

clear:
	rm -f $(LIB) *.o
