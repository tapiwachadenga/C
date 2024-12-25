CC=gcc
EXE=charClassifier
WARNINGS=-Wall -Wextra -Werror

IDIR=../include
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR=../lib
LIBS=-lm

TARGET=../target

_DEPS=charCl.h
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ=charCl.o main.o
OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) $(WARNINGS)

$(EXE): $(OBJ)
	$(CC) -o $(TARGET)/$@ $^ $(CFLAGS) $(LIB) $(WARNINGS) 

.PHONY: clean

clean:
	rm -rf $(ODIR)/*.o $(TARGET)/* *~ core $(INCDIR)/*~ 

