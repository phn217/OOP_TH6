#pragma once
#include "BDS.h"

class GiaoDichDat :public BDS
{
private:
	int loaidat;
public:
	void Nhap();
	void Xuat() const;
	double ThanhTien() const;
};

