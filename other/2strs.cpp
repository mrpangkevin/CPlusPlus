#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool cmp(string a, string b)
{
    sort(&a[0], &a[0] + a.size());
    sort(&b[0], &b[0] + b.size());
    return a<b;
}
int main()
{
    string a[6] = {"bsc","sad","kucf","csb","bas","fcuk"};

    sort(a, a+6, cmp);
    for (int i=0; i<6; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
