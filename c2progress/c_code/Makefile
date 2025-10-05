ALL_EXE = gen_percent

all: $(ALL_EXE) 

CC=gcc
CFLAGS=-I. -Wall

DEPS = Makefile

# $@ = target file name, $^ = all prerequisites, $< = first prerequisite

%: %.c $(DEPS)
	$(CC) -g -o $@ $< $(CFLAGS)

clean:
	rm -rf $(ALL_EXE) 
