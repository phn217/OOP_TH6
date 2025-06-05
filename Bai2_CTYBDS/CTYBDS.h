#pragma once
#include "GiaoDich.h"
#include "GiaoDichDat.h"
#include "GiaoDichNP.h"
#include "GiaoDichCHCC.h"

class CTYBDS
{
private:
    GiaoDich** pgd;
    int sl;
public:
    void Nhap();
    void Xuat();
    void TongSLGD();
    long long TinhTBThanhTienCHCC();
    void TimGDNP_ThanhTienMax();
    void XuatDSGD_12_2024();
};

