#include "GiaoDichDat.h"
#include "GiaoDichNhaPho.h"
#include "GiaoDichCHCC.h"

void main()
{
	int n, m, k;
	cout << "Nhap so giao dich Dat: ";
	cin >> n;
	cin.ignore();
	GiaoDichDat* gdd = new GiaoDichDat[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap giao dich thu " << i + 1 << ":\n";
		gdd[i].Nhap();
	}
	cout << "\n=== DANH SACH GIAO DICH DAT ===\n";
	for (int i = 0; i < n; i++)
		gdd[i].Xuat();

	cout << "Nhap so giao dich Nha pho: ";
	cin >> m;
	cin.ignore();
	GiaoDichNhaPho* gdnp = new GiaoDichNhaPho[m];
	for (int i = 0; i < m; i++)
	{
		cout << "Nhap giao dich thu " << i + 1 << ":\n";
		gdnp[i].Nhap();
	}
	cout << "\n=== DANH SACH GIAO DICH NHA PHO ===\n";
	for (int i = 0; i < m; i++)
		gdnp[i].Xuat();

	cout << "Nhap so giao dich CHCC: ";
	cin >> k;
	cin.ignore();
	GiaoDichCHCC* gdchcc = new GiaoDichCHCC[k];
	for (int i = 0; i < k; i++)
	{
		cout << "Nhap giao dich thu " << i + 1 << ":\n";
		gdchcc[i].Nhap();
	}
	cout << "\n=== DANH SACH GIAO DICH CAN HO CHUNG CU ===\n";
	for (int i = 0; i < k; i++)
		gdchcc[i].Xuat();

	cout << "Tong so luong giao dich Dat: " << n << endl;
	cout << "Tong so luong giao dich Nha pho: " << m << endl;
	cout << "Tong so luong giao dich CHCC: " << k << endl;

	double tongtienCHCC = 0;
	for (int i = 0; i < k; ++i)
		tongtienCHCC += gdchcc[i].ThanhTien();
	double tbCHCC = (k > 0) ? tongtienCHCC / k : 0;
	cout << "\nTrung binh thanh tien CHCC: " << tbCHCC << " VND\n";

	if (m > 0) 
	{
		double maxtien = gdnp[0].ThanhTien();
		int vtmax = 0;
		for (int i = 1; i < m; ++i) {
			if (gdnp[i].ThanhTien() > maxtien) {
				maxtien = gdnp[i].ThanhTien();
				vtmax = i;
			}
		}
		cout << "\nGiao dich Nha pho co thanh tien cao nhat:\n";
		gdnp[vtmax].Xuat();
	}

	cout << "Danh sach cac giao dich thang 12 nam 2024:\n";
	for (int i = 0; i < n; ++i) {
		if (gdd[i].GetNgayGD().substr(3, 2) == "12" && gdd[i].GetNgayGD().substr(6, 4) == "2024")
			gdd[i].Xuat();
	}
	for (int i = 0; i < m; ++i) {
		if (gdnp[i].GetNgayGD().substr(3, 2) == "12" && gdnp[i].GetNgayGD().substr(6, 4) == "2024")
			gdnp[i].Xuat();
	}
	for (int i = 0; i < k; ++i) {
		if (gdchcc[i].GetNgayGD().substr(3, 2) == "12" && gdchcc[i].GetNgayGD().substr(6, 4) == "2024")
			gdchcc[i].Xuat();
	}

	delete[] gdd;
	delete[] gdnp;
	delete[] gdchcc;
}