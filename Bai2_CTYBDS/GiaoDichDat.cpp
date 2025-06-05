#include "GiaoDichDat.h"

void GiaoDichDat::Nhap()
{
	GiaoDich::Nhap();
	do
	{
		cout << "Nhap loai dat (1-A, 2-B, 3-C): ";
		cin >> loaidat;
	} while (loaidat < 1 || loaidat>3);
}
void GiaoDichDat::Xuat()
{
	GiaoDich::Xuat();
	cout << "\nLoai dat: ";
	switch (loaidat)
	{
	case 1:
		cout << "A";
		break;
	case 2:
		cout << "B";
		break;
	default:
		cout << "C";
		break;
	}
	cout << "\nThanh tien: " << ThanhTien() << " VND\n\n";
}
long long GiaoDichDat::ThanhTien()
{
	long long tien = dongia * dientich;
	if (loaidat == 1)
		return tien * 1.5;
	else
		return tien;
}
string GiaoDichDat::GetLoai()
{
	return "D";
}