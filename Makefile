DEFAULT_TARGET=chord
CC=gcc
LDFLAGS=-lm

OBJS=$(addsuffix .o, $(basename $(wildcard *.c)))

$(DEFAULT_TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

clean:
	rm -f $(OBJS) $(DEFAULT_TARGET)

print:
	echo $(OBJS)

.PHONY: clean print

