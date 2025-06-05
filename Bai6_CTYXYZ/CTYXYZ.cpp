#include "CTYXYZ.h"

void CTYXYZ::Nhap()
{
    int x = 0, y = 0, z = 0;
    cout << "Nhap so luong khach hang loai A (binh thuong): ";
    cin >> x;
    cout << "Nhap so luong khach hang loai B (than thiet): ";
    cin >> y;
    cout << "Nhap so luong khach hang loai C (dac biet): ";
    cin >> z;
    sl = x + y + z;
    pkh = new KhachHang * [sl];
    cout << "--------------------------------------------------\n";
    int index = 0;
    for (int i = 0; i < x; i++, index++)
    {
        cout << "Nhap thong tin KH loai A thu " << i + 1 << ": \n";
        pkh[index] = new KHLoaiA;
        pkh[index]->Nhap();
    }
    for (int i = 0; i < y; i++, index++)
    {
        cout << "Nhap thong tin KH loai B thu " << i + 1 << ": \n";
        pkh[index] = new KHLoaiB;
        pkh[index]->Nhap();
    }
    for (int i = 0; i < z; i++, index++)
    {
        cout << "Nhap thong tin KH loai C thu " << i + 1 << ": \n";
        pkh[index] = new KHLoaiC;
        pkh[index]->Nhap();
    }

}
void CTYXYZ::Xuat()
{
    if (pkh == NULL || sl == 0)
        cout << "Danh sach KH rong\n";
    else
        for (int i = 0; i < sl; i++)
            pkh[i]->Xuat();
}
long long CTYXYZ::TongTien()
{
    long long tong = 0;
    for (int i = 0; i < sl; i++)
        tong += pkh[i]->TinhTien();
    return tong;
}