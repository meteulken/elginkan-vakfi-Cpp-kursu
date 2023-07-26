#include <iostream>
#include <ctype.h>
#include <unistd.h>
#include <cstring>

using namespace std;

int main()
{
    char src[] = "Merhaba Programci";
    char dest[20];

    cout << "---------------------" << endl;

    strcpy(dest, src);
    cout << dest << endl;

    cout << "---------------------" << endl;

    char sifre1[10];
    char sifre2{10};
    int result;
    cin >> sifre1;
    cin >> sifre2;

    result =  strcmp(sifre1, sifre2);

    if(result == 0)
        cout << "Sifreler esit" << endl;
    else
        cout << "Sifreler esit degil" << endl;
}
