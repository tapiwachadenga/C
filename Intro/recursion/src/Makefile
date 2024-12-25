IDIR=../include
CC=gcc
CFLAGS=-I$(IDIR)
WARNINGS=-Wall -Wextra -Werror
EXE=recursion

ODIR = obj
LDIR = ../lib

LIBS=-lm

TARGET = ../target

_DEPS = recursion.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = factorial.o fibonacci.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS) 
	$(CC) -c -o $@ $< $(CFLAGS) $(WARNINGS)

$(EXE): $(OBJ)
	$(CC) -o $(TARGET)/$@ $^ $(CFLAGS) $(LIB) $(WARNINGS)

.PHONY: clean

clean: 
	rm -f $(ODIR)/*.o $(TARGET)/* *~ core $(INCDIR)/*~
