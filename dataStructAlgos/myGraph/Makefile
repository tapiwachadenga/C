CC=gcc
EXE=graph
WARNINGS=-g -Wall -Wextra -Werror
TARGET=target
CFILES=src/main/C

IDIR=include
CFLAGS=-I$(IDIR)

ODIR=src/obj

_DEPS=myGraph.h
DEPS=$(patsubst %, $(IDIR)/%, $(_DEPS))

_OBJ=App.o myGraph.o
OBJ=$(patsubst %,$(ODIR)/%, $(_OBJ))

$(ODIR)/%.o: $(CFILES)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) $(WARNINGS)

$(EXE): $(OBJ)
	$(CC) -o $(TARGET)/$@ $^ $(CFLAGS) $(WARNINGS)

.PHONY:clean

clean:
	rm -rf $(TARGET)/* $(OBJ)/* *~ core $(INCDIR)/ *~
