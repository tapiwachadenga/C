CC=gcc
EXE=minmax
WARNINGS=-Wall -Wextra -Werror
TARGET=../target

IDIR=../include
CFLAGS=-I$(IDIR)
ODIR=obj
LDIR=../lib
LIBS=-lm

_DEPS=minmax.h
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ=minmax.o main.o
OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) $(WARNINGS)

$(EXE): $(OBJ)
	$(CC) -o $(TARGET)/$@ $^ $(CFLAGS) $(WARNINGS)

.PHONY: clean

clean:
	rm -rf $(ODIR)/* $(TARGET)/* *~ core $(INCDIR)/*~

