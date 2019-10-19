#include <iostream>
using namespace std;
class A{
public:
    int data;
public:
    A(){}
    A(int d){
        data=d;
        cout<<"set A "<< data<<endl;
    }
};
class B{
public:
    int data;
public:
    B(){}
    B(int d){
        data=d;
        cout<<"set B "<< data<<endl;
    }
};

class C : public A, public B{
public:
    int data;
public:
    C(){}
    C(int a, int b, int c) : A(a), B(b){
        data = c;
        cout<<"set C "<< data<<endl;
    }
};

int main()
{
    std::cout << "Hello world" << std::endl;
    C c(1,2,3);
    return 0;
}

