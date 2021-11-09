IDIR=../include
CC=gcc
CFLAGS=-I$(IDIR) -std=gnu11

ODIR=obj
LDIR=../lib

LIBS=

_DEPS=
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ=quiz.o quiz_rc.o refcount.o
OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

quiz: $(ODIR)/quiz.o $(ODIR)/refcount.o
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

quiz_rc: $(ODIR)/quiz_rc.o $(ODIR)/refcount.o
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
