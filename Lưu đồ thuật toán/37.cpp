#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float total = 0;
    int n;
    cout << "Nhap n: ";
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        total += pow(i, 1/n);
        total = sqrt(total);
    }
    cout << total;
}