#pragma once
#include <iostream>
#include <string>
using namespace std;

class SinhVien
{
protected:
    string mssv;
    string hoten;
    string diachi;
    int tinchi;
    double dtb;
public:
    virtual void Nhap();
    virtual void Xuat();
    double GetDTB();
    virtual bool XetTotNghiep() = 0;
};

