#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class GiaoDich
{
protected:
	string mgd;
	string ngaygd;
	double dongia;
	int soluong;
public:
	void Nhap();
	void Xuat() const;
	double ThanhTien() const;
};