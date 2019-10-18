#pragma once
#include "Shape.h"
using namespace std;
class Circle : public Shape{
public:
    void draw();
    Circle();
    ~Circle();
};
Circle::Circle()
{
    cout<<"Circle Constructor:"<<this<<endl;
}
Circle::~Circle()
{
    cout<<"Circle Disconstructor:"<<this<<endl;
}
