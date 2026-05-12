#include <iostream>
using namespace std;

void insertionSort(char arr[], int n) {
    for (int i = 1; i < n; i++) {
        char key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void merge(char arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    char L[100], R[100];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];

    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(char arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void shellSort(char arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            char temp = arr[i];
            int j;

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }

            arr[j] = temp;
        }
    }
}

void quickSort(char arr[], int low, int high) {
    int i = low, j = high;
    char pivot = arr[(low + high) / 2];

    while (i <= j) {
        while (arr[i] < pivot)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    if (low < j)
        quickSort(arr, low, j);

    if (i < high)
        quickSort(arr, i, high);
}

void bubbleSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

void printChar(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << endl;
}

int main() {
    int pilihan;

    while (1) {
        cout << "\n==================\n";
        cout << "|    SORTING     |\n";
        cout << "==================\n";
        cout << "1. Insertion Sort (Nama)\n";
        cout << "2. Merge Sort (Nama)\n";
        cout << "3. Shell Sort (Nama)\n";
        cout << "4. Quick Sort (NIM)\n";
        cout << "5. Bubble Sort (NIM)\n";
        cout << "6. Selection Sort (NIM)\n";
        cout << "7. Exit\n";
        cout << "==================\n";
        cout << "Masukkan Pilihan : ";
        cin >> pilihan;

        if (pilihan == 7) {
            cout << "\nProgram selesai.\n";
            break;
        }

        else if (pilihan >= 1 && pilihan <= 3) {
            char nama[100];
            int panjang = 0;

            cout << "\nMasukkan nama panggilan: ";
            cin >> nama;

            while (nama[panjang] != '\0') {
                panjang++;
            }

            if (pilihan == 1) {
                insertionSort(nama, panjang);
                cout << "\nHasil Insertion Sort: ";
                printChar(nama, panjang);
            }
            else if (pilihan == 2) {
                mergeSort(nama, 0, panjang - 1);
                cout << "\nHasil Merge Sort: ";
                printChar(nama, panjang);
            }
            else if (pilihan == 3) {
                shellSort(nama, panjang);
                cout << "\nHasil Shell Sort: ";
                printChar(nama, panjang);
            }
        }

        else if (pilihan >= 4 && pilihan <= 6) {
            char nim[100];
            int panjang = 0;

            cout << "\nMasukkan NIM: ";
            cin >> nim;

            while (nim[panjang] != '\0') {
                panjang++;
            }

            if (pilihan == 4) {
                quickSort(nim, 0, panjang - 1);
                cout << "\nHasil Quick Sort: ";
                printChar(nim, panjang);
            }
            else if (pilihan == 5) {
                bubbleSort(nim, panjang);
                cout << "\nHasil Bubble Sort: ";
                printChar(nim, panjang);
            }
            else if (pilihan == 6) {
                selectionSort(nim, panjang);
                cout << "\nHasil Selection Sort: ";
                printChar(nim, panjang);
            }
        }

        else {
            cout << "\nPilihan tidak valid.\n";
        }
    }

    return 0;
}