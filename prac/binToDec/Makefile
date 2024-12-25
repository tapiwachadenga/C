CC=gcc
EXE=myArrayApp
WARNINGS=-g -Wall -Wextra -Werror
TARGET=target
SRC=src

IDIR=include
CFLAGS=-I$(IDIR)
LIBS=-lm

ODIR=target/obj

_DEPS=binary.h
DEPS=$(patsubst %,$(IDIR)/%, $(_DEPS))

_OBJ=binary.o app.o
OBJ=$(patsubst %,$(ODIR)/%, $(_OBJ))

$(ODIR)/%.o: $(SRC)/%.c $(IDIR)
	$(CC) -c -o $@ $< $(CFLAGS) $(WARNINGS)

$(EXE): $(OBJ)
	$(CC) -o $(TARGET)/$@ $^ $(CFLAGS) $(WARNINGS) -lm

.PHONY: clean 
clean:
	-rm -rf $(ODIR)/* *~ core $(INCDIR)/*~ 
