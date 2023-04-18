//Hãy đếm số lượng chữ số của số nguyên dương n.
#include<iostream>
using namespace std;
int main()
{
    int n;
    int i = 0;
    cout << "Nhap so n: ";
    cin >> n;
    while(n)
    {
        n/=10;
        i++;
    }
    cout << "So n co "<< i <<" chu so";
}