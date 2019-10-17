#include <iostream>
using namespace std;
class base {
    const int n=0;
    public: base()
    {
        cout << "Initializingdefault\n";
    }
    base( int m )
    {
        cout << "Initializing\n";
//        n = m;
    }
    ~base()
    {
        cout << "Destroying\n";
    }
};
int main(int argc, char* argv[])
{
    base x = 1;
    base y = x;
    return 0;
}
