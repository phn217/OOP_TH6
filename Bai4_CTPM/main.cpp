#include "CTPM.h"

void main()
{
    CTPM hc;
    hc.Nhap();
    cout << "========== DANH SACH NHAN VIEN CUA CONG TY ==========\n";
    hc.Xuat();
    cout << "========== DANH SACH NHAN VIEN CO LUONG THAP HON TRUNG BINH ==========\n";
    hc.XuatDSNV_LuongThapHonTB();
    cout << "========== NHAN VIEN CO LUONG CAO NHAT CUA CONG TY ==========\n";
    hc.TimNV_LuongMax();
    cout << "========== NHAN VIEN CO LUONG THAP NHAT CUA CONG TY ==========\n";
    hc.TimNV_LuongMin();
    cout << "========== LAP TRINH VIEN CO LUONG CAO NHAT CUA CONG TY ==========\n";
    hc.TimLTV_LuongMax();
    cout << "========== KIEM CHUNG VIEN CO LUONG THAP NHAT CUA CONG TY ==========\n";
    hc.TimKCV_LuongMin();
}