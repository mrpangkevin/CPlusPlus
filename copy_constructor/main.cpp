#include<iostream>
#include "Shape.h"
#include"Rectangle.h"
#include"Circle.h"
#include"ColorfulCircle.h"
using namespace std;
void Rectangle::draw() {
    cout<<"Draw a Rectangle."<<endl;
}
void Circle::draw() {
    cout<<"Draw a Circle."<<endl;
}

int main ( int argc, char* argv[] )
{
    Shape *s;
    Rectangle r;
    Circle c;
    ColorfulCircle cc;
    s = &r;
    s->draw();
    s = &c;
    s->draw();
    cout<<"-------"<<endl;
    s = new ColorfulCircle();
    delete s;

    return 0;
}
