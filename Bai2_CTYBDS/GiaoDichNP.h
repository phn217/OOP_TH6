#pragma once
#include "GiaoDich.h"

class GiaoDichNP:public GiaoDich
{
private:
	int loainha;
	string diachi;
public:
	void Nhap();
	void Xuat();
	long long ThanhTien();
	string GetLoai();
};

