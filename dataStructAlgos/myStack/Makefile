CC=gcc
EXE=stack
WARNINGS=-g -Wall -Wextra -Werror
TARGET=target
CFILES=src/main/C

IDIR=include
CFLAGS=-I$(IDIR)

ODIR=src/obj

_DEPS=myStack.h
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ=myStack.o App.o
OBJ=$(patsubst %,$(ODIR)/%, $(_OBJ))

$(ODIR)/%.o: $(CFILES)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) $(WARNINGS)

$(EXE): $(OBJ)
	$(CC) -o $(TARGET)/$@ $^ $(CFLAGS) $(WARNINGS)

.PHONY: clean

clean:
	rm -rf $(TARGET)/* $(ODIR)/* *~ core $(INCDIR)/*~

