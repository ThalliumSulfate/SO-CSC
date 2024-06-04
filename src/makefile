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

SRCS=main.c human.c perk.c race.c perks.c
_OBJS=$(SRCS:.c=.o)
OBJS=$(patsubst %,./$(ODIR)/%,$(_OBJS))

_DEPS=library.h human.h race.h perk.h races.h perks.h
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