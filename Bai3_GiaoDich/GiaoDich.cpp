#include "GiaoDich.h"

void GiaoDich::Nhap()
{
	cout << "Nhap ma giao dich: ";
	getline(cin, mgd);
	cout << "Nhap ngay giao dich (dd/mm/yy): ";
	getline(cin, ngaygd);
	cout << "Nhap don gia: ";
	cin >> dongia;
	cout << "Nhap so luong: ";
	cin >> soluong;
	cin.ignore();
}
void GiaoDich::Xuat() const
{
	cout << "Ma GD: " << mgd;
	cout << "\nNgay GD: " << ngaygd;
	cout << "\nDon gia: " << dongia << " VND";
	cout << "\nSo luong: " << soluong << endl;
}
double GiaoDich::ThanhTien() const
{
	return dongia * soluong;
}
