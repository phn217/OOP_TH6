#pragma once
#include "SinhVien.h"
#include "SinhVienCD.h"
#include "SinhVienDH.h"

class TruongDH
{
private:
    SinhVien** psv;
    int sl;
public:
    void Nhap();
    void Xuat();
    void XuatDSSVDuDKTotNghiep();
    void XuatDSSVKhongDuDKTotNghiep();
    void TimSVDH_DTBMax();
    void TimSVCD_DTBMax();
    void DemSLSVKhongDuDKTotNghiep();
};

