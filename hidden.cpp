#include <iostream>
using namespace std;

void func(char* s){
    cout<<"global function with name:"<<s<<endl;
}

class A{
    void func(){
        cout<<"member function of A"<<endl;
    }
public:
    void useFunc(){
        //func("lvlv");//A::func()将外部函数func(char*)隐藏
        func();
        ::func("lvlv");
    }
    virtual void print(){
        cout<<"A's print"<<endl;
    }
};

class B:public A{
public:
    void useFunc(){          //隐藏A::vodi useFunc()
        cout<<"B's useFunc"<<endl;
    }
    int useFunc(int i){      //隐藏A::vodi useFunc()
        cout<<"In B's useFunc(),i="<<i<<endl;
        return 0;
    }
    virtual int print(char* a){
        cout<<"B's print:"<<a<<endl;
        return 1;
    }

    //下面编译不通过,因为对父类虚函数重写时，需要函数返回值类型，函数名称和参数类型全部相同才行
    // virtual int print(){
        // cout<<"B's print:"<<a<<endl;
    // }
};

int main(){
    A a;
    a.useFunc();
    B b;
    b.useFunc();//A::useFunc()被B::useFunc()隐藏
    b.A::useFunc();
    b.useFunc(2);
    //b.print();//编译出错，A::print()被B::print(char* a)隐藏
    b.A::print();
    b.print("jf");
}
