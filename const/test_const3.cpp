#include<iostream>
#include"test_const3.h"
using namespace std;
TestConst::TestConst():a(1){}
const int TestConst::b=2;
const int d=4;
int dd=5;
static int ff=100;
const static int f=100;
int main ( int argc, char* argv[] )
{
    const int c=3;
//    TestConst A;

//    cout<<A.a<<endl;
//    cout<<A.b<<endl;
//    cout<<c<<endl;
//    cout<<d<<endl;
//    cout<<A.e<<endl;
//    cout<<f<<endl;
    const static int aaa=0;
    const int aa=0;
    const TestConst B;
    B.c=10;
    cout<<B.b<<endl;
    cout<<B.c<<endl;
}
