#pragma once
#include "SinhVien.h"

class SinhVienCD:public SinhVien
{
private:
    double dtn;
public:
    void Nhap();
    void Xuat();
    bool XetTotNghiep();
};

