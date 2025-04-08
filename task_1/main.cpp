#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAX_SISWA = 100; // Maksimal jumlah siswa
    string daftarSiswa[MAX_SISWA]; // Array untuk menyimpan nama siswa
    int jumlahSiswa; // Variabel untuk menyimpan jumlah siswa yang dimasukkan

    cout << "Masukkan jumlah siswa (maksimal " << MAX_SISWA << "): ";
    cin >> jumlahSiswa;

    // Validasi input
    if (jumlahSiswa < 1 || jumlahSiswa > MAX_SISWA) {
        cout << "Jumlah siswa tidak valid!" << endl;
        return 1; // Keluar dari program jika input tidak valid
    }

    // Input nama-nama siswa
    for (int i = 0; i < jumlahSiswa; ++i) {
        cout << "Masukkan nama siswa ke - " << (i + 1) << ": ";
        cin >> daftarSiswa[i];
    }

    // Menampilkan daftar nama siswa
    cout << "\nDaftar Nama Siswa:" << endl;
    
   for (int i = 0; i < jumlahSiswa; ++i) {
       cout << "- " << daftarSiswa[i] << endl;
   }

   return 0;
}
