//Tính S(n) = 1 + 2 + 3 + … + n
#include<iostream>
using namespace std;
int main()
{
    int n;
    int total = 0;
    cout << "Nhap n: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        total += i;
    }
    cout << "Tong S(n) = " << total;
}