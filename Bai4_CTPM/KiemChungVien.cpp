#include "KiemChungVien.h"

void KiemChungVien::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap so loi phat hien: ";
    cin >> loiph;
}
void KiemChungVien::Xuat()
{
    NhanVien::Xuat();
    cout << "\nSo loi phat hien: " << loiph;
    cout << "\nLuong: " << TinhLuong() << " VND\n\n";
}
long long KiemChungVien::TinhLuong()
{
    return luongcb + loiph * 50000;
}