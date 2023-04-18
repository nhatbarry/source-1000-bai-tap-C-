#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Nhap cac he so a, b, c trong phuong trinh ax^4 + bx^2 +c = 0: ";
    cin >> a >> b >> c;
    while(!a)
    {
        cout << "Nhap gia tri a > 0: ";
        cin >> a;
    }
    float d = (b*b) - (4 * a * c);
    if(d < 0) cout << "PT vo nghiem";
    else if(!d) 
    {
        float x = -b / (2 * a);
        if(x > 0) cout << "x1 = " << sqrt(x) << " x2 = " << 0 - sqrt(x);
    }
    else if(d > 0)
    {
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);
        if(x1 > 0) cout << "x = " << sqrt(x1) << " x = " << 0 - sqrt(x1) << "\n";
        if(x2 > 0) cout << "x = " << sqrt(x2) << " x = " << 0 - sqrt(x2);
    }
}