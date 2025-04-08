## 1. Deskripsi Aplikasi

Aplikasi ini adalah program sederhana yang ditulis dalam bahasa C++ untuk mengelola daftar nama siswa. Program ini memungkinkan pengguna untuk memasukkan jumlah siswa yang ingin didaftarkan, kemudian meminta pengguna untuk memasukkan nama-nama siswa tersebut. Setelah semua nama siswa dimasukkan, program akan menampilkan daftar nama siswa yang telah dimasukkan. Program ini memiliki batasan maksimal jumlah siswa yang dapat didaftarkan, yaitu 100 siswa.

## 2. Struktur Data yang Digunakan

Program ini menggunakan struktur data berikut:

- **Array**:

  - `daftarSiswa[MAX_SISWA]`: Array bertipe `string` yang digunakan untuk menyimpan nama-nama siswa. Ukuran array ditentukan oleh konstanta `MAX_SISWA`, yang bernilai 100.

- **Variabel**:

  - `jumlahSiswa`: Variabel bertipe `int` yang digunakan untuk menyimpan jumlah siswa yang dimasukkan oleh pengguna.

## 3. Flowchart Sederhana atau Pseudocode

### Pseudocode

```
START
    DEFINE MAX_SISWA = 100
    DECLARE daftarSiswa[MAX_SISWA] as string array
    DECLARE jumlahSiswa as integer

    PRINT "Masukkan jumlah siswa (maksimal MAX_SISWA):"
    READ jumlahSiswa

    IF jumlahSiswa < 1 OR jumlahSiswa > MAX_SISWA THEN
        PRINT "Jumlah siswa tidak valid!"
        EXIT
    ENDIF

    FOR i FROM 0 TO jumlahSiswa - 1 DO
        PRINT "Masukkan nama siswa ke - (i + 1):"
        READ daftarSiswa[i]
    ENDFOR

    PRINT "Daftar Nama Siswa:"
    FOR i FROM 0 TO jumlahSiswa - 1 DO
        PRINT "- daftarSiswa[i]"
    ENDFOR
END
```

### Flowchart

```
+----------------------+
|       Mulai          |
+----------------------+
          |
          v
+----------------------+
|  Input jumlahSiswa   |
+----------------------+
          |
          v
+----------------------+
| Validasi jumlahSiswa |
+----------------------+
          |
          v
+---------------------+
|   Input nama siswa  |
+---------------------+
          |
          v
+----------------------+
|  Tampilkan daftar    |
|  nama siswa          |
+----------------------+
          |
          v
+----------------------+
|      Selesai         |
+----------------------+
```

## 4. Screenshot Hasil Program Berjalan

Berikut adalah screenshot hasil program berjalan:

```
Masukkan jumlah siswa (maksimal 100): 3
Masukkan nama siswa ke - 1: Andi
Masukkan nama siswa ke - 2: Budi
Masukkan nama siswa ke - 3: Cici

Daftar Nama Siswa:
- Andi
- Budi
- Cici
```
