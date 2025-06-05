#pragma once
#include "NhanVien.h"

class NhanVienVP: public NhanVien
{
private:
    int dilam;
public:
    void Nhap();
    void Xuat();
    long long TinhLuong();
    string GetLoai();
};

