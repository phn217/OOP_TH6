#include "NhanVienSX.h"

void NhanVienSX::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap luong co ban: ";
    cin >> luongcb;
    cout << "Nhap so san pham: ";
    cin >> sp;
}
void NhanVienSX::Xuat()
{
    NhanVien::Xuat();
    cout << "\tLuong co ban: " << luongcb << " VND\tSo san pham: " << sp << "\tLuong: " << TinhLuong() << " VND\n";
}
long long NhanVienSX::TinhLuong()
{
    return luongcb * sp * 5000;
}
string NhanVienSX::GetLoai()
{
    return "SX";
}