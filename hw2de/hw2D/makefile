main_D: main_D.o Node.o
	g++ -I . -g main_D.o Node.o -o main_D.out
main_D.o: main_D.cpp
	g++ -I . -g main_D.cpp -c -o main_D.o
Node.o: Node.cpp
	g++ -I . -g Node.cpp -c -o Node.o

clean:
	rm *.o *.out
