all: pm

pm: pm.c
	gcc -O0 -Wall -Wextra $< -o $@

run: pm
	./pm

clean:
	rm -f pm
