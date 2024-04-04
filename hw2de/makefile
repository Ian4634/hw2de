all: main_D main_E

main_D: ./hw2D/main_D.o ./hw2D/Node.o
	g++ -I ./hw2D/ -g ./hw2D/main_D.o ./hw2D/Node.o -o ./hw2D/main_D.out
./hw2D/main_D.o: ./hw2D/main_D.cpp
	g++ -I ./hw2D -g ./hw2D/main_D.cpp -c -o ./hw2D/main_D.o
./hw2D/Node.o: ./hw2D/Node.cpp
	g++ -I ./hw2D/ -g ./hw2D/Node.cpp -c -o ./hw2D/Node.o

main_E: ./hw2E/main_E.o ./hw2E/Draw.o ./hw2E/draw_tux.o
	g++ ./hw2E/main_E.o ./hw2E/Draw.o ./hw2E/draw_tux.o -o ./hw2E/main_E.out
./hw2E/main_E.o: ./hw2E/main_E.cpp
	g++ ./hw2E/main_E.cpp -c -o ./hw2E/main_E.o
./hw2E/Draw.o: ./hw2E/Draw.cpp
	g++ ./hw2E/Draw.cpp -c -o ./hw2E/Draw.o

clean:
	rm ./hw2D/main_D.o ./hw2D/Node.o ./hw2E/main_E.o ./hw2E/Draw.o ./hw2D/main_D.out ./hw2E/main_E.out
