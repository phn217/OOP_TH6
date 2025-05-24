#pragma once
#include "GiaoDich.h"

class GiaoDichTienTe :public GiaoDich
{
private:
	double tigia;
	int loaitien;
public:
	void Nhap();
	void Xuat() const;
	double ThanhTien() const;
	int GetLoai() const;
};
