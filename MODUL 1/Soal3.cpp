#include <iostream>

using namespace std;

struct hurufKataAngka
{
    char huruf, kata[15];
    int angka;

};

struct hurufKataAngka hka;

main() {
    cout << "a. Masukkan sebuah huruf = "; cin >> hka.huruf;
    cout << "b. Masukkan sebuah kata = "; cin >> hka.kata;
    cout << "c. Masukkan Angka = "; cin >> hka.angka;
    cout << "d. Huruf yang Anda masukkan adalah "<< hka.huruf;
    cout << "\ne. Kata yang Anda masukkan adalah "<< hka.kata;
    cout << "\nf. Angka yang Anda masukkan adalah "<< hka.angka;
}