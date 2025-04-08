## 1. Deskripsi Aplikasi

Program ini adalah aplikasi antrian sederhana yang digunakan untuk mengelola pelanggan di bank. Aplikasi ini memungkinkan pengguna untuk menambahkan pelanggan ke dalam antrian, memproses pelanggan yang sedang antri, dan menampilkan status antrian saat ini. Dengan menggunakan struktur data Queue, program ini dapat menangani hingga 100 pelanggan sekaligus.

## 2. Struktur Data yang Digunakan

Program ini menggunakan struktur data Queue yang didefinisikan sebagai berikut:

- **MAX_QUEUE**: Konstanta yang menentukan ukuran maksimum antrian (100).
- **Queue**: Struktur yang menyimpan data antrian, dengan dua indeks:
  - `data[MAX_QUEUE]`: Array untuk menyimpan nama pelanggan.
  - `front`: Indeks untuk elemen terdepan dalam antrian.
  - `rear`: Indeks untuk elemen terakhir dalam antrian.

Fungsi-fungsi yang digunakan dalam program ini:

- `initQueue(Queue &q)`: Menginisialisasi antrian.
- `isEmpty(Queue q)`: Memeriksa apakah antrian kosong.
- `isFull(Queue q)`: Memeriksa apakah antrian penuh.
- `enqueue(Queue &q, string nama)`: Menambahkan pelanggan ke antrian.
- `dequeue(Queue &q)`: Menghapus pelanggan dari antrian.
- `display(Queue q)`: Menampilkan status antrian saat ini.

## 3. Flowchart Sederhana atau Pseudocode

### Pseudocode

```
Mulai
    Inisialisasi Queue
    Selama pilihan tidak sama dengan 4
        Tampilkan menu
        Ambil pilihan dari pengguna
        Jika pilihan == 1
            Minta nama pelanggan
            Tambahkan pelanggan ke antrian
        Jika pilihan == 2
            Proses pelanggan dari antrian
        Jika pilihan == 3
            Tampilkan antrian
        Jika pilihan == 4
            Tampilkan pesan terima kasih
        Jika pilihan tidak valid
            Tampilkan pesan kesalahan
    Akhiri
Selesai
```

### Flowchart

```
[Mulai] --> [Inisialisasi Queue]
    |
    v
[Menu Pilihan] --> [Ambil Pilihan]
    |
    +--> [Pilihan == 1] --> [Minta Nama Pelanggan] --> [Tambahkan ke Antrian]
    |
    +--> [Pilihan == 2] --> [Proses Pelanggan]
    |
    +--> [Pilihan == 3] --> [Tampilkan Antrian]
    |
    +--> [Pilihan == 4] --> [Tampilkan Pesan Terima Kasih]
    |
    +--> [Pilihan Tidak Valid] --> [Tampilkan Pesan Kesalahan]
    |
    v
[Ulangi Menu] --> [Akhiri]
```

## 4. Screenshot Hasil Program Berjalan

```
Menu Antrian Bank:
1. Tambahkan Pelanggan ke Antrian
2. Proses Pelanggan
3. Tampilkan Antrian
4. Keluar
**************************************************
Pilih menu: 1
**************************************************
Masukkan nama pelanggan: John Doe
Pelanggan John Doe telah ditambahkan ke antrian.
**************************************************

Menu Antrian Bank:
1. Tambahkan Pelanggan ke Antrian
2. Proses Pelanggan
3. Tampilkan Antrian
4. Keluar
**************************************************
Pilih menu: 1
**************************************************
Masukkan nama pelanggan: Jane Smith
Pelanggan Jane Smith telah ditambahkan ke antrian.
**************************************************

Menu Antrian Bank:
1. Tambahkan Pelanggan ke Antrian
2. Proses Pelanggan
3. Tampilkan Antrian
4. Keluar 
**************************************************
Pilih menu: 3 
**************************************************
Antrian saat ini: John Doe -> Jane Smith 
**************************************************

Menu Antrian Bank:
1. Tambahkan Pelanggan ke Antrian 
2. Proses Pelanggan 
3. Tampilkan Anrian 
4.Keluar  
**************************************************  
Pilih menu : 2  
**************************************************  
Pelangan John Doe telah diproses.
**************************************************  

Menu anrian bank :
1.Tambahkan pelanggan kedalam anrian   
2.Proses pelanggan   
3.Tampilkan anrian    
4.Keluar    
**************************************************    
Pilih Menu : 4     
**************************************************     
Selamat tinggal !
```