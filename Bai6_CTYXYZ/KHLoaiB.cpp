#include "KHLoaiB.h"
#include <algorithm>

void KHLoaiB::Nhap()
{
    KhachHang::Nhap();
    cout << "Nhap so nam than thiet: ";
    cin >> namtt;
}
long long KHLoaiB::TinhTien()
{
    return hang * dongia * (1.1 - min(namtt * 0.05, 0.5));
}