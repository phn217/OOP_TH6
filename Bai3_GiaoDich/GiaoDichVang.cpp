#include "GiaoDichVang.h"

void GiaoDichVang::Nhap()
{
	GiaoDich::Nhap();
	cout << "Nhap loai vang: ";
	getline(cin, loaivang);
}
void GiaoDichVang::Xuat() const
{
	cout << fixed << setprecision(0);
	GiaoDich::Xuat();
	cout << "Loai vang: " << loaivang;
	cout << "\nThanh tien : " << ThanhTien() << " VND\n\n";
}
double GiaoDichVang::ThanhTien() const
{
	return dongia * soluong;
}