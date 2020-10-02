/*
===== TINH CHAT KE THUA - INHERITANCE ======
- Trao doi thong tin tu the he nay sang the he khac.
- Lop cha co thi lop con cung co nhung thuoc tinh do, o tam vuc protected.
- Mo rong thuoc tinh o lop con ma khong can dinh nghia lai.
*/

#include <iostream>
#include <string>
using namespace std;

class nhanVien
{
protected:
    string hoTen, msnv, queQuan;
    int tuoi;

public:
    void nhapThongTin();
    void xuatThongTin();
};

class truongPhong : public nhanVien
{
private:
    float heSoLuong;

public:
    truongPhong(/* args */);
    ~truongPhong();
};

class keToan : public nhanVien
{
private:
    int soNgayLam;

public:
    keToan(/* args */);
    ~keToan();
};

class baoVe : public nhanVien
{
private:
    int soNgayLam;

public:
    baoVe(/* args */);
    ~baoVe();
};

int main()
{
    system("pause");
    return 0;
}