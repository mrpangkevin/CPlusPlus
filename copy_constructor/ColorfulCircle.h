#pragma once
#include"Circle.h"
class ColorfulCircle : public Circle
{
public:
    void draw();
    ColorfulCircle();
    ~ColorfulCircle();

private:

};
ColorfulCircle::ColorfulCircle()
{
    cout<<"ColorfulCircle Constructor:"<<this<<endl;
}
ColorfulCircle::~ColorfulCircle()
{
    cout<<"ColorfulCircle Disconstructor:"<<this<<endl;
}
void ColorfulCircle::draw()
{
    cout<<"Draw a Colorful Circle"<<endl;
}
