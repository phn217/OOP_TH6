#pragma once
#include "BDS.h"

class GiaoDichCHCC :public BDS
{
private:
	string macan;
	int tang;
public:
	void Nhap();
	void Xuat() const;
	double ThanhTien() const;
};

