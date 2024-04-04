#include "Draw.h"

Draw::Draw(int y, int x, double len, int order){
    drawYellowBox(0,0,0,true);
    area = 0;
    this->drawBoxTrio(y,x,len, order);
}

void Draw::drawBoxTrio(int y, int x, double len, int order){
    if(order == 0){
        drawYellowBox(y,x,len,false);
        if(len*len > this->area) this->area = len*len;
        return ;
    }
    this->drawBoxTrio(y,x,len*2/3, order-1);
    this->drawBoxTrio(y,x+len*2/3, len/3, order-1);
    this->drawBoxTrio(y+len*2/3, x, len/3, order-1);
}

double Draw::get_area(){
    return this->area;
}