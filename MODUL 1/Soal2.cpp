#include <iostream>

using namespace std;

struct dataKendaraan 
{
    char plat[15] = "DA1234MK",
    jenis[10] = "RUSH", 
    pemilik[30] = "Andika Ardianto",
    alamat[35] = "Jl. Kayu Tangi 1",
    kota[20] = "Banjarmasin";
};

struct dataKendaraan kendaraan;

main() {
    cout << "a. Plat Nomor Kendaraan : "<< kendaraan.plat;
    cout << "\nb. Jenis Kendaraan : "<< kendaraan.jenis;
    cout << "\nc. Nama Pemilik : "<< kendaraan.pemilik;
    cout << "\nd. Alamat : "<< kendaraan.alamat;
    cout << "\ne. Kota : "<< kendaraan.kota;
}
