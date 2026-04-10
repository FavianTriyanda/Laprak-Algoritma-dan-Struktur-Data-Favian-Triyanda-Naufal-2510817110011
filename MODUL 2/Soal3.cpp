#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define n 10
using namespace std;

int PIL, F, R;
char PILIHAN [1], HURUF;
char Q[n];

void Inisialisasi()
{
    F = -1;
    R = -1;
}

void INSERT()
{
    if(R == n - 1)
    {
        cout << "Queue penuh" << endl;
    }
    else
    {
        cout << "Masukkan huruf: "; cin >> HURUF;
        cout << "Data berhasil dimasukkan ke dalam queue" << endl;
        if(F == -1)
        {
            F = 0;
        }
        R++;
        Q[R] = HURUF;
    }
}

void DELETE()
{
    if(F == -1)
    {
        cout << "Queue kosong" << endl;    
    }
    else
    {
        if (F == 0 || F > R)
            cout << "Queue kosong" << endl;
        
        cout << "Data keluar: " << Q[F] << endl;
        F++;
        
        if (F > R)
        {
            F = -1;
            R = -1;
            cout << "Data habis!" << endl;
        }
    }
}

void CETAKLAYAR()
{
    if ( F == -1 && R == -1)
    {
        cout << "Queue kosong" << endl;
    }
    else
    {
        cout << "Isi Queue:" << endl;
        for (int i = F; i <= R; i++)
        {
            cout << Q[i] << " ";
        }
        cout << endl;
    }
}

void RESET()
{
    F = -1;
    R = -1;
    cout << "Queue direset" << endl;
}

int main()
{
    Inisialisasi();
    do
    {
        cout << endl << "QUEUE" << endl;
        cout << "==================" << endl;
        cout << "1. INSERT" << endl;
        cout << "2. DELETE" << endl;
        cout << "3. CETAK QUEUE" << endl;
        cout << "4. RESET" << endl;
        cout << "5. QUIT" << endl;
        cout << "PILIHAN : "; cin >> PILIHAN;
    PIL=atoi(PILIHAN);
    switch(PIL)
    {
    case 1:
        INSERT();
        break;
    case 2:
        DELETE();
        break;
    case 3:
        CETAKLAYAR();
        break;
    case 4:
        RESET();
        break;
    default:
        cout << "press any key to continue" << endl;
        break;
    }
    getch();
    system("cls");
    }
    while (PIL < 5);
}
