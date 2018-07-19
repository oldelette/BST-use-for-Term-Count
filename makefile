all:main.o delet.o insert.o find.o inorder.o
	gcc main.o delet.o insert.o find.o inorder.o -o hw6
main.o:main.c
	gcc -c main.c
delet.o:delet.c	delet.h
	gcc -c delet.c
insert.o:insert.c	insert.h
	gcc -c insert.c
find.o:find.c	find.h
	gcc -c find.c
inorder.o:inorder.c	inorder.h
	gcc -c inorder.c
clean:
	rm *.o	hw6