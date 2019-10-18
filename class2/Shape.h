#pragma once
#include<iostream>
using namespace std;
class Shape{
public:
    virtual void draw()=0;
    Shape();
    ~Shape();
};
Shape::Shape()
{
    cout<<"Shape Constructor"<<endl;
}
Shape::~Shape()
{
    cout<<"Shape Disconstructor"<<endl;
}
