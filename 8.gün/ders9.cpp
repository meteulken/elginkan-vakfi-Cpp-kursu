#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        cout << " ";
        return 1;
    }

    else{
        cout << n << " ";
        return (fibonacci(n-2) + fibonacci(n - 1));
    }
}

int main()
{
    cout << fibonacci(3);
}