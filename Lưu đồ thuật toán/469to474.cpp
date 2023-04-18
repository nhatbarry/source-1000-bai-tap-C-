#include<iostream>
#include<cmath>
using namespace std;
void inp(int *n, int *m, int a[][100])
{
    cout << "Nhap kich thuoc ma tran hang * cot: ";
    cin >> *n >> *m;
    cout << "Nhap cac phan tu ma tran: ";
    for (int i = 0; i < *n; i++)
    for (int j = 0; j < *m; j++)
    cin >> a[i][j];
}
void cong()
{
    int n, m, a[100][100], b[100][100];
    cout << "Nhap ma tran A:\n";
    inp(&n, &m, a);
    cout << "Nhap ma tran B:\n";
    inp(&n, &m, b);
    cout << "Tong 2 ma tran la: \n";
    for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++)
    cout << a[i][j] + b[i][j] << " ";
    cout << endl;
    }
}
void hieu()
{
    int n, m, a[100][100], b[100][100];
    cout << "Nhap ma tran A:\n";
    inp(&n, &m, a);
    cout << "Nhap ma tran B:\n";
    inp(&n, &m, b);
    cout << "Hieu 2 ma tran la: \n";
    for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++)
    cout << a[i][j] - b[i][j] << " ";
    cout << endl;
}
}
void tich()
{
    int n, m, n1, m1, a[100][100], b[100][100], c[100][100];
    cout << "Nhap ma tran A:\n";
    inp(&n, &m, a);
    cout << "Nhap ma tran B:\n";
    inp(&n1, &m1, b);
    if(m!=n1) 
    {
        cout << "Khong the nhan\n";
        return;
    }
    cout << "Tich 2 ma tran la: \n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m1; j++)
        {
            int sum = 0;
            for(int k = 0; k < n1; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m1; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
}

void nghichdao()
{
    int n, m, a[100][100];
    inp(&n, &m, a);
    for(int i = 0; i < max(m,n); i++){
        for(int j = 0; j < max(m,n); j++)
        {
            // int tmp = a[i][i+j];
            // a[i][i+j] = a[i+j][i];
            // a[i+j][i] = tmp;
            swap(a[i][i+j], a[i+j][i]);
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
void det()
{

}
void maphuong()
{

}
void menu();
int main()
{
    int c;
    do
    {
        system("cls");
        menu();
        cin >> c;
        switch(c)
        {
            case 1:
            {
                cong();
                system("pause");
                break;
            }
            case 2:
            {
                hieu();
                system("pause");
                break;
            }
            case 3:
            {
                tich();
                system("pause");
                break;
            }
            case 4:
            {
                nghichdao();
                system("pause");
                break;
            }
            case 5:
            {
                det();
                system("pause");
                break;
            }
            case 6:
            {
                maphuong();
                system("pause");
                break;
            }
        }
    } while (c);
    return 0;
}
void menu()
{
    cout << "1. Tinh tong 2 mt\n2. Tinh hieu 2 mt\n3. Tinh tich 2 mt\n4. Mt nghich dao\n5. Dinh thuc mt\n6. Ma phuong bac n\n0. Thoat ct\n Lua chon: ";
}
