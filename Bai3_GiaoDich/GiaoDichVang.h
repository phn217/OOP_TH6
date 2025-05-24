#pragma once
#include "GiaoDich.h"

class GiaoDichVang :public GiaoDich
{
private:
	string loaivang;
public:
	void Nhap();
	void Xuat() const;
	double ThanhTien() const;
};

