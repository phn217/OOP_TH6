#include "NhanVienVP.h"

void NhanVienVP::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap so ngay di lam: ";
    cin >> dilam;
}
void NhanVienVP::Xuat()
{
    NhanVien::Xuat();
    cout << "\tSo ngay di lam: " << dilam << "\tLuong: " << TinhLuong() << " VND\n";
}
long long NhanVienVP::TinhLuong()
{
    return dilam * 100000;
}
string NhanVienVP::GetLoai()
{
    return "VP";
}

