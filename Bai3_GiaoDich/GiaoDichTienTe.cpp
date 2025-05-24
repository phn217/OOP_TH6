#include "GiaoDichTienTe.h"

void GiaoDichTienTe::Nhap()
{
	GiaoDich::Nhap();
	cout << "Nhap ti gia: ";
	cin >> tigia;
	do
	{
		cout << "Nhap loai tien (1-VND, 2-USD, 3-EUR): ";
		cin >> loaitien;
	} while (loaitien < 1 || loaitien>3);
	cin.ignore();
}
void GiaoDichTienTe::Xuat() const
{
	cout << fixed << setprecision(0);
	GiaoDich::Xuat();
	cout << "Ti gia: " << tigia;
	cout << "\nThanh tien : " << ThanhTien() << " VND\n\n";
}
double GiaoDichTienTe::ThanhTien() const
{
	if (loaitien == 1)
		return dongia * soluong;
	else
		return dongia * soluong * tigia;
}
int GiaoDichTienTe::GetLoai() const
{
	return loaitien;
}
