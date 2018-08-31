dict1: dict1.o
	gcc -o dict1 dict1.o

dict2: dict2.o
	gcc -o dict2 dict2.o

dict1.o: dict1.c dict1.h tree_logic.h
	gcc -c -g  -Wall dict1.c

dict2.o: dict2.c dict1.h tree_logic.h
	gcc -c -g -Wall dict2.c