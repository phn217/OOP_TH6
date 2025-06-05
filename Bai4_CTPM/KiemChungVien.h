#pragma once
#include "NhanVien.h"

class KiemChungVien:public NhanVien
{
private:
    int loiph;
public:
    void Nhap();
    void Xuat();
    long long TinhLuong();
};

