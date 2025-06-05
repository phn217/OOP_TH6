#pragma once
#include "NhanVien.h"

class LapTrinhVien:public NhanVien
{
private:
    double ot;
public:
    void Nhap();
    void Xuat();
    long long TinhLuong();
};

