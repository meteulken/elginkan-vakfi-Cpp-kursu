#include <iostream>

using namespace std;
const float PI = 3.14159;

class Kure
{
    public:
        float r;
        float x,y,z;
        float alan();
        float hacim();
}k;

float Kure::hacim()
{
    return(r * r * r * PI * 4 / 3);
}
float Kure::alan()
{
    return(r * r * PI * 4);
}

int main()
{
    cout << "Kurenin yaricapini giriniz: "; cin >> k.r;
    cout << "Kurenin hacmi: " << k.hacim() << endl;
    cout << "Kurenin alani: " << k.alan() << endl;
}