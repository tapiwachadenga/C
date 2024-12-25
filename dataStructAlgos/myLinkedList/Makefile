CC=gcc
EXE=myLinkedListApp
WARNINGS=-g -Wall -Wextra -Werror
TARGET=target
CFILES=src/main/C

IDIR=include
CFLAGS=-I$(IDIR)
LIBS=-lm

ODIR=src/obj

_DEPS=myLinkedList.h
DEPS=$(patsubst %,$(IDIR)/%, $(_DEPS))

_OBJ=myLinkedList.o App.o
OBJ=$(patsubst %,$(ODIR)/%, $(_OBJ))

$(ODIR)/%.o: $(CFILES)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) $(WARNINGS)

$(EXE): $(OBJ)
	$(CC) -o $(TARGET)/$@ $^ $(CFLAGS) $(WARNINGS)

.PHONY: clean

clean:
	rm -rf $(ODIR)/* $(TARGET)/* *~ core $(INCDIR)/*~
