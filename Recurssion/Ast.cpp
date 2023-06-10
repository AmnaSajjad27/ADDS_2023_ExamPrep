// Write a recursive void function that has one parameter which is a positive integer and that writes out that number of asterisks '*' to the screen all on one line.

#include <iostream>

using namespace std;

void Ast(int number)
{
    if (number == 0)
    {
        return;
    }
    cout << "*";
    return Ast(number - 1);
}

int main()
{
    int n = 9;
    Ast(n);
    cout <<endl;
    return 0;
}