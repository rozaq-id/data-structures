#include <iostream>
#include <string>

using namespace std;

// Definisi struktur Queue
const int MAX_QUEUE = 100; // Ukuran maksimum queue

struct Queue {
    string data[MAX_QUEUE];
    int front;
    int rear;
};

// Inisialisasi queue
void initQueue(Queue &q) {
    q.front = -1;
    q.rear = -1;
}

// Memeriksa apakah queue kosong
bool isEmpty(Queue q) {
    return q.front == -1;
}

// Memeriksa apakah queue penuh
bool isFull(Queue q) {
    return q.rear == MAX_QUEUE - 1;
}

// Menambahkan elemen ke queue (enqueue)
void enqueue(Queue &q, string nama) {
    if (isFull(q)) {
        cout << "Queue penuh! Tidak dapat menambahkan pelanggan." << endl;
    } else {
        if (isEmpty(q)) {
            q.front = 0;
        }
        q.rear++;
        q.data[q.rear] = nama;
        cout << "Pelanggan " << nama << " telah ditambahkan ke antrian." << endl;
    }
}

// Menghapus elemen dari queue (dequeue)
void dequeue(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue kosong! Tidak ada pelanggan yang dapat diproses." << endl;
    } else {
        cout << "Pelanggan " << q.data[q.front] << " telah diproses." << endl;
        if (q.front == q.rear) {
            initQueue(q);
        } else {
            q.front++;
        }
    }
}

// Menampilkan elemen-elemen queue
void display(Queue q) {
    if (isEmpty(q)) {
        cout << "Antrian kosong." << endl;
    } else {
        cout << "Antrian saat ini: ";
        for (int i = q.front; i <= q.rear; i++) {
            cout << q.data[i];
            if (i != q.rear) {
                cout << " -> ";
            }
        }
        cout << endl;
    }
}

// Fungsi utama
int main() {
    Queue q;
    initQueue(q);
    int pilihan;
    string nama;

    do {
        cout << "Menu Antrian Bank:" << endl;
        cout << "1. Tambahkan Pelanggan ke Antrian" << endl;
        cout << "2. Proses Pelanggan" << endl;
        cout << "3. Tampilkan Antrian" << endl;
        cout << "4. Keluar" << endl;
        cout << "**************************************************" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        cout << "**************************************************" << endl;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama pelanggan: ";
                cin.ignore();
                getline(cin, nama);
                enqueue(q, nama);
                break;
            case 2:
                dequeue(q);
                break;
            case 3:
                display(q);
                break;
            case 4:
                cout << "Selamat tinggal!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        cout << "**************************************************" << endl;
    } while (pilihan != 4);

    return 0;
}
