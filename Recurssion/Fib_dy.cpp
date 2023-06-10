// Fibonacci using dynamics programming 

#include <iostream>

using namespace std;

class Fib_dy
{
    public:
    int Fib(int number)
    {
        // declare an array to store already caulcated values
        int f[number + 2];
        int index;

        // Fibonacci of 0 and 1
        f[0] = 0;
        f[1] = 1;

        for (index = 2; index <= number; index++)
        {
            f[index] = f[index - 1] + f[index - 2];
        }
        return f[number];
    }
};

int main()
{
    Fib_dy instance;
    int n = 9;

    cout << instance.Fib(n) << endl;
    return 0;
}
