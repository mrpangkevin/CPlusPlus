#include "Shape.h"
using namespace std;
class Circle : public Shape{
public:
    virtual void draw();
    Circle();
    ~Circle();
};
Circle::Circle()
{
    cout<<"Circle Constructor"<<endl;
}
Circle::~Circle()
{
    cout<<"Circle Disconstructor"<<endl;
}
