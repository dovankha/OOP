#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class XE
{
protected:
    string tenNguoiThue;
    float soGioThue;

public:
    void nhapThongTin()
    {
        while (getchar() != '\n')
            ;
        cout << "\nNhap ten nguoi thue: ";
        getline(cin, tenNguoiThue);
        cout << "\nNhap so gio thue: ";
        cin >> soGioThue;
    }
    void xuatThongTin()
    {
        cout << "\nHo ten nguoi thue: " << tenNguoiThue << endl;
        cout << "\nSo gio thue: " << soGioThue << endl;
    }
};

class XEDAP : public XE
{
private:
public:
    float tinhTienThueXe()
    {
        return 10000 + ((soGioThue - 1) * 8000);
    }
};

class XEMAY : public XE
{
private:
    int loaiXe;
    string bienSo;

public:
    void nhapThongTin()
    {
        XE::nhapThongTin();
        cout << "\nNhap loai xe can thue (xe so, xe tay ga, xe tay con): ";
        cin >> loaiXe;
        while (getchar() != '\n')
            ;
        cout << "\nNhap bien so xe: ";
        getline(cin, bienSo);
    }
    void xuatThongTin()
    {
        XE::xuatThongTin();
        cout << "\nLoai xe: " << loaiXe << endl;
        cout << "\nBien so xe: " << bienSo << endl;
    }
    float tinhTienThueXe()
    {
        float s = 0;
        if (loaiXe == 150)
            s = 150000;
        else if (loaiXe == 200)
            s = 200000;
        else
            s = 250000;
        return s + ((soGioThue - 1) * 100000);
    }

    int Getter_LoaiXe()
    {
        return loaiXe;
    }
    void Setter_LoaiXe(int LOAIXE)
    {
        loaiXe = LOAIXE;
    }
};

void xuatThongTinAllXe(XEDAP dsXeDap[], int n, XEMAY dsXeMay[], int m)
{
    int dem = 1;
    cout << "\n\t====== DANH SACH THUE XE DAP=======" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\n\t=== THONG TIN XE DAP THU " << dem++ << endl;
        dsXeDap[i].xuatThongTin();
        cout << "\nTong tien thue xe: " << (size_t)dsXeDap[i].tinhTienThueXe();
    }

    cout << "\n\t====== DANH SACH THUE XE MAY=======" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\n\t=== THONG TIN XE MAY THU " << dem++ << endl;
        dsXeMay[i].xuatThongTin();
        cout << "\nTong tien thue xe: " << (size_t)dsXeMay[i].tinhTienThueXe();
    }
}

float tinhTongTienThueXe(XEDAP dsXeDap[], int n, XEMAY dsXeMay[], int m)
{
    float tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += dsXeDap[i].tinhTienThueXe();
    }
    for (int i = 0; i < n; i++)
    {
        tong += dsXeMay[i].tinhTienThueXe();
    }
    return tong;
}

void MENU(XEDAP dsXeDap[], int n, XEMAY dsXeMay[], int m)
{
    int luaChon;
    while (true)
    {
        system("cls");
        cout << "\n\n\t\t====== QUAN LY XE ======";
        cout << "\n\t1. Nhap danh sach thue xe dap va xe may";
        cout << "\n\t2. Xuat tat ca thong tin thue xe";
        cout << "\n\t3. Tinh tong so tien cho thue xe dap va xe may";
        cout << "\n\t4. Xuat tat ca cac thong tin lien quan den viec cho thue xe dap";
        cout << "\n\t5. Tinh tong so tien cho thue xe may loai 250 phan khoi";
        cout << "\n\t0. Ket thuc";
        cout << "\n\t\t========= END =========";

        cout << "\nNhap lua chon: ";
        cin >> luaChon;

        if (luaChon == 1)
        {
            int chon;
            while (true)
            {
                system("cls");
                cout << "\n1. Thue XE DAP";
                cout << "\n2. Thue XE MAY";
                cout << "\n0. Ket thuc";

                cout << "\nNhap loai xe muon thue: ";
                cin >> chon;
                if (chon == 1)
                {
                    XEDAP x;
                    cout << "\n\n\t\t NHAP THONG TIN THUE XE DAP\n";
                    x.nhapThongTin();
                    dsXeDap[n] = x;
                    n++;
                }
                else if (chon == 2)
                {
                    XEMAY x;
                    cout << "\n\n\t\t NHAP THONG TIN THUE XE MAY\n";
                    x.nhapThongTin();
                    dsXeMay[m] = x;
                    m++;
                }
                else
                {
                    break;
                }
            }
        }
        else if (luaChon == 2)
        {
            xuatThongTinAllXe(dsXeDap, n, dsXeMay, m);
            getch();
        }
        else if (luaChon == 3)
        {
            cout << "\n\n\t\tTONG TIEN THUE XE: " << (size_t)tinhTongTienThueXe(dsXeDap, n, dsXeMay, m);
            getch();
        }
        else if (luaChon == 4)
        {
            cout << "\n\n\t\t DANH SACH THUE XE DAP\n";
            for (int i = 0; i < n; i++)
            {
                cout << "\n\tTHONG TIN THUE XE DAP THU " << i + 1 << endl;
                dsXeDap[i].xuatThongTin();
                cout << "\nTien thue: " << (size_t)dsXeDap[i].tinhTienThueXe();
            }
            getch();
        }
        else if (luaChon == 5)
        {
            int dem = 0;
            cout << "\n\n\t\t DANH SACH THUE XE MAY LOAI 250 PHAN KHOI\n";
            for (int i = 0; i < m; i++)
            {
                if (dsXeMay[i].Getter_LoaiXe() == 250)
                {
                    cout << "\n\tTHONG TIN THUE MAY THU " << ++dem << endl;
                    dsXeMay[i].xuatThongTin();
                    cout << "\nTien thue: " << (size_t)dsXeMay[i].tinhTienThueXe();
                }
            }
            getch();
        }
        else
            break;
    }
}

int main()
{
    XEDAP dsXeDap[100];
    int n = 0;
    XEMAY dsXeMay[100];
    int m = 0;
    MENU(dsXeDap, n, dsXeMay, m);


    getch();
    return 0;
}