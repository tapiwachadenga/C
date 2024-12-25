CC=gcc
EXE=myArrayApp
WARNINGS=-g -Wall -Wextra -Werror
TARGET=target
SRC=src

IDIR=include
CFLAGS=-I$(IDIR)
LIBS=-lm

ODIR=target/obj

_DEPS=sum_of_subarrs.h
DEPS=$(patsubst %,$(IDIR)/%, $(_DEPS))

_OBJ=sum_of_subarrs.o app.o 
OBJ=$(patsubst %,$(ODIR)/%, $(_OBJ))

$(ODIR)/%.o: $(SRC)/%.c $(IDIR)
	$(CC) -c -o $@ $< $(CFLAGS) $(WARNINGS)

$(EXE): $(OBJ)
	$(CC) -o $(TARGET)/$@ $^ $(CFLAGS) $(WARNINGS)

.PHONY: clean
clean:
	clear
	-rm -rf $(ODIR)/* *~ core $(INCDIR)/*~ 
