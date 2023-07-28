#include <iostream>

using namespace std;

// structlar ile fonksiyonlarin birbirine baglanmasi

typedef struct kutuphane
{
    int sira_no;
    int s_sayisi;
    string kitap_adi, yazar , kitabin_turu;

    struct kutuphane *sonraki;
}kitap;


int main()
{
    kitap kitap1;

    kitap1.kitap_adi = "Beyaz Dis";
    kitap1.kitabin_turu = "Roman";
    kitap1.yazar = "Jack London";
    kitap1.sira_no = 1;
    kitap1.s_sayisi = 300;

    kitap2.kitap_adi = "Siir";
    kitap2.kitabin_turu = "Siirler";
    kitap2.yazar = "Cemal Sureya";
    kitap2.sira_no = 2;
    kitap2.s_sayisi = 200;
    

    return 0;
}