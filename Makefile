main.o : main.c my_mat.h
	gcc -c -Wall main.c
my_mat.o : my_mat.c my_mat.h
	gcc -c -Wall my_mat.c
.PHONY : clean
clean:
	rm *.o *.a connections
libmy_mat.a : my_mat.o my_mat.h
	ar rcu libmy_mat.a my_mat.o
connections: main.o libmy_mat.a
	gcc -Wall main.o ./libmy_mat.a -o connections
all: connections 



