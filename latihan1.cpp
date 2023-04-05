#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nim;
    string nama;
    string alamat;
    int umur;
};

int main() {
    Mahasiswa mhs, mhs2;

    mhs.nim = 202101400019;
    mhs.umur = 20;
    mhs.nama = "Adrian Mulya";
    mhs.alamat = "Wonosobo";

    cout << "Masukan NIM : ";
    cin >> mhs2.nim;
    cout << "Masukan Umur : ";
    cin >> mhs2.nim;
    cout << "Masukan Nama : ";
    cin >> mhs2.nama; 
    cout << "Masukan Alamat : ";
    cin >> mhs2.alamat;

    cout << "\n\nNIM : " << mhs2.nim;
    cout << "\nUmur : " << mhs2.umur;
    cout << "\nNama : " << mhs2.nama;
    cout << "\nAlamat : " << mhs2.alamat;
}

