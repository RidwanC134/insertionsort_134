#include <iostream>
using namespace std;

int arr[20];                            // Membuat array dengan panjang data 20
int n;                                  // Membuat variabel inputan n

void input()
{   // Procedure Input
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array : ";                   // Membuat inputan jumlah element Array
        cin >> n;                                                       // Memanggil variabel inputan n

        if (n <= 20)
        {   // Membuat kondisi n tidak lebih dari 20
            break;

        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen. \n";            // Menamppilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;                                                       // Membuat jarak per baris program
    cout << "======================" << endl;                           // Membuat tampilan susunan data element array
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;

    // Menggunakan perulangan for untuk menyimpan data pada array
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";                          // Memasukkan atau menginputkan nilai data n
        cin >> arr[i];                                                  // Memasukkan nilai data n kedalam Array arr
    }
}



int main()
{
    std::cout << "Hello World!\n";
}

