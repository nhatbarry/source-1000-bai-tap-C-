//Hãy tính tích các chữ số của số nguyên dương n.
#include<iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    cout << "Nhap so n: ";
    cin >> n;
    while(n)
    {
        i *= n%10;
        n/=10;
    }
    cout << "Tong cac chu so cua so n la: "<< i;
}