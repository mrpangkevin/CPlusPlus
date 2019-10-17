#include <iostream>
#include<vector>
#include <stdexcept>
#include"test_const4.h"
using namespace std;

int main()
{
    std::cout << "Hello world" << std::endl;
    test_const4 s;
    s.a=10;
    cout<<s.a<<endl;
    s.a++;
    cout<<s.a<<endl;
    const test_const4 t;
    t.a=10;
    cout<<t.a<<endl;
    t.a++;
    cout<<t.a<<endl;
    cout<<t.get()<<endl;
    cout<<t.get()<<endl;
    cout<<t.get()<<endl;
    cout<<t.get()<<endl;
    cout<<"---------"<<endl;

    const int constant = 21;
    const int* const_p = &constant;
    cout<<"1  "<<constant<<endl;
    cout<<"2   "<<&constant<<endl;
    cout<<"2.1 "<<const_p<<endl;
    cout<<"---------"<<endl;

    int* modifier = const_cast<int*>(const_p);
    *modifier = 7;
    cout<<"3 "<<constant<<endl;
    cout<<"4 "<<*modifier<<endl;
    cout<<"4 "<<*const_p<<endl;
    cout<<"4 "<<const_p<<endl;
    cout<<"5 "<<modifier<<endl;
    vector<int> v;
    const int vis = v.size();
    //constexpr int vs = v.size();
    constexpr int vs = 1;
    cout<<v.size()<<endl;

    return 0;
}

