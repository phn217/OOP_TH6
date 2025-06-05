#include "CTPM.h"

void CTPM::Nhap()
{
    int loai;
    do
    {
        cout << "Nhap so luong NV: ";
        cin >> sl;
    } while (sl < 1);
    pnv = new NhanVien * [sl];
    for (int i = 0; i < sl; i++)
    {
        cout << "------------------------------------------\n";
        cout << "Nhap thong tin NV thu " << i + 1 << ": \n";
        do
        {
            cout << "Nhap loai (1 - LTV | 2 - KCV): ";
            cin >> loai;
        } while (loai < 1 || loai>2);
        if (loai == 1)
            pnv[i] = new LapTrinhVien;
        else
            pnv[i] = new KiemChungVien;
        pnv[i]->Nhap();
    }
}
void CTPM::Xuat()
{
    if (pnv == NULL)
        cout << "Danh sach NV rong\n";
    else
        for (int i = 0; i < sl; i++)
            pnv[i]->Xuat();
}
void CTPM::XuatDSNV_LuongThapHonTB()
{
    long long luongtb = 0;
    int dem = 0;
    for (int i = 0; i < sl; i++)
    {
        luongtb += pnv[i]->TinhLuong();
        dem++;
    }
    if (dem > 0)
        luongtb /= dem;
    else
    {
        cout << "Cong ty khong co NV\n";
        return;
    }
    cout << "Luong TB: " << luongtb << " VND\n";
    for (int i = 0; i < sl; i++)
        if (pnv[i]->TinhLuong() < luongtb)
            pnv[i]->Xuat();
}
void CTPM::TimNV_LuongMax()
{
    if (sl == 0)
    {
        cout << "Cong ty khong co NV\n";
        return;
    }
    long long luongmax = -1;
    for (int i = 0; i < sl; i++) {
        long long luong = pnv[i]->TinhLuong();
        if (luong > luongmax)
            luongmax = luong;
    }
    for (int i = 0; i < sl; i++) 
        if (pnv[i]->TinhLuong() == luongmax) 
            pnv[i]->Xuat();
}
void CTPM::TimNV_LuongMin()
{
    if (sl == 0)
    {
        cout << "Cong ty khong co NV\n";
        return;
    }
    long long luongmin = pnv[0]->TinhLuong(); 
    for (int i = 1; i < sl; i++) { 
        long long luong = pnv[i]->TinhLuong();
        if (luong < luongmin)
            luongmin = luong;
    }
    for (int i = 0; i < sl; i++)
        if (pnv[i]->TinhLuong() == luongmin)
            pnv[i]->Xuat();
}
void CTPM::TimLTV_LuongMax()
{
    long long luongmax = -1;
    for (int i = 0; i < sl; i++) {
        if (dynamic_cast<LapTrinhVien*>(pnv[i]))
        {
            long long luong = ((LapTrinhVien*)pnv[i])->TinhLuong();
            if (luong > luongmax) {
                luongmax = luong;
            }
        }
    }
    if (luongmax == -1) {
        cout << "Cong ty khong co LTV\n";
        return;
    }
    for (int i = 0; i < sl; i++) {
        if (dynamic_cast<LapTrinhVien*>(pnv[i]) && ((LapTrinhVien*)pnv[i])->TinhLuong() == luongmax) {
            pnv[i]->Xuat();
        }
    }
}
void CTPM::TimKCV_LuongMin()
{
    long long luongmin = pnv[0]->TinhLuong();
    for (int i = 1; i < sl; i++) 
        if (dynamic_cast<KiemChungVien*>(pnv[i]))
        {
            long long luong = ((KiemChungVien*)pnv[i])->TinhLuong();
            if (luong < luongmin) 
                luongmin = luong;
        }
    if (luongmin == pnv[0]->TinhLuong()) 
    {
        cout << "Cong ty khong co KCV\n";
        return;
    }
    for (int i = 0; i < sl; i++) {
        if (dynamic_cast<KiemChungVien*>(pnv[i]) && ((KiemChungVien*)pnv[i])->TinhLuong() == luongmin) {
            pnv[i]->Xuat();
        }
    }
}