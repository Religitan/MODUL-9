#include <iostream> // Library untuk input-output standar
#include <iomanip> // Library untuk manipulasi output
#include <string> // Library untuk menggunakan tipe data string
using namespace std;

const int Maksimal_Simpul_2311102025_Religita = 2; // Konstanta untuk jumlah maksimal simpul

// Deklarasi array string yang berisi nama-nama kota
string simpul_025[Maksimal_Simpul_2311102025_Religita];

// Deklarasi matriks busur yang berisi bobot dari setiap busur antar simpul (nama kota)
int busur[Maksimal_Simpul_2311102025_Religita][Maksimal_Simpul_2311102025_Religita];

// Fungsi untuk menampilkan graf
void tampilGraph_2311102025_Religita ()
{
    cout << setw(12) << " "; // Menampilkan spasi kosong dengan lebar 12 kolom
    for (int i = 0; i < Maksimal_Simpul_2311102025_Religita; i++)
    {
        cout << setw(12) << simpul_025[i]; // Menampilkan nama simpul dengan lebar 12 kolom
    }
    cout << endl; // Pindah ke baris baru

    // Menampilkan isi graf
    for (int i = 0; i < Maksimal_Simpul_2311102025_Religita; i++)
    {
        cout << setw(11) << simpul_025[i] << " "; // Menampilkan nama simpul dengan lebar 12 kolom
        for (int j = 0; j < Maksimal_Simpul_2311102025_Religita; j++)
        {
            cout << setw(11) << busur[i][j]; // Menampilkan bobot busur dengan lebar 12 kolom
        }
        cout << endl; // Pindah ke baris baru
    }
}

int main()
{
    cout << "Silakan masukkan jumlah simpul: "; // Meminta pengguna untuk memasukkan jumlah simpul
    int numVertices;
    cin >> numVertices; // Membaca jumlah simpul dari input pengguna

    if (numVertices != Maksimal_Simpul_2311102025_Religita)
    {
        cout << "Jumlah simpul tidak sesuai dengan konstanta MAX_VERTICES." << endl; // Memberi pesan jika jumlah simpul tidak sesuai dengan konstanta
        return 1; // Menghentikan program dengan kode kesalahan
    }

    cout << "Silakan masukkan nama simpul:\n"; // Meminta pengguna untuk memasukkan nama simpul
    for (int i = 0; i < numVertices; ++i)
    {
        cout << "Simpul " << i + 1 << ": "; // Menampilkan pesan untuk memasukkan nama simpul
        cin >> simpul_025[i]; // Membaca nama simpul dari input pengguna
    }

    cout << "Silakan masukkan bobot antar simpul:\n"; // Meminta pengguna untuk memasukkan bobot antar simpul
    for (int i = 0; i < numVertices; ++i)
    {
        for (int j = 0; j < numVertices; ++j)
        {
            cout << simpul_025[i] << " --> " << simpul_025[j] << " = "; // Menampilkan pesan untuk memasukkan bobot busur
            cin >> busur[i][j]; // Membaca bobot busur dari input pengguna
        }
    }

    cout << endl; // Pindah ke baris baru
    tampilGraph_2311102025_Religita(); // Memanggil fungsi untuk menampilkan graf

    return 0; // Mengembalikan nilai 0 yang menandakan program berakhir dengan sukses
}