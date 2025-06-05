#include "GiaoDich.h"

void GiaoDich::Nhap()
{
	cin.ignore();
	cout << "Nhap ma giao dich: ";
	getline(cin, mgd);
	cout << "Nhap ngay giao dich (dd/mm/yyyy): ";
	getline(cin, ngaygd);
	cout << "Nhap don gia: ";
	cin >> dongia;
	cout << "Nhap dien tich: ";
	cin >> dientich;
}
void GiaoDich::Xuat()
{
	cout << "Ma GD: " << mgd;
	cout << "\nNgay GD: " << ngaygd;
	cout << "\nDon gia: " << dongia << " VND";
	cout << "\nDien tich: " << dientich << " m^2";
}
string GiaoDich::GetNgayGD()
{
	return ngaygd;
}