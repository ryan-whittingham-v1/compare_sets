main: main.o to_set.o print_set.o 
	gcc -o main main.o to_set.o print_set.o
main.o: main.c PA1.h
	gcc -c main.c
to_set.o: to_set.c PA1.h
	gcc -c to_set.c
print_set.o: print_set.c PA1.h
	gcc -c print_set.c
clean: 
	rm main.o to_set.o print_set.o
