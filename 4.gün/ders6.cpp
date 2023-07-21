#include <iostream>

using namespace std;

int main()
{
    int il;
    cout << "ilk trafik kodu :";
    cin >> il;
    switch (il)
    {
    case 67:
    case 68:
        cout << "Zonguldak";
        break;
    case 41:
        cout << "Kocaeli";
        break;
    case 34:
        cout << "Istanbul";
        break;
    default:
        cout << "Hatali giris";
        break;
    }
    return 0;
}