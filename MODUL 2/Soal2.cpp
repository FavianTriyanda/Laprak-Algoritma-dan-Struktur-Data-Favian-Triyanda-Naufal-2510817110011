#include <iostream>
#include <stdlib.h>
#define max 10
using namespace std;

struct stack {
    int data[max];
    int atas;
};
stack Tumpuk;
int kosong()
{
    if(Tumpuk.atas == -1)
        return 1; 
    else
        return 0;
}

int penuh()
{
    if(Tumpuk.atas == max - 1)
    return 1;
    else
    return 0;
}

void input(int data)
{
    if (kosong() == 1)
    {
        Tumpuk.atas ++;
        Tumpuk.data[Tumpuk.atas] = data;
        cout << "Data " << Tumpuk.data[Tumpuk.atas] << " Masuk ke stack "<< endl;
    }
    else if (penuh() == 0)
    {
        Tumpuk.atas ++;
        Tumpuk.data[Tumpuk.atas] = data;
        cout << "Data " << Tumpuk.data[Tumpuk.atas] << " Masuk ke stack " << endl;
    }
    else 
        cout << "Tumpukan penuh" << endl;
}

void hapus()
{
    if (kosong() == 0)
    {
        cout << "Data Teratas Sudah Diambil" << endl;
        Tumpuk.atas--;
    }
    else 
    cout << "Data Kosong" << endl;   
}

void tampil()
{
    if (kosong() == 0)
    {
        for(int i = Tumpuk.atas; i >= 0; i--)
        {
            cout << "Tumpukan Ke " << i << " = " << Tumpuk.data[i] << endl;

        }
    }
    else
    cout << "Tumpukan Kosong" << endl;
}

void bersih()
{
    Tumpuk.atas = -1;
    cout << "Tumpukan Kosong !" << endl;
}

int main() 
{
    int pilihan, data;
    Tumpuk.atas == -1;
     do
    {
        cout << endl << "STACK" << endl;
        cout << "==================" << endl;
        cout << "1. INPUT" << endl;
        cout << "2. HAPUS" << endl;
        cout << "3. TAMPILKAN" << endl;
        cout << "4. BERSIH" << endl;
        cout << "5. KELUAR" << endl;
        cout << "PILIHAN : "; cin >> pilihan;
    switch(pilihan)
    {
    case 1:
        cout << "Masukkan data: ";
        cin >> data;
        input(data);
        break;
    case 2:
        hapus();
        break;
    case 3:
        tampil();
        break;
    case 4:
        bersih();
        break;
    case 5:
        cout << "Keluar";
        break;
    default:
        system("cls");
        cout << "Pilihan salah!" << endl;
        break;
    }
    }
    while (pilihan != 5);

    return 0;
}