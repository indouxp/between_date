CC=gcc
SRCS=between_date.c between_date.h
SRC=between_date.c
LIB=libbetween_date.so
CFLAGS= -shared -fPIC

$(LIB):$(SRCS)
	$(CC) $(CFLAGS) -o $(LIB) $(SRC)

clear:
	rm -f $(LIB) *.o
