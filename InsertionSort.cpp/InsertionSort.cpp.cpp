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
}



int main()
{
    std::cout << "Hello World!\n";
}

