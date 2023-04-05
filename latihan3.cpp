#include <iostream>
using namespace std;

struct DetailAlamat
{
    char desa[20];
    char kota[20];

};

struct Mahasiswa
{
    char nim[12];
    char nama[20];
    DetailAlamat alamat;
    int umur;
};

int main() {
    Mahasiswa mhs[3];

    for (int i = 0; i < 3; i++){
        cout << "masukan Nim : ";
        cin.getline(mhs[i].nim, 12);
        cout << "Masukan Umur : ";
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');
        cout << "Masukan Nama : ";
        cin.getline (mhs[i].nama,20);
        cout << "Alamat : ";
        cout <<"\tMasukan Desa : ";
        cin.getline (mhs[i].alamat.desa,20);
        cout << "\tMasukan Kota";
        cin.getline (mhs[i].alamat.kota,20);
    }

    for (int i = 0; i < 3; i++) {
        cout << "\n\nNim : " << mhs[i].nim;
        cout << "\nUmur : " << mhs[i].umur;
        cout << "\nNama : " << mhs[i].nama;
        cout << "\nAlamat : ";
        cout << "\nDesa : " << mhs[i].alamat.desa;
        cout << "\nkota : " << mhs[i].alamat.kota;
    }
}