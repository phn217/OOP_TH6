#pragma once
#include "KhachHang.h"
#include "KHLoaiA.h"
#include "KHLoaiB.h"
#include "KHLoaiC.h"

class CTYXYZ
{
private:
    KhachHang** pkh;
    int sl;
public:
    void Nhap();
    void Xuat();
    long long TongTien();
};

