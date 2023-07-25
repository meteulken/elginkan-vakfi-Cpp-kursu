#include <iostream>

using namespace std;

// kullanıcıdan girilen sayıya kadar olan mükemmel sayıları bulunuz.

#include <iostream>

int main() {
    int sayi1 = 0, sayi2 = 0;

    cout << "Bir sayi giriniz: "; cin >> sayi1;
    cout << "-------------------" << endl;

    for (int i = 1; i <= sayi1; i++) 
    {
        int sayi2 = 0;
        for (int j = 1; j < i; j++) 
        {
            if (i % j == 0) {
                sayi2 += j;
            }
        }
        if (sayi2 == i)
        {
            cout << i << " mukemmel sayidir." << endl;
            cout << "Bolenleri: 1";

            for (int k = 2; k <= i / 2; k++) {
                if (i % k == 0) {
                    cout << " + " << k;
                }
            }
            cout << " = " << i << endl;
            cout << "-------------------" << endl;
        }  
    }
    return 0;
}
