//Cho số nguyên dương n. Hãy tìm chữ số đầu tiên của n
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int i = 0;
    cout << "Nhap so n: ";
    cin >> n;
    int k = n;
    while(n)
    {
        i += n%10;
        n/=10;
    }
    i = pow(10,i-1);
    k = k / i;
    cout << "Chu so dau tien cua n la: "<< k;
}