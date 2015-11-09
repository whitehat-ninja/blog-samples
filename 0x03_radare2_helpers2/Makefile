#############################################################################
# Autor:   white-hat.ninja
# Data:    2015-11-09
# Licencja: Zawarta w osobnym pliku.
# Desc:	   Kompilowanie przykladowych programow w C na potrzeby
#          bloga white-hat.ninja. Dodaje naglowki/symbole ulatwiajace
#	   analize oraz zdejmuje zabepieczenia kompilatora/os (NX,
#          stack canaries).
#############################################################################

LIBS = -lm
CFLAGS = -Wall -m32 -fno-stack-protector -mpreferred-stack-boundary=2 -ggdb -gstabs+
CC = gcc

SRCS = $(wildcard *.c)
PROGS = $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

%: %.c
	@$(CC) $(CFLAGS)  -o $@ $<
	@execstack -s $@
