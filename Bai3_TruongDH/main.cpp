#include "TruongDH.h"

void main()
{
    TruongDH tr;
    tr.Nhap();
    cout << "======= DANH SACH SINH VIEN CUA TRUONG DAI HOC =======\n";
    tr.Xuat();
    cout << "======== DANH SACH SV DU DIEU KIEN TOT NGHIEP =======\n";
    tr.XuatDSSVDuDKTotNghiep();
    cout << "======== DANH SACH SV KHONG DU DIEU KIEN TOT NGHIEP =======\n";
    tr.XuatDSSVKhongDuDKTotNghiep();
    cout << "======= SINH VIEN DAI HOC CO DTB CAO NHAT =======\n";
    tr.TimSVDH_DTBMax();
    cout << "======= SINH VIEN CAO DANG CO DTB CAO NHAT =======\n\n";
    tr.TimSVCD_DTBMax();
    tr.DemSLSVKhongDuDKTotNghiep();
}