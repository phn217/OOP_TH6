#include"CTYXYZ.h"

void main()
{
    CTYXYZ ct;
    ct.Nhap();
    cout << "\n========== DANH SACH KHACH HANG ==========\n";
    ct.Xuat();
    cout << "========== TONG TIEN CONG TY THU: " << ct.TongTien() << " VND =========\n";
}