#include <iostream>
using namespace std;

class person{
public:
    int age;
public:
    person(){}
    person(int a)
    {
        age=a;
    }
    person operator+ (person a)
    {
        person c;
        c.age = a.age+this->age;
        return c;
    }
};

int main()
{
    std::cout << "Hello world" << std::endl;
    person a(10);
    person b(20);
    person c=a+b;
    cout<<c.age<<endl;


    return 0;
}

