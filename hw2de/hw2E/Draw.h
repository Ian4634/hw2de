#include<iostream>

using namespace std;

double drawYellowBox(int upper, int left, int length, bool initialization_paint = false, int per_space_size = 2, int paint_size = 27);

class Draw{
    public:
        Draw(int y, int x, double len, int order);
        void drawBoxTrio(int y, int x, double len, int order);
        double get_area();
    private:
        double area;
};