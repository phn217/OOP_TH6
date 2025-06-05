#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class NhanVien
{
protected:
    string hoten;
    string ngaysinh;
    long long luong;
public:
    virtual void Nhap();
    virtual void Xuat();
    virtual long long TinhLuong() = 0;
    virtual string GetLoai() = 0;
    int GetTuoi();
};

