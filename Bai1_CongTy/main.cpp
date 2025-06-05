#include "CongTy.h"

void main()
{
    CongTy cty;

    cout << "=== NHAP THONG TIN DANH SACH NHAN VIEN CUA CONG TY ===\n";
    cty.Nhap();

    cout << "\n========== DANH SACH NHAN VIEN ==========\n";
    cty.Xuat();

    cout << "\n========== TONG LUONG CONG TY: " << cty.TongLuong() << " VND ==========\n";

    cout << "\n========== NVSX CO LUONG THAP NHAT ==========\n";
    cty.TimNVSX_LuongMin();

    cout << "\n========== NVVP CO TUOI CAO NHAT ==========\n";
    cty.TimNVVP_TuoiMax();
}