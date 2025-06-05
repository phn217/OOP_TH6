#include "NhanVien.h"

void NhanVien::Nhap()
{
    cin.ignore();
    cout << "Nhap ma nhan vien: ";
    getline(cin, ma);
    cout << "Nhap ho ten: ";
    getline(cin, ten);
    cout << "Nhap tuoi: ";
    cin >> tuoi;
    cin.ignore();
    cout << "Nhap SDT: ";
    getline(cin, sdt);
    cout << "Nhap email: ";
    getline(cin, email);
    cout << "Nhap luong co ban: ";
    cin >> luongcb;
}
void NhanVien::Xuat()
{
    cout << "Ma NV: " << ma;
    cout << "\nTen: " << ten;
    cout << "\nTuoi: " << tuoi;
    cout << "\nSDT: " << sdt;
    cout << "\nEmail: " << email;
    cout << "\nLuong co ban: " << luongcb << " VND";
}