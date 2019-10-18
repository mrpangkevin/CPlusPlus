#pragma once
#include<iostream>
using namespace std;
class Shape{
public:
    virtual void draw()=0;
    Shape();
    virtual ~Shape();
};
Shape::Shape()
{
    cout<<"Shape Constructor:"<<this<<endl;
}
Shape::~Shape()
{
    cout<<"Shape Disconstructor:"<<this<<endl;
}
//void Shape::draw(){
//    cout<<"Draw a Shape."<<endl;
//}
