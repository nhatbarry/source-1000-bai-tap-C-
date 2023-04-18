//Tính S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + ….. + 1/ 1 + 2 + 3 + …. + N
#include<iostream>
using namespace std;
int main()
{
    int n;
    float total = 0;
    float sum = 0;
    cout << "Nhap n: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        sum += j;
        total += (1.0 / sum);
    }
    cout << "Tong S(n) = " << total;
}