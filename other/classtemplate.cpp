#include <iostream>
using namespace std;

template <typename T>
class Complex{

//private:
public:
    T a;
    T b;
public:
    Complex(){}
    Complex(T _a, T _b){
        a=_a;
        b=_b;
    }
    Complex<T> operator+ (Complex _c){
        Complex<T> c;//(this->a+_c.a, this->b+_c.b);
        c.a=this->a+_c.a;
        c.b=this->b+_c.b;
        return c;
    }
    void view(){
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
    }
};

int main()
{
    std::cout << "Hello world" << std::endl;
    Complex<int> a(10,20);
    Complex<int> b(11,22);
    Complex<int> c=a+b;
    a.view();
    b.view();
    c.view();

    return 0;
}

