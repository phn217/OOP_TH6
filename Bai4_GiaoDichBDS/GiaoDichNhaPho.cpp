#include "GiaoDichNhaPho.h"

void GiaoDichNhaPho::Nhap()
{
	BDS::Nhap();
	do
	{
		cout << "Nhap loai nha (1 - cao cap, 2 - thuong): ";
		cin >> loainha;
	} while (loainha < 1 || loainha>2);
	cin.ignore();
	cout << "Nhap dia chi: ";
	getline(cin, diachi);
	cin.ignore();
}
void GiaoDichNhaPho::Xuat() const
{
	cout << fixed << setprecision(0);
	BDS::Xuat();
	cout << "\nLoai nha: ";
	if (loainha == 1)
		cout << "cao cap";
	else
		cout << "thuong";
	cout << "\nDia chi: " << diachi;
	cout << "\nThanh tien: " << ThanhTien() << " VND\n\n";
}
double GiaoDichNhaPho::ThanhTien() const
{
	if (loainha == 1)
		return dientich * dongia;
	else
		return dientich * dongia * 0.9;
}