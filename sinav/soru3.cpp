#include <iostream>

using namespace std;

int main()
{
    int carpim = 1;
    int sayi = 6;

    for (int i = 1; i <= 10; i++)
    {
        for (size_t j = 1; j < 10; j++)
        {
            carpim = i * j;
            cout << i << " x " << j << " = " << carpim << endl;
        }
        cout << "------------" << endl;
    }
}