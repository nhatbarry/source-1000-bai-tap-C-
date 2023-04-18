#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float total = 1;
    int n;
    cout << "Nhap n: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        total = 1.0 / (1.0 + total);
    }
    cout << total;
}