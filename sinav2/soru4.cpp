#include <iostream>

using namespace std;

int main()
{
    int i;
    int j;
    int n;

    cout << "Satir sayisini giriniz: ";
    cin >> n;

    i = 0;
    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n-i; j++)
        {
            cout << " ";
        }
        for(j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}