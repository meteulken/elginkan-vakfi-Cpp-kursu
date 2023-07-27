#include <iostream>

using namespace std;

void printNumberIfEven(int x)
{
    if (x % 2 == 1)
    {
        cout << "odd number" << endl;
        return;
    }
    cout << "even number; number is: " << x << endl;
}

int main()
{
    int x = 4;
    printNumberIfEven(x);

    int y = 5;
    printNumberIfEven(y);

}