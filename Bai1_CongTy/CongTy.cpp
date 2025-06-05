#include "CongTy.h"
#include <limits>

void CongTy::Nhap()
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
        cout << "==================================\n";
        cout << "Nhap thong tin NV thu " << i + 1 << ":\n";
        do
        {
            cout << "Nhap loai (1 - NVVP | 2 - NVSX): ";
            cin >> loai;
        } while (loai < 1 || loai>2);
        if (loai == 1)
            pnv[i] = new NhanVienVP;
        else
            pnv[i] = new NhanVienSX;
        pnv[i]->Nhap();
    }
}
void CongTy::Xuat()
{
    if (pnv == NULL)
        cout << "Danh sach NV rong\n";
    else
        for (int i = 0; i < sl; i++)
            pnv[i]->Xuat();
}
long long CongTy::TongLuong()
{
    long long tong = 0;
    for (int i = 0; i < sl; i++)
        tong += pnv[i]->TinhLuong();
    return tong;
}
void CongTy::TimNVSX_LuongMin()
{
    long long luongmin = -1, vt = -1;
    for (int i = 0; i < sl; i++)
        if (pnv[i]->GetLoai() == "SX")
        {
            vt = i;
            luongmin = ((NhanVienSX*)(pnv[i]))->TinhLuong();
            break;
        }
    if (vt != -1)
    {
        for (int i = vt + 1; i < sl; i++)
            if (pnv[i]->GetLoai() == "SX" && ((NhanVienSX*)(pnv[i]))->TinhLuong() < luongmin)
                luongmin = ((NhanVienSX*)(pnv[i]))->TinhLuong();
        for (int i = 0; i < sl; i++)
            if (pnv[i]->GetLoai() == "SX" && ((NhanVienSX*)(pnv[i]))->TinhLuong() == luongmin)
                pnv[i]->Xuat();
    }
    else
        cout << "Cong ty khong co NVSX\n";
}
void CongTy::TimNVVP_TuoiMax()
{
    int tuoimax = -1, vt = -1;
    for (int i = 0; i < sl; i++)
        if (pnv[i]->GetLoai() == "VP")
        {
            vt = i;
            tuoimax = ((NhanVienVP*)(pnv[i]))->GetTuoi();
            break;
        }
    if (vt != -1)
    {
        for (int i = vt + 1; i < sl; i++)
            if (pnv[i]->GetLoai() == "VP" && ((NhanVienVP*)(pnv[i]))->GetTuoi() > tuoimax)
                tuoimax = ((NhanVienVP*)(pnv[i]))->GetTuoi();
        for (int i = 0; i < sl; i++)
            if (pnv[i]->GetLoai() == "VP" && ((NhanVienVP*)(pnv[i]))->GetTuoi() == tuoimax)
                pnv[i]->Xuat();
    }
    else
        cout << "Cong ty khong co NVVP\n";
}

