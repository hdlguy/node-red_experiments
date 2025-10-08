ALL_EXE = json_gen

all: $(ALL_EXE) 

CC=gcc
CFLAGS= -Wall

DEPS = Makefile

# $@ = target file name, $^ = all prerequisites, $< = first prerequisite

%: %.c $(DEPS)
	$(CC) -o $@ $< -lm -Wall
#	$(CC) -lm -o $@ $< $(CFLAGS)

clean:
	rm -rf $(ALL_EXE) 


