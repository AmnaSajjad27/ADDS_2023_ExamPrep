// tail recurssive fibonaci
// Time Complexity: O(n)
// Auxiliary Space: O(n)

#include <iostream>

using namespace std;

int Fib_tail(int n, int a = 0, int b = 1)
{
    if (n == 0)
    {
        return a;
    }
    if(n == 1)
    {
        return b;
    }

    cout << " n = " << n << endl;
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    
    return Fib_tail(n - 1, b, a + b);
}

int main()
{
    int n = 9;
    cout << "fib(" << n << ") = " << Fib_tail(n) << endl;
    return 0;
}