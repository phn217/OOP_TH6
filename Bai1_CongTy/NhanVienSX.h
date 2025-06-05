#pragma once
#include "NhanVien.h"

class NhanVienSX:public NhanVien
{
protected:
    long long luongcb;
    long long sp;
public:
    void Nhap();
    void Xuat();
    long long TinhLuong();
    string GetLoai();
};

