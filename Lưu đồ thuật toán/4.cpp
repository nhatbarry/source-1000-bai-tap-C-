//Tính S(n) = ½ + ¼ + … + 1/2n
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
        total += (1.0 / (2 * n));
    }
    cout << "Tong S(n) = " << total;
}