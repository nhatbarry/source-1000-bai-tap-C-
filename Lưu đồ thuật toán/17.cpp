#include<iostream>
#include<cmath>
using namespace std;
float fact(int n)
{
    int kq = 1;
    for(int i = 1; i <= n; i++)
    {
        kq *= i;
    }
    return kq;
}
int main()
{
    int n;
    float total = 0;
    int x;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap x: ";
    cin >> x;
    for(int i = 1; i <= n; i++)
    {
        total += (pow(x,i) / fact(i));
    }
    cout << "Tong S(n) = " << total;
}