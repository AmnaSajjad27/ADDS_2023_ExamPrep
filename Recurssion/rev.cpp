// reverses the given numbers, given 1234, prints 4321

#include <iostream>

using namespace std;

void rev(int n)
{
    if (n <= 0)
    {
        return;
    }
    // print reversed 
    cout << n % 10;
    // recursive call
    rev(n/10);
}

int main()
{
    int n = 12345678;
    rev(n);
    cout << endl;
    return 0;
}