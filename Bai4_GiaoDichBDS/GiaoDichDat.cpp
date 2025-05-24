#include "GiaoDichDat.h"

void GiaoDichDat::Nhap()
{
	BDS::Nhap();
	do
	{
		cout << "Nhap loai dat (1-A, 2-B, 3-C): ";
		cin >> loaidat;
	} while (loaidat < 1 || loaidat>3);
	cin.ignore();
}
void GiaoDichDat::Xuat() const
{
	cout << fixed << setprecision(0);
	BDS::Xuat();
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
double GiaoDichDat::ThanhTien() const
{
	if (loaidat == 1)
		return dientich * dongia * 1.5;
	else
		return dientich * dongia;
}