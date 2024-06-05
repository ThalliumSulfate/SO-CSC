CC=g++ -std=c++14

ODIR=obj
IDIR=../include
LDIR=../lib

INCLUDES=-I$(IDIR) -I$(IDIR)/Races
LIBS=-L$(LDIR)
PKLIBS=sdl2 SDL2_image SDL2_ttf SDL2_mixer

CFLAGS=-Wall -Wl,-subsystem,console
PKLFLAGS:=$(shell pkg-config --libs $(PKLIBS))

EXEC=app

SRCS=main.c app.c perk.c perks.c race.c races.c character.c
_OBJS=$(SRCS:.c=.o)
OBJS=$(patsubst %,./$(ODIR)/%,$(_OBJS))

_DEPS=library.h app.h perk.h perks.h race.h races.h character.h
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBS)

$(ODIR)/%.o: %.cpp | obj
	$(CC) -o $@ $(INCLUDES) -c $<

$(ODIR):
	mkdir $@

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~