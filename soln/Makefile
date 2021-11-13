IDIR=../include
CC=gcc
CFLAGS=-I$(IDIR) -std=gnu11 -Wall -Wextra

ODIR=obj
LDIR=../lib

LIBS=

_DEPS=
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ=lab8.o lab8_i.o lab8_ii.o lab8_iii.o lab8_iv.o lab8_v.o
OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

lab8_i: $(ODIR)/lab8.o $(ODIR)/lab8_i.o
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

lab8_ii: $(ODIR)/lab8.o $(ODIR)/lab8_ii.o
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

lab8_iii: $(ODIR)/lab8.o $(ODIR)/lab8_iii.o
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

lab8_iv: $(ODIR)/lab8.o $(ODIR)/lab8_iv.o
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

lab8_v: $(ODIR)/lab8.o $(ODIR)/lab8_v.o
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: all clean clean_all

all: lab8_i lab8_ii lab8_iii lab8_iv lab8_v

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~

clean_all: clean
	rm ./lab8_i ./lab8_ii ./lab8_iii ./lab8_iv ./lab8_v
