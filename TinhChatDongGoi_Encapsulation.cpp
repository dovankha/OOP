#include <iostream>
#include <string>
using namespace std;

class sinhVien
{
    // thuoc tinh
private:
    string ten, MSSV;
    float diemToan, diemLy;
    // phuong thuc
public:
    void nhapThongTin();
    void xuatThongtin();

    // co che dong goi getter & setter
    string getterTen()
    {
        return ten;
    }

    void SetterTen(string TEN)
    {
        ten = TEN;
    }
    
    // ham tao va ham huy
    sinhVien();
    ~sinhVien();
};

int main()
{
    sinhVien kha;
    cout << "========= NHAP THONG TIN ==========" << endl;
    kha.nhapThongTin();
    cout << "\n========= XUAT THONG TIN ==========" << endl;
    kha.xuatThongtin();
    system("pause");
    return 0;
}

void sinhVien::nhapThongTin()
{
    cout << "\nNhap Ho & Ten: ";
    getline(cin, ten);
    cout << "\nNhap MSSV: ";
    getline(cin, MSSV);
    cout << "\nNhap diem toan: ";
    cin >> diemToan;
    cout << "\nNhap diem ly: ";
    cin >> diemLy;
}

void sinhVien::xuatThongtin()
{
    cout << "\nHo & Ten: " << ten << endl;
    cout << "MSSV: " << MSSV << endl;
    cout << "Diem Toan: " << diemToan << endl;
    cout << "Diem ly: " << diemLy << endl;
}

sinhVien::sinhVien()
{
}

sinhVien::~sinhVien()
{
}
