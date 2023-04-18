#include <iostream>
using namespace std;

void print(int arr[]) {
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int target = 100000000;
    
    for (int a = 0; a <= target/1000; a++) {
        for (int b = 0; b <= target/2000; b++) {
            for (int c = 0; c <= target/5000; c++) {
                if (a*1000 + b*2000 + c*5000 == target) {
                    int arr[] = {a, b, c};
                    print(arr);
                }
            }
        }
    }

    return 0;
}
