// Viết chương trình nhập vào một ngày (ngày, tháng, năm). Tìm ngày kế
// ngày vừa nhập (ngày, tháng, năm).
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int d, m, y;
    cout << "Nhap ngay: ";
    cin >> d;
    cout << "Nhap thang: ";
    cin >> m;
    cout << "Nhap nam: ";
    cin >> y;
    switch (m)
    {
        case 12:
        {
            if(d == 31) 
            {
                d = 1;
                m = 1;
                y++;
            }
            else if(d < 31 && d >= 1)
            {
                d++;
            }
            else{
                cout << "Ngay khong ton tai";
            }
            break;
        }
        case 1: case 3: case 5: case 7: case 8: case 10:
        {
            if(d == 31) 
            {
                d = 1;
                m ++;
            }
            else if(d < 31 && d >= 1)
            {
                d++;
            }
            else{
                cout << "Ngay khong ton tai";
            }
            break;
        }
        case 2:
        {
            if(!(y % 4) && (y % 100) || !(y % 400))
            {
                if(d == 29) 
            {
                d = 1;
                m ++;
            }
            else if(d < 29 && d >= 1)
            {
                d++;
            }
            else{
                cout << "Ngay khong ton tai";
            }
            break;
            }
            else{
                if(d == 28) 
            {
                d = 1;
                m ++;
            }
            else if(d < 28 && d >= 1)
            {
                d++;
            }
            else{
                cout << "Ngay khong ton tai";
            }
            break;
            }
        }
        default:
        {
            if(d == 30) 
            {
                d = 1;
                m ++;
            }
            else if(d < 30 && d >= 1)
            {
                d++;
            }
            else{
                cout << "Ngay khong ton tai";
            }
            break;
        }
    }
    cout << "dd/mm/yy: " << d << "/" << m << "/" << y;
}
