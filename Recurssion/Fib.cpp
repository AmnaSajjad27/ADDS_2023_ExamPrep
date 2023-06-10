// program that returns the fibonacci of a number

#include <iostream> 

using namespace std;

int Fib(int number)
{
    // base case for recurssion
    if (number <= 1)
    {
        return number;
    }
    return (Fib(number - 1) + Fib(number - 2));
}

int main()
{
    int n = 9;
    cout << Fib(n) << endl;
    return 0;
}
