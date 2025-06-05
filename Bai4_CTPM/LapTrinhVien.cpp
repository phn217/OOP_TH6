#include "LapTrinhVien.h"

void LapTrinhVien::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap so gio overtime: ";
    cin >> ot;
}
void LapTrinhVien::Xuat()
{
    NhanVien::Xuat();
    cout << "\nSo gio overtime: " << ot;
    cout << "\nLuong: " << TinhLuong() << " VND\n\n";
}
long long LapTrinhVien::TinhLuong()
{
    return luongcb + ot * 200000;
}