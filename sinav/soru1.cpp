#include <iostream>

using namespace std;

// Mete Ülken C++ Programlama Geliştirme ve Uyum Eğitimi Uygulama Sınavı Cevapları

int main()
{
    int giris = 0;

    cout << "1 - 12 arasinda bir ay giriniz: ";
    cin >> giris;

    switch (giris)
    {
    case 1:
        cout << "Ocak (Kis)";
        break;
    case 2:
        cout << "Subat (Kis)";
        break;
    case 3:
        cout << "Mart (Ilkbahar)";
        break;
    case 4: 
        cout << "Nisan (Ilkbahar)";
        break;
    case 5:
        cout << "Mayis (Ilkbahar)";
        break;
    case 6:
        cout << "Haziran (Yaz)";
        break;
    case 7:
        cout << "Temmuz (Yaz)";
        break;
    case 8:
        cout << "Agustos (Yaz)";
        break;
    case 9: 
        cout << "Eylul (Sonbahar)";
        break;
    case 10:    
        cout << "Ekim (Sonbahar)";
        break;
    case 11:
        cout << "Kasim (Sonbahar)";
        break;
    case 12:
        cout << "Aralik (Kis)";
        break;
    default:
        cout << "Hatali giris yaptiniz.";
        break;
    }
}