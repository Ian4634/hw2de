main: main_E.o Draw.o draw_tux.o
	g++ main_E.o Draw.o draw_tux.o -o main_E.out
main_E.o: main_E.cpp
	g++ main_E.cpp -c -o main_E.o
Draw.o: Draw.cpp
	g++ Draw.cpp -c -o Draw.o

clean:
	rm main_E.o main_E.out Draw.o 