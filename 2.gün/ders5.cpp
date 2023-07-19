#include <iostream>

using namespace std;

int main()
{
    double fahrenheit;
    double celsius;

    cout << "Enter Fahrenheit Temprature: " << endl;
    cin >> fahrenheit;
    
    celsius = (fahrenheit - 32) * 5 / 9;

    cout << fahrenheit << "° Fahrenheit is  "<< celsius << endl;
}