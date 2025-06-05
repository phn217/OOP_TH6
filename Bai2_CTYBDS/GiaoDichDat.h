#pragma once
#include "GiaoDich.h"

class GiaoDichDat: public GiaoDich
{
private:
    int loaidat;
public:
    void Nhap();
    void Xuat();
    long long ThanhTien();
    string GetLoai();
};

