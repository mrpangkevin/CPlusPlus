#include "Shape.h"
using namespace std;
class Rectangle : public Shape{
public:
    virtual void draw();
    Rectangle();
    ~Rectangle();
};
Rectangle::Rectangle()
{
    cout<<"Rectangle Constructor"<<endl;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle Disconstructor"<<endl;
}
