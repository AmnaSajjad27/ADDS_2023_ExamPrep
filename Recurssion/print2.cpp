#include <iostream>
// recurssive program to print 1, 2 ... n
using namespace std;

void print(int n)
{
    if (n <= 0)
    {
        return;
    }
    cout << n << "  ";
    print(n - 1);
}

int main()
{
    int num = 9;
    print(num);
    return 0;
}
