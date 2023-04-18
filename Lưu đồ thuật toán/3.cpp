//Tính S(n) = 1 + ½ + 1/3 + … + 1/n
#include<iostream>
using namespace std;
int main()
{
    int n;
    float total = 0;
    cout << "Nhap n: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        total += (1.0 / i);
    }
    cout << "Tong S(n) = " << total;
}