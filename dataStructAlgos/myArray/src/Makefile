CC=gcc
EXE=myArrayApp
WARNINGS=-g -Wall -Wextra -Werror
TARGET=../target

IDIR=../include
CFLAGS=-I$(IDIR)
LIBS=-lm

ODIR=obj

_DEPS=myArray.h
DEPS=$(patsubst %,$(IDIR)/%, $(_DEPS))

_OBJ=myArray.o App.o
OBJ=$(patsubst %,$(ODIR)/%, $(_OBJ))

$(ODIR)/%.o: %.c $(IDIR)
	$(CC) -c -o $@ $< $(CFLAGS) $(WARNINGS)

$(EXE): $(OBJ)
	$(CC) -o $(TARGET)/$@ $^ $(CFLAGS) $(WARNINGS)

.PHONY: clean 
clean:
	-rm -rf $(ODIR)/* $(TARGET)/* *~ core $(INCDIR)/*~ 
