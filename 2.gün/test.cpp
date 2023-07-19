#include <iostream>

//using namespace std;

int main(){
	
	char ad[30];
	char soyad[25];
	int yas;
	int hesapla;
	std::cout << "Adinizi Giriniz :"; 
	std::cin >> ad; 
	std::cout << "Soyadinizi Giriniz :";
	std::cin >> soyad;
	std::cout << "Yasinizi Giriniz :";
	std::cin >> yas;
	
	//std::cout << "Adiniz :" << ad << std::endl;
	//std::cout << "Soyadiniz : " << soyad;

	std::cout << "Adiniz: "<< ad << " "<< soyad << std::endl << "Dogum Yiliniz : " << 2023 - yas << std::endl;

	return 0;
}
