#pragma once
#include "NhanVien.h"
#include "NhanVienSX.h"
#include "NhanVienVP.h"

class CongTy
{
private:
    NhanVien** pnv;
    int sl;
public:
    void Nhap();
    void Xuat();
    long long TongLuong();
    void TimNVSX_LuongMin();
    void TimNVVP_TuoiMax();
};

