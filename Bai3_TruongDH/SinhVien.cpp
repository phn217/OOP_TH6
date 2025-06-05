#include "SinhVien.h"

void SinhVien::Nhap()
{
    cin.ignore();
    cout << "Nhap MSSV: ";
    getline(cin, mssv);
    cout << "Nhap ho ten: ";
    getline(cin, hoten);
    cout << "Nhap dia chi: ";
    getline(cin, diachi);
    cout << "Nhap tong so tin chi: ";
    cin >> tinchi;
    do
    {
        cout << "Nhap DTB (tu 0 den 10): ";
        cin >> dtb;
    } while (dtb < 0 || dtb>10);
}
void SinhVien::Xuat()
{
    cout << "MSSV: " << mssv;
    cout << "\nTen: " << hoten;
    cout << "\nDia chi: " << diachi;
    cout << "\nTong tin chi: " << tinchi;
    cout << "\nDiem TB: " << dtb;
}
double SinhVien::GetDTB()
{
    return dtb;
}
