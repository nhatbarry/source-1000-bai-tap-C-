#include <iostream>

using namespace std;

int main()
{
    int h;
    cout << "Nhap do cao h: ";
    cin >> h;

    // In tam giác cân đặc
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= 2*h-1; j++)
        {
            if (j >= h-(i-1) && j <= h+(i-1))
            {
                cout << "*\t";
            }
            else
            {
                cout << "\t";
            }
        }
        cout << endl << endl;
    }

    return 0;
}
