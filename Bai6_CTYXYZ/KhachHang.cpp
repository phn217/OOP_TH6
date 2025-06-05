#include "KhachHang.h"

void KhachHang::Nhap()
{
    cin.ignore();
    cout << "Nhap ten khach hang: ";
    getline(cin, ten);
    cout << "Nhap so luong hang: ";
    cin >> hang;
    cout << "Nhap don gia: ";
    cin >> dongia;
}
void KhachHang::Xuat()
{
    cout << "Ten khach hang: " << ten;
    cout << "\nSo tien phai tra: " << TinhTien() << " VND\n\n";
}