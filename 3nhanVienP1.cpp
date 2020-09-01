/*
Mo ta: O mot cong ty ABC co 3 nhan vien: truong phong, ke toan, bao ve.
1. Hay phan tich va mo ta cac thong tin can thiet de quan ly 3 nhan vien.
2. Tinh tien luong hang thang cua 3 nhan vien tren.
3. Viet mot ung dung quan ly 3 nhan vien cua cty ABC.
4. Tinh tong tien luong hang thang cua 3 nhan vien.
5. Thong ke cac nhan vien giam dan theo luong.
*/

#include <iostream>
#include <string>
using namespace std;

// -------------- Truong phong -------------
class truongPhong
{
private:
    string hoTen, gioiTinh, sdt;
    int tuoi, soNgayLam;
    float chieuCao, canNang;

public:
    void nhapThongTin();
    void xuatThongTin();
    float tinhTienLuong();

    truongPhong();
    ~truongPhong();
};

void truongPhong::nhapThongTin()
{
    cin.ignore();
    cout << "Nhap vao ho & ten: ";
    getline(cin, hoTen);
    cout << "Nhap vao gioi tinh: ";
    getline(cin, gioiTinh);
    cout << "Nhap vao SDT: ";
    getline(cin, sdt);
    cout << "Nhap vao tuoi: ";
    cin >> tuoi;
    cout << "Nhap vao chieu cao: ";
    cin >> chieuCao;
    cout << "Nhap vao can nang: ";
    cin >> canNang;
    cout << "So ngay lam: ";
    cin >> soNgayLam;
}

float truongPhong::tinhTienLuong()
{
    return soNgayLam * 1000;
}

void truongPhong::xuatThongTin()
{
    cout << "Ho & ten: " << hoTen << "\t"
         << "tuoi: " << tuoi << endl;
    cout << "SDT: " << sdt << endl;
    cout << "Can nang: " << canNang << "\t"
         << "chieu cao: " << chieuCao << endl;
}

truongPhong::truongPhong()
{
}

truongPhong::~truongPhong()
{
}

// -------------- Ke toan -------------
class keToan
{
private:
    string hoTen, gioiTinh, sdt;
    int tuoi, soNgayLam;
    float chieuCao, canNang;

public:
    void nhapThongTin();
    void xuatThongTin();
    float tinhTienLuong();

    keToan();
    ~keToan();
};

void keToan::nhapThongTin()
{
    cin.ignore();
    cout << "Nhap vao ho & ten: ";
    getline(cin, hoTen);
    cout << "Nhap vao gioi tinh: ";
    getline(cin, gioiTinh);
    cout << "Nhap vao SDT: ";
    getline(cin, sdt);
    cout << "Nhap vao tuoi: ";
    cin >> tuoi;
    cout << "Nhap vao chieu cao: ";
    cin >> chieuCao;
    cout << "Nhap vao can nang: ";
    cin >> canNang;
    cout << "So ngay lam: ";
    cin >> soNgayLam;
}

void keToan::xuatThongTin()
{
    cout << "Ho & ten: " << hoTen << "\t"
         << "tuoi: " << tuoi << endl;
    cout << "SDT: " << sdt << endl;
    cout << "Can nang: " << canNang << "\t"
         << "chieu cao: " << chieuCao << endl;
}

float keToan::tinhTienLuong()
{
    return soNgayLam * 500;
}

keToan::keToan()
{
}

keToan::~keToan()
{
}

// -------------- Bao ve -------------
class baoVe
{
private:
    string hoTen, gioiTinh, sdt;
    int tuoi, soNgayLam;
    float chieuCao, canNang;

public:
    void nhapThongTin();
    void xuatThongTin();
    float tinhTienLuong();

    baoVe(/* args */);
    ~baoVe();
};

void baoVe::nhapThongTin()
{
    cin.ignore();
    cout << "Nhap vao ho & ten: ";
    getline(cin, hoTen);
    cout << "Nhap vao gioi tinh: ";
    getline(cin, gioiTinh);
    cout << "Nhap vao SDT: ";
    getline(cin, sdt);
    cout << "Nhap vao tuoi: ";
    cin >> tuoi;
    cout << "Nhap vao chieu cao: ";
    cin >> chieuCao;
    cout << "Nhap vao can nang: ";
    cin >> canNang;
    cout << "So ngay lam: ";
    cin >> soNgayLam;
}

void baoVe::xuatThongTin()
{
    cout << "Ho & ten: " << hoTen << "\t"
         << "tuoi: " << tuoi << endl;
    cout << "SDT: " << sdt << endl;
    cout << "Can nang: " << canNang << "\t"
         << "chieu cao: " << chieuCao << endl;
}

float baoVe::tinhTienLuong()
{
    return soNgayLam * 200;
}

baoVe::baoVe(/* args */)
{
}

baoVe::~baoVe()
{
}

int main()
{
    truongPhong tp;
    keToan kt;
    baoVe bv;

    cout << "======== NHAP THONG TIN ========" << endl;
    tp.nhapThongTin();
    cout << "\n======== XUAT THONG TIN ========" << endl;
    tp.xuatThongTin();
    cout << "Luong: " << tp.tinhTienLuong() << "$$" << endl;

    cout << "======== NHAP THONG TIN ========" << endl;
    kt.nhapThongTin();
    cout << "\n======== XUAT THONG TIN ========" << endl;
    kt.xuatThongTin();
    cout << "Luong: " << kt.tinhTienLuong() << "$$" << endl;

    cout << "======== NHAP THONG TIN ========" << endl;
    bv.nhapThongTin();
    cout << "\n======== XUAT THONG TIN ========" << endl;
    bv.xuatThongTin();
    cout << "Luong: " << bv.tinhTienLuong() << "$$" << endl;

    system("pause");
    return 0;
}