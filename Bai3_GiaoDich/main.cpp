#include "GiaoDichVang.h"
#include "GiaoDichTienTe.h"

void main()
{
	int n;
	cout << "Nhap so giao dich vang: ";
	cin >> n;
	cin.ignore();
	GiaoDichVang* gdv = new GiaoDichVang[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap giao dich thu " << i + 1 << ":\n";
		gdv[i].Nhap();
	}
	cout << "\n=== DANH SACH GIAO DICH VANG ===\n";
	for (int i = 0; i < n; i++)
		gdv[i].Xuat();
	if (n > 0)
	{
		int gdvmax = 0;
		double maxtien = gdv[0].ThanhTien();
		for (int i = 1; i < n; i++)
		{
			double tien = gdv[i].ThanhTien();
			if (tien > maxtien)
			{
				maxtien = tien;
				gdvmax = i;
			}
		}
		cout << "Giao dich vang co thanh tien cao nhat:\n";
		gdv[gdvmax].Xuat();
	}
	else
		cout << "Khong co giao dich vang nao\n";

	int m;
	cout << "\nNhap so giao dich tien te: ";
	cin >> m;
	cin.ignore();
	GiaoDichTienTe* gdtt = new GiaoDichTienTe[m];
	for (int i = 0; i < m; i++)
	{
		cout << "Nhap giao dich thu " << i + 1 << ":\n";
		gdtt[i].Nhap();
	}
	cout << "\n=== DANH SACH GIAO DICH TIEN TE ===\n";
	for (int i = 0; i < m; i++)
		gdtt[i].Xuat();
	double mintien = -1;
	int gdttmin = -1;
	for (int i = 0; i < m; i++)
	{
		if (gdtt[i].GetLoai() == 3)
		{
			double tien = gdtt[i].ThanhTien();
			if (mintien == -1 || tien < mintien)
			{
				mintien = tien;
				gdttmin = i;
			}
		}
	}
	if (gdttmin != -1)
	{
		cout << "Giao dich Euro co thanh tien thap nhat:\n";
		gdtt[gdttmin].Xuat();
	}
	else
		cout << "Khong co giao dich Euro nao\n";

	cout << "\n=== DANH SACH GIAO DICH CO THANH TIEN TREN 1 TY DONG ===\n";
	for (int i = 0; i < n; ++i)
		if (gdv[i].ThanhTien() > 1000000000)
			gdv[i].Xuat();
	for (int i = 0; i < m; ++i)
		if (gdtt[i].ThanhTien() > 1000000000)
			gdtt[i].Xuat();

	delete[] gdv;
	delete[] gdtt;
}