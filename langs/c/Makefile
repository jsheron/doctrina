CC:=gcc
CFLAGS:=-g -std=c99 -Werror -Wall -Wextra -Wpedantic -O3
SRD=src
SRC:= $(wildcard $(SRD)/*.c)
BLD=build

all: $(SRC:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -o $(subst $(SRD),$(BLD),$(patsubst %.o,%,$@)) $^

clean: 
	rm $(BLD)/*
