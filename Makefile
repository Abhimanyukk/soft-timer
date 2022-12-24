CC = gcc
INC = -I ./soft_timer/
EXE = bin

SOURCES = $(shell find $(SOURCEDIR) -name '*.c')


all:
	@ $(CC) -o $(EXE) $(SOURCES) $(INC)

clean:
	@ rm -f $(EXE)
