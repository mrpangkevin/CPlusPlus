#include<iostream>
#include"test_const1.h"
using namespace std;

void TestConst::show(){
    cout<<"This is normal show."<<endl;
}
//void TestConst::show() const{
//    cout<<"This is const show."<<endl;
//}

int main (int argc , char* argv[])
{
    TestConst a;
    const TestConst b;

    a.show();
    b.show();
}
