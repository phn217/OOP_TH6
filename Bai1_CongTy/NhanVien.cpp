#include "NhanVien.h"

void NhanVien::Nhap()
{
    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, hoten);
    cout << "Nhap ngay sinh (dd/mm/yyyy): ";
    getline(cin, ngaysinh);
}
void NhanVien::Xuat()
{
    cout << "Ho ten: " << hoten << "\tNgay sinh: " << ngaysinh;
}
int NhanVien::GetTuoi() {
    int namsinh = stoi(ngaysinh.substr(6, 4));
    time_t now = time(0);
    tm ltm;
    localtime_s(&ltm, &now);
    int namhientai = 1900 + ltm.tm_year;
    return namhientai - namsinh;
}


