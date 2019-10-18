#include "Shape.h"
using namespace std;
class Rectangle : public Shape{
public:
    void draw();
    Rectangle();
    ~Rectangle();
};
Rectangle::Rectangle()
{
    cout<<"Rectangle Constructor:"<<this<<endl;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle Disconstructor:"<<this<<endl;
}
