# ##################################################################
#
# Makefile
# Author: Mauricio Matamoros
# License: MIT
#
# ##################################################################

CC       = gcc
CFLAGS   = -Wall -O0
SILENT   = @
PROGRAMS = Fibonacci
.PHONY: all clean $(PROGRAMS)

all: $(PROGRAMS)

$(PROGRAMS): %: %.c
	$(SILENT) $(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f *.o