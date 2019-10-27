all: main.o linkedList.o
	gcc -o listTest main.o linkedList.o

main.o: linkedList.c linkedList.h
	gcc -c main.c

linkedList.o: linkedList.c linkedList.h
	gcc -c linkedList.c

run:
	./listTest

clean:
	rm *.o
	rm listTest
