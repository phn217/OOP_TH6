#include "GiaoDichNP.h"

void GiaoDichNP::Nhap()
{
	GiaoDich::Nhap();
	do
	{
		cout << "Nhap loai nha (1 - cao cap, 2 - thuong): ";
		cin >> loainha;
	} while (loainha < 1 || loainha>2);
	cin.ignore();
	cout << "Nhap dia chi: ";
	getline(cin, diachi);
}
void GiaoDichNP::Xuat()
{
	GiaoDich::Xuat();
	cout << "\nLoai nha: ";
	if (loainha == 1)
		cout << "cao cap";
	else
		cout << "thuong";
	cout << "\nDia chi: " << diachi;
	cout << "\nThanh tien: " << ThanhTien() << " VND\n\n";
}
long long GiaoDichNP::ThanhTien() 
{
	long long tien = dongia * dientich;
	if (loainha == 1)
		return tien;
	else
		return tien * 0.9;

}
string GiaoDichNP::GetLoai()
{
	return "NP";
}