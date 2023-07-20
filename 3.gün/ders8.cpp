#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int sayi1, sayi2;
    int i = 2;

    cout << "Sayi :";
    cin >> sayi1;

    while(i <= 5)
    {
        sayi2 = pow(sayi1,i);
        
        cout << sayi1 << " ^ " << i << " : "<< sayi2 << endl;
        i++;
    }
}