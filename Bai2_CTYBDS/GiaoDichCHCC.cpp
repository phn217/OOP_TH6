#include "GiaoDichCHCC.h"

void GiaoDichCHCC::Nhap()
{
	GiaoDich::Nhap();
	cin.ignore();
	cout << "Nhap ma can ho chung cu: ";
	getline(cin, macan);
	cout << "Nhap so tang cua can ho: ";
	cin >> tang;
	cin.ignore();
}
void GiaoDichCHCC::Xuat() 
{
	GiaoDich::Xuat();
	cout << "\nMa can ho: " << macan;
	cout << "\nTang can ho: " << tang;
	cout << "\nThanh tien: " << ThanhTien() << " VND\n\n";
}
long long GiaoDichCHCC::ThanhTien() 
{
	long long tien = dongia * dientich;
	if (tang == 1)
		return tien * 2;
	else if (tang >= 15)
		return tien * 1.2;
	else
		return tien;
}
string GiaoDichCHCC::GetLoai()
{
	return "CHCC";
}