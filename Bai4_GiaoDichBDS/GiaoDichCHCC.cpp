#include "GiaoDichCHCC.h"

void GiaoDichCHCC::Nhap()
{
	BDS::Nhap();
	cin.ignore();
	cout << "Nhap ma can ho chung cu: ";
	getline(cin, macan);
	cout << "Nhap so tang cua can ho: ";
	cin >> tang;
	cin.ignore();
}
void GiaoDichCHCC::Xuat() const
{
	cout << fixed << setprecision(0);
	BDS::Xuat();
	cout << "\nMa can ho: " << macan;
	cout << "\nTang can ho: " << tang;
	cout << "\nThanh tien: " << ThanhTien() << " VND\n\n";
}
double GiaoDichCHCC::ThanhTien() const
{
	if (tang == 1)
		return dientich * dongia * 2;
	else if (tang >= 15)
		return dientich * dongia * 1.2;
	else
		return dientich * dongia;
}