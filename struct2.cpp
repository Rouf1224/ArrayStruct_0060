#include <iostream>
using namespace std;

struct detailAlamat{
    string desa;
    string kota;
};
struct mahasiswa{
    string nim;
    string nama;
    detailAlamat alamat;
};

int main(){
    mahasiswa mhs;

    cout << "Mahasiswa NIM =";
    cin >> mhs.nim;
    cout << "Mahasiswa Nama =";
    cin >> mhs.nama;
    cout << "Mahasiswa Alamat Desa =";
    cin >> mhs.alamat.desa;
    cout << "Mahasiswa Alamat Kota =";
    cin >> mhs.alamat.kota;

    cout << endl;
    cout << "Data Mahasiswa" << endl;

    cout << "NIM =" << mhs.nim << endl;
    cout << "Nama =" << mhs.nama << endl;
    cout << "Alamat Desa =" << mhs.alamat.desa << endl;
    cout << "Alamat Kota =" << mhs.alamat.kota << endl;
}