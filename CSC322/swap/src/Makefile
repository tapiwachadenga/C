CC=gcc
EXE=swap
WARNINGS=-Wall -Wextra -Werror

IDIR=../include
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR=../lib
LIBS=-lm

TARGET=../target

_DEPS = swap.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = swap.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) $(WARNINGS)

$(EXE): $(OBJ)
	$(CC) -o $(TARGET)/$@ $^ $(CFLAGS) $(LIB) $(WARNINGS)

.PHONY: clean

clean: 
	rm -rf $(ODIR)/* $(TARGET)/* *~ core $(INCDIR)/*~
