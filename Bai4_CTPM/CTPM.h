#pragma once
#include "NhanVien.h"
#include "LapTrinhVien.h"
#include "KiemChungVien.h"

class CTPM
{
private:
    NhanVien** pnv;
    int sl;
public:
    void Nhap();
    void Xuat();
    void XuatDSNV_LuongThapHonTB();
    void TimNV_LuongMax();
    void TimNV_LuongMin();
    void TimLTV_LuongMax();
    void TimKCV_LuongMin();
};

