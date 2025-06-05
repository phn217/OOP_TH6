#include "SinhVienCD.h"

void SinhVienCD::Nhap()
{
    SinhVien::Nhap();
    do
    {
        cout << "Nhap diem thi tot nghiep (tu 0 den 10): ";
        cin >> dtn;
    } while (dtn < 0 || dtn>10);
}
void SinhVienCD::Xuat()
{
    SinhVien::Xuat();
    cout << "\nDiem tot nghiep: " << dtn << endl;
}
bool SinhVienCD::XetTotNghiep()
{
    if (tinchi >= 120 && dtb >= 5 && dtn >= 5)
        return true;
    else
        return false;
}