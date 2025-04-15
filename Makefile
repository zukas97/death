LIBS= -lraylib -lm -lpthread -ldl -lrt -lX11
CFLAGS= -ggdb
SRC= $(wildcard ./src/*.c)

build:
	gcc $(SRC) $(LIBS) $(CFLAGS) -o death
	
