all : main.out
main.out : main.o func.o
	gcc ../objects/main.o ../objects/func.o -o main.out

main.o : main.c
	gcc -c main.c -o ../objects/main.o

func.o : func.c
	gcc -c func.c -o ../objects/func.o
