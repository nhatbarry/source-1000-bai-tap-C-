#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float total = 0;
    int n;
    cout << "Nhap n: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        total += 2;
        total = sqrt(total);
    }
    cout << total;
}