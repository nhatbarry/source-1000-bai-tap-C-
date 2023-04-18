#include<iostream>
using namespace std;

bool is_power_of_two(int n) {
    if (n <= 0) { 
        return false;
    }
    return (n & (n - 1)) == 0;
}

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    if (is_power_of_two(n)) {
        cout << n << " la mot so co dang 2^k.";
    } else {
        cout << n << " khong co dang 2^k.";
    }
    return 0;
}
