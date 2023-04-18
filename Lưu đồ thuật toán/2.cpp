//Tính S(n) = 1^2 + 2^2 + … + n^2
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int total = 0;
    cout << "Nhap n: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        total += pow(i, 2);
    }
    cout << "Tong S(n) = " << total;
}