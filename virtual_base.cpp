
#include <iostream>
#include <fstream>
using namespace std;
class AA{
public:
    int aa;
public:
    AA(){};
    AA(int a){
        aa=a;
    }
    int get(){
        return aa;
    }
};
class BB : virtual public AA{
    int bb;
public:
    int get(){
        return bb;
    }
};
class CC : virtual public AA{
public:
    int bb;
public:
    int get(){
        return bb;
    }
};
class DD : public BB, public CC {
public:
        float dd;
};

int main (){

//    MemTest *mTest1 = newMemTest[10];
//    MemTest *mTest2 = newMemTest;
//    int*pInt1= newint[10];
//    int*pInt2= newint;
//    delete[]pInt1; //-1-
//    delete[]pInt2; //-2-
//    delete[]mTest1; //-3-
//    delete[]mTest2; //-4-

//    int d[10];
//    int *ptr = d[10];
//    ifstream myfile;
//    myfile.open("a.txt");
//    ifstream << "abc\n";
//    return 0;

//    AA a(10);
//    int data = a.get();
//    AA ele[3] = {5,3,2};
//    for(int i=0;i<3;i++)
//        cout<<ele[i].get()<<endl;

    DD p;
    int m = p.aa;
    AA *pr=&p;
    AA &pt=p;
    AA r;
//    DD ps = r;
//    DD *pp=(DD*)(BB*)pr;
//    DD *pp=(DD*)pr;
    DD *pp=(BB*)pr;


    return 0;
}
