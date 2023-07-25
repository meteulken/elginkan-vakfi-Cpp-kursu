#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    do
    {
        cout << "Bir cumle giriniz: "; 
        getline(cin, str);
        cout << "Girdiginiz cumle: " << str << endl;
    } while (str != "goodbye");
    
}