#include "CTYBDS.h"

void main()
{
    CTYBDS cty;
    cout << "===== NHAP DANH SACH GIAO DICH =====\n";
    cty.Nhap();
    cout << "===== XUAT DANH SACH GIAO DICH =====\n";
    cty.Xuat();
    cout << "===== TONG SO LUONG GIAO DICH THEO TUNG LOAI =====\n";
    cty.TongSLGD();
    cout << "\n===== TRUNG BINH THANH TIEN GIAO DICH CHUNG CU =====\n";
    cout << "Trung binh thanh tien giao dich CHCC: " << cty.TinhTBThanhTienCHCC() << " VND\n";
    cout << "\n===== GIAO DICH NHA PHO CO THANH TIEN CAO NHAT =====\n";
    cty.TimGDNP_ThanhTienMax();
    cout << "\n===== DANH SACH GIAO DICH THANG 12 NAM 2024 =====\n";
    cty.XuatDSGD_12_2024();
}
