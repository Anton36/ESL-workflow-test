
program: main.o module.o
	gcc -o program main.o module.o

main.o: main.c
	gcc -c main.c

module.o: vector3d.c vector3d.h
	gcc -c vector3d.c

clean:
	rm -f main.o module.o program


.PHONY: clean