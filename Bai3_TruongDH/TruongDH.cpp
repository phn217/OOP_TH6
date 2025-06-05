#include "TruongDH.h"

void TruongDH::Nhap()
{
    int loai;
    do
    {
        cout << "Nhap so luong SV: ";
        cin >> sl;
    } while (sl < 1);
    psv = new SinhVien * [sl];
    for (int i=0; i < sl; i++)
    {
        cout << "------------------------------------------\n";
        cout << "Nhap thong tin SV thu " << i + 1 << ": \n";
        do
        {
            cout << "Nhap loai (1 - SVCD | 2 - SVDH): ";
            cin >> loai;
        } while (loai < 1 || loai>2);
        if (loai == 1)
            psv[i] = new SinhVienCD;
        else
            psv[i] = new SinhVienDH;
        psv[i]->Nhap();
    }
}
void TruongDH::Xuat()
{
    if (psv == NULL)
        cout << "Danh sach SV rong\n";
    else
        for (int i = 0; i < sl; i++)
            psv[i]->Xuat();
}
void TruongDH::XuatDSSVDuDKTotNghiep()
{
    int dem = 0;
    for (int i = 0; i < sl; i++)
        if (psv[i]->XetTotNghiep())
        {
            psv[i]->Xuat();
            dem++;
        }
    if (dem == 0)
        cout << "Khong co SV nao du dieu kien tot nghiep\n";
}
void TruongDH::XuatDSSVKhongDuDKTotNghiep()
{
    int dem = 0;
    for (int i=0; i < sl; i++)
        if (!(psv[i]->XetTotNghiep()))
        {
            psv[i]->Xuat();
            dem++;
        }
    if (dem == 0)
        cout << "Tat ca SV deu du dieu kien tot nghiep\n";
}
void TruongDH::TimSVDH_DTBMax() {
    double dtbmax = -1;
    for (int i = 0; i < sl; i++) {
        if (dynamic_cast<SinhVienDH*>(psv[i])) 
        {
            double dtb = ((SinhVienDH*)psv[i])->GetDTB();
            if (dtb > dtbmax) {
                dtbmax = dtb;
            }
        }
    }
    if (dtbmax == -1) {
        cout << "Truong khong co SVDH\n";
        return;
    }
    for (int i = 0; i < sl; i++) {
        if (dynamic_cast<SinhVienDH*>(psv[i]) && ((SinhVienDH*)psv[i])->GetDTB() == dtbmax) {
            psv[i]->Xuat();
        }
    }
}
void TruongDH::TimSVCD_DTBMax() {
    double dtbmax = -1;
    for (int i = 0; i < sl; i++) {
        if (dynamic_cast<SinhVienCD*>(psv[i]))
        {
            double dtb = ((SinhVienCD*)psv[i])->GetDTB();
            if (dtb > dtbmax) {
                dtbmax = dtb;
            }
        }
    }
    if (dtbmax == -1) {
        cout << "Truong khong co SVCD\n";
        return;
    }
    for (int i = 0; i < sl; i++) {
        if (dynamic_cast<SinhVienCD*>(psv[i]) && ((SinhVienCD*)psv[i])->GetDTB() == dtbmax) {
            psv[i]->Xuat();
        }
    }
}
void TruongDH::DemSLSVKhongDuDKTotNghiep()
{
    int cd = 0, dh = 0;
    for (int i = 0; i < sl; i++)
        if (dynamic_cast<SinhVienCD*>(psv[i]) && !((SinhVien*)psv[i]->XetTotNghiep()))
            cd++;
    cout << "So luong SVCD khong du dieu kien tot nghiep la " << cd << endl;
    for (int i = 0; i < sl; i++)
        if (dynamic_cast<SinhVienDH*>(psv[i]) && !((SinhVien*)psv[i]->XetTotNghiep()))
            dh++;
    cout << "So luong SVDH khong du dieu kien tot nghiep la " << dh << endl;
}