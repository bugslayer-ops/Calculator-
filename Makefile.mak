CC     = gcc
RM     = rm -f
OBJS   = main.o

LIBS   =
CFLAGS =

.PHONY: bin/Release/Calculator.exe clean clean-after

all: bin/Release/Calculator.exe

clean:
	$(RM) $(OBJS) bin/Release/Calculator.exe

clean-after:
	$(RM) $(OBJS)

bin/Release/Calculator.exe: $(OBJS)
	$(CC) -O2 -s -Wall -o $@ $(OBJS) $(LIBS)

main.o: main.c menu.h
	$(CC) -O2 -s -Wall -c $< -o $@ $(CFLAGS)

