#include "Draw.h"

int main(){
    Draw graph1(0,0,27, 3);
    cout << "Area: " << graph1.get_area() << endl;

    Draw graph2(0,0,27, 1);
    cout << "Area: " << graph2.get_area() << endl;
    return 0;
}
