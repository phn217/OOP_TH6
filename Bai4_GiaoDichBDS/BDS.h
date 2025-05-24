#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class BDS
{
protected:
	string mgd;
	string ngaygd;
	double dongia;
	double dientich;
public:
	void Nhap();
	void Xuat() const;
	double ThanhTien() const;
	string GetNgayGD() const;
};

