#pragma once
#include "BDS.h"

class GiaoDichNhaPho :public BDS
{
private:
	int loainha;
	string diachi;
public:
	void Nhap();
	void Xuat() const;
	double ThanhTien() const;
};

