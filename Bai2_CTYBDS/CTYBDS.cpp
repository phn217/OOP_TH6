#include "CTYBDS.h"

void CTYBDS::Nhap()
{
    int loai;
    do
    {
        cout << "Nhap so luong GD: ";
        cin >> sl;
    } while (sl < 1);
    pgd = new GiaoDich * [sl];
    for (int i = 0; i < sl; i++)
    {
        cout << "====================================\n";
        cout << "Nhap thong tin GD thu " << i + 1 << ":\n";
        do
        {
            cout << "Nhap loai (1 - GDDat | 2 - GDNP | 3 - GDCHCC): ";
            cin >> loai;
        } while (loai < 1 || loai > 3);
        if (loai == 1)
            pgd[i] = new GiaoDichDat;
        else if (loai == 2)
            pgd[i] = new GiaoDichNP;
        else
            pgd[i] = new GiaoDichCHCC;
        pgd[i]->Nhap();
    }
}
void CTYBDS::Xuat()
{
    if (pgd == NULL)
        cout << "Danh sach GD rong\n";
    else
        for (int i = 0; i < sl; i++)
            pgd[i]->Xuat();
}
void CTYBDS::TongSLGD()
{
    int dat = 0, np = 0, chcc = 0;
    for (int i = 0; i < sl; i++)
    {
        string loai = pgd[i]->GetLoai();
        if (loai == "D")
            dat++;
        else if (loai == "NP")
            np++;
        else if (loai == "CHCC")
            chcc++;
    }
    cout << "So luong GDDat: " << dat << endl;
    cout << "So luong GDNP: " << np << endl;
    cout << "So luong GDCHCC: " << chcc << endl;
}
long long CTYBDS::TinhTBThanhTienCHCC()
{
    long long tong = 0;
    int dem = 0;
    for (int i = 0; i < sl; i++)
    {
        if (pgd[i]->GetLoai() == "CHCC")
        {
            tong += pgd[i]->ThanhTien();
            dem++;
        }
    }
    if (dem == 0)
        return 0;
    return tong / dem;
}
void CTYBDS::TimGDNP_ThanhTienMax()
{
    int tienmax = -1, vt = -1;
    for (int i = 0; i < sl; i++)
        if (pgd[i]->GetLoai() == "NP")
        {
            vt = i;
            tienmax = ((GiaoDichNP*)(pgd[i]))->ThanhTien();
            break;
        }
    if (vt != -1)
    {
        for (int i = vt + 1; i < sl; i++)
            if (pgd[i]->GetLoai() == "NP" && ((GiaoDichNP*)(pgd[i]))->ThanhTien() > tienmax)
                tienmax = ((GiaoDichNP*)(pgd[i]))->ThanhTien();
        for (int i = 0; i < sl; i++)
            if (pgd[i]->GetLoai() == "NP" && ((GiaoDichNP*)(pgd[i]))->ThanhTien() == tienmax)
                pgd[i]->Xuat();
    }
    else
        cout << "Truong khong co SVCQ\n";
}
void CTYBDS::XuatDSGD_12_2024()
{
    bool kt = false;
    cout << "Danh sach GD trong thang 12 nam 2024:\n";
    for (int i = 0; i < sl; i++)
    {
        string ngay = pgd[i]->GetNgayGD();
        if (ngay.length() >= 10 &&
            ngay.substr(3, 2) == "12" &&
            ngay.substr(6, 4) == "2024")
        {
            pgd[i]->Xuat();
            kt = true;
        }
    }
    if (!kt)
    {
        cout << "Khong co GD nao trong thang 12 nam 2024\n";
    }
}