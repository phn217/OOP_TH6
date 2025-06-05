#pragma once
#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
protected:
    string ma;
    string ten;
    int tuoi;
    string sdt;
    string email;
    long long luongcb;
public:
    virtual void Nhap();
    virtual void Xuat();
    virtual long long TinhLuong() = 0;
};

