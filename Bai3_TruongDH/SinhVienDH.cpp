#include "SinhVienDH.h"

void SinhVienDH::Nhap()
{
    SinhVien::Nhap();
    cin.ignore();
    cout << "Nhap ten luan van: ";
    getline(cin, luanvan);
    do
    {
        cout << "Nhap diem luan van (tu 0 den 10): ";
        cin >> dlv;
    } while (dlv < 0 || dlv>10);
}
void SinhVienDH::Xuat()
{
    SinhVien::Xuat();
    cout << "\nTen luan van: " << luanvan;
    cout << "\nDiem luan van: " << dlv << endl;
}
bool SinhVienDH::XetTotNghiep()
{
    if (tinchi >= 170 && dtb >= 5 && dlv >= 5)
        return true;
    else
        return false;
}