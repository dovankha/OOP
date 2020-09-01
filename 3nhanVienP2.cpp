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

    baoVe();
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

baoVe::baoVe()
{
}

baoVe::~baoVe()
{
}

// ------------ MENU ----------------
void menu(truongPhong dstp[], keToan dskt[], baoVe dsbv[], int n, int m, int l) // n, m, l: tuong ung voi dsnv cua truong phong, ke toan, bao ve.
{
    while (true)
    {
        int luaChon;
        cout << "\n\n\t\t ====== CHUONG TRINH QUAN LI ======";
        cout << "\n1. Nhap thong tin nhan vien TRUONG PHONG";
        cout << "\n2. Nhap thong tin nhan vien KE TOAN";
        cout << "\n3. Nhap thong tin nhan vien BAO VE";
        cout << "\n4. Xuat danh sach thong tin nhan vien TRUONG PHONG";
        cout << "\n5. Xuat danh sach thong tin nhan vien KE TOAN";
        cout << "\n6. Xuat danh sach thong tin nhan vien BAO VE";
        cout << "\n0. KET THUC";
        cout << "\n\t\t ============= END =================";

        cout << "\nNhap lua chon: ";
        cin >> luaChon;
        if (luaChon < 0 || luaChon > 6)
        {
            cout << "\nLUA CHON KHONG HOP LE. XIN KIEM TRA LAI";
        }
        else if (luaChon == 0)
        {
            break;
        }
        else if (luaChon == 1)
        {
            truongPhong tp; // doi tuong gia tri
            cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN TRUONG PHONG\n";
            tp.nhapThongTin();

            // them doi truong gia tri "truong phong" vao "danh sach truong phong"
            dstp[n] = tp;
            n++;
        }
        else if (luaChon == 2)
        {
            keToan kt; // doi tuong gia tri
            cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN KE TOAN\n";
            kt.nhapThongTin();

            // them doi truong gia tri "ke toan" vao "danh sach ke toan"
            dskt[m] = kt;
            m++;
        }
        else if (luaChon == 3)
        {
            baoVe bv; // doi tuong gia tri
            cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN BAO VE\n";
            bv.nhapThongTin();

            // them doi truong gia tri "bao ve" vao "danh sach bao ve"
            dsbv[l] = bv;
            l++;
        }
        else if (luaChon == 4)
        {
            cout << "\n\n\t\t======== DANH SACH THONG TIN TRUONG PHONG ========\n";
            for (int i = 0; i < n; i++)
            {
                cout << "\n\n\t THONG TIN NHAN VIEN TRUONG PHONG THU " << i + 1 << endl;
                dstp[i].xuatThongTin();
            }
            system("pause");
        }
        else if (luaChon == 5)
        {
            cout << "\n\n\t\t======== DANH SACH THONG TIN NHAN VIEN KE TOAN ========\n";
            for (int i = 0; i < m; i++)
            {
                cout << "\n\n\t THONG TIN NHAN VIEN KE TOAN THU " << i + 1 << endl;
                dskt[i].xuatThongTin();
            }
            system("pause");
        }
        else if (luaChon == 6)
        {
            cout << "\n\n\t\t======== DANH SACH THONG TIN NHAN VIEN BAO VE ========\n";
            for (int i = 0; i < l; i++)
            {
                cout << "\n\n\t THONG TIN NHAN VIEN BAO VE " << i + 1 << endl;
                dsbv[i].xuatThongTin();
            }
            system("pause");
        }
    }
}

int main()
{
    truongPhong dstp[100]; // mang mot chieu cac nhan vien truong phong. 1 nhan vien (phan tu) la 1 doi tuong gia tri
    keToan dskt[100];
    baoVe dsbv[100];
    int sltp = 0, slkt = 0, slbv = 0; // so luong nhan vien

    menu(dstp, dskt, dsbv, sltp, slkt, slbv);

    system("pause");
    return 0;
}