#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, a1, b, b1, c, c1, d, dx, dy;
    cout << "Nhap pt thu nhat: ";
    cin >> a >> b >> c;
    cout << "Nhap pt thu hai: ";
    cin >> a1 >> b1 >> c1;
    d = a * b1 - a1 * b;
    dx = c * b1 - b * c1;
    dy = a * c1 - a1 * c;
    if(!d)
    {
        if(!dx && !dy)
        {
            cout << "Vo so nghiem";
        }
        else if(dx && dy)
        {
            cout << "Vo nghiem";
        }
    }
    else 
    {
        cout << "x = " << dx / d;
        cout << "\ny = " << dy / d;
    }
}