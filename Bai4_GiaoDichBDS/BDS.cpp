#include "BDS.h"

void BDS::Nhap()
{
	cout << "Nhap ma giao dich: ";
	getline(cin, mgd);
	cout << "Nhap ngay giao dich (dd/mm/yyyy): ";
	getline(cin, ngaygd);
	cout << "Nhap don gia: ";
	cin >> dongia;
	cout << "Nhap dien tich: ";
	cin >> dientich;
}
void BDS::Xuat() const
{
	cout << "Ma GD: " << mgd;
	cout << "\nNgay GD: " << ngaygd;
	cout << "\nDon gia: " << dongia << " VND";
	cout << "\nDien tich: " << dientich << " m^2";
}
string BDS::GetNgayGD() const
{
	return ngaygd;
}
double BDS::ThanhTien() const
{
	return dientich * dongia;
}
