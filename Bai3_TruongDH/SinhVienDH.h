#pragma once
#include "SinhVien.h"

class SinhVienDH:public SinhVien
{
private:
    string luanvan;
    double dlv;
public:
    void Nhap();
    void Xuat();
    bool XetTotNghiep();
};

