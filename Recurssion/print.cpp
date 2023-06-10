#include <iostream>
// recurssive program to print 1, 2 ... n
using namespace std;

void print(int n)
{
    if (n <= 0)
    {
        return;
    }
    print(n - 1);
    cout << n << "  ";
}

int main()
{
    int num = 9;
    print(num);
    return 0;
}
