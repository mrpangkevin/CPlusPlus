#include <iostream>
using namespace std;

template <typename T>
class bignumber{
public:
    T d;
    bignumber(){}
    bignumber(T _d): d(_d){ }
    bool operator< (bignumber<T> _d){
        return this->d<_d.d;
    }
};

template<typename T>
bignumber<T> add(bignumber<T> a , bignumber<T> b){
    bignumber<T> c;
    c.d=a.d+b.d;
    return c;
}
int main()
{
    std::cout << "Hello world" << std::endl;
    bignumber<int> a(12);
    bignumber<int> b(11);
    bignumber<int> c=add(a,b);
    cout << (a<b) << endl;
    cout << c.d << endl;
    bignumber<float> fa(2.1);
    bignumber<float> fb(9.3);
    bignumber<float> fc=add(fa,fb);
    cout << (fa<fb) << endl;
    cout << fc.d << endl;
    

    char *p="hello";
    cout<<p<<endl;//打印整个字符串
    cout<<*p<<endl;//打印整个字符串
    
    char *p2="hello";
    while(*p2!='\0')
         cout<<*p2++<<endl;//逐个打印字符


    return 0;
}

