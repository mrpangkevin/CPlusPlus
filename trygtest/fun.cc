#include <iostream>

//int main()
//{
//    std::cout << "Hello world" << std::endl;
//    return 0;
//}

//void fun()
//{
//    std::string intstr = "100";
//    std::string hundred = "101";
//    ASSERT_STREQ(intstr.c_str(), hundred.c_str());
//}
int add(int a, int b)
{
    return a+b;
}
int Foo(int a, int b)
{
    if ( a==0 || b == 0 )
    {
        throw "don't do that";
    }
    int c = a%b;
    if ( c==0 )
    {
        return b;
    }
    return Foo(b,c);
}
// Returns true iff n is a prime number.
bool IsPrime(int n)
{
    // Trivial case 1: small numbers
    if (n <= 1) return false;

    // Trivial case 2: even numbers
    if (n % 2 == 0) return n == 2;

    // Now, we have that n is odd and n >= 3.

    // Try to divide n by every odd number i, starting from 3
    for (int i = 3; ; i += 2) {
        // We only have to try i up to the squre root of n
        if (i > n/i) break;

        // Now, we have i <= n/i < n.
        // If n is divisible by i, n is not prime.
        if (n % i == 0) return false;
    }
    // n has no integer factor in the range (1, n), and thus is prime.
    return true;
}
