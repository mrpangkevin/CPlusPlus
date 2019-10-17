#pragma once

class test_const4
{
public:
    test_const4() {}
    ~test_const4() {}
    mutable int a;
    int b;
    int get()const{
        a++;
        return a;
    }

private:

};

