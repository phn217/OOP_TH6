#pragma once
#include <iostream>
#include <string>
using namespace std;

class GiaoDich
{
protected:
    string mgd;
    string ngaygd;
    long long dongia;
    double dientich;
public:
    virtual void Nhap();
    virtual void Xuat();
    virtual long long ThanhTien() = 0;
    virtual string GetLoai() = 0;
    string GetNgayGD();
};

