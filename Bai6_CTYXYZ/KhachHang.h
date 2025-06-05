#pragma once
#include <iostream>
#include <string>
using namespace std;

class KhachHang
{
protected:
    string ten;
    int hang;
    long long dongia;
public:
    virtual void Nhap();
    virtual void Xuat();
    virtual long long TinhTien() = 0;
};

