#pragma once
#include "GiaoDich.h"

class GiaoDichCHCC:public GiaoDich
{
private:
	string macan;
	int tang;
public:
	void Nhap();
	void Xuat();
	long long ThanhTien();
	string GetLoai();
};

