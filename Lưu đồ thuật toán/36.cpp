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
    float total = 0;
    int n;
    cout << "Nhap n: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        total += fact(i);
        total = sqrt(total);
    }
    cout << total;
}