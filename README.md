# AMIMIR-GUARD

### Sistem Simulasi Pemantauan Tanaman Karnivora Berbasis C++

AMIMIR-GUARD adalah program simulasi berbasis terminal untuk memantau kelembapan media tanam tanaman karnivora. Program menerima jumlah tanaman dan nilai kelembapan dari pengguna, mengklasifikasikan kondisi media tanam, memberikan rekomendasi perawatan, lalu menampilkan jumlah tanaman yang memerlukan perhatian. Proyek ini dibuat untuk memenuhi tugas praktikum **Pemrograman Dasar 2026** (Modul 4: Function dan Method).

---

## Fitur Program

- **Klasifikasi Kelembapan**: mengelompokkan media tanam menjadi terlalu kering, kelembapan cukup, atau terlalu basah.
- **Rekomendasi Perawatan**: memberi saran yang berbeda untuk tiap kondisi.
- **Perulangan Data**: memantau beberapa tanaman (1 sampai 5) dalam satu kali eksekusi.
- **Validasi Input**: memeriksa jumlah tanaman (1-5) dan nilai kelembapan (0-100).
- **Laporan Pemantauan**: menghitung jumlah tanaman yang memerlukan perhatian.
- **Identitas Kelompok**: menampilkan watermark `KELOMPOK 26` pada output.

---

## Teknologi yang Digunakan

- Bahasa pemrograman: C++
- IDE: Code::Blocks
- Library: `iostream` dan `string`

---

## Konsep Pemrograman yang Diterapkan

| Konsep                 | Implementasi                            |
| ---------------------- | --------------------------------------- |
| Variabel dan tipe data | `int`, `string`                         |
| Pengkondisian          | `if`, `else if`, `else`                 |
| Perulangan             | `for`, `continue`                       |
| Function non-return    | `tampilkanHeader()`                     |
| Function return        | `klasifikasiKelembapan(int kelembapan)` |
| Method non-return      | `tampilkanRekomendasi(int kelembapan)`  |
| Method return          | `hitungPerluPerhatian()`                |
| Class dan object       | `PemantauTanaman`                       |

---

## Penjelasan Program

Program AMIMIR-GUARD merupakan program simulasi pemantauan tanaman karnivora yang dibuat menggunakan bahasa pemrograman C++. Program ini menggabungkan materi variabel, tipe data, pengkondisian, perulangan, function, dan method yang telah dipelajari pada modul praktikum sebelumnya. Program menerima masukan berupa jumlah tanaman dan nilai kelembapan media tanam, kemudian mengolah data tersebut untuk menentukan kondisi serta memberikan rekomendasi perawatan.

Function `tampilkanHeader()` merupakan function non-return tanpa parameter yang digunakan untuk menampilkan identitas program dan watermark Kelompok 26. Sementara itu, function `klasifikasiKelembapan(int kelembapan)` merupakan function return dengan parameter yang mengembalikan informasi kondisi kelembapan dalam bentuk string. Penggunaan function tersebut membuat proses klasifikasi dapat dilakukan tanpa menuliskan ulang seluruh pengkondisian pada fungsi utama.

Pada bagian method, class `PemantauTanaman` memiliki method `tampilkanRekomendasi(int kelembapan)` yang merupakan method non-return dengan parameter. Method tersebut menentukan rekomendasi berdasarkan nilai kelembapan dan menambah penghitung apabila kondisi tanaman berada di luar rentang yang ditentukan. Selain itu, method `hitungPerluPerhatian()` merupakan method return tanpa parameter yang mengembalikan jumlah tanaman yang memerlukan perhatian. Dengan demikian, program menerapkan function dan method dengan kombinasi parameter serta nilai kembalian yang berbeda.

Pengkondisian `if`, `else if`, dan `else` digunakan untuk membedakan kondisi kelembapan, sedangkan perulangan `for` digunakan untuk memproses data setiap tanaman sesuai jumlah yang dimasukkan pengguna. Pengkondisian tambahan memeriksa apakah jumlah tanaman dan nilai kelembapan berada dalam rentang yang diperbolehkan. Apabila data kelembapan tidak valid, program melewati pemrosesan tanaman tersebut dan melanjutkan ke iterasi berikutnya.

Berdasarkan contoh pengujian dengan nilai kelembapan 20, 50, dan 85, program mengklasifikasikan kondisi secara berurutan sebagai terlalu kering, kelembapan cukup, dan terlalu basah. Dua dari tiga tanaman masuk kategori yang memerlukan perhatian sehingga laporan akhir menampilkan jumlah dua tanaman. Hasil ini menunjukkan bahwa pengkondisian, perulangan, function, dan method bekerja bersama untuk menghasilkan informasi berdasarkan masukan pengguna.

---

## Aturan Klasifikasi

| Kelembapan | Kondisi          | Perlu perhatian |
| ---------- | ---------------- | --------------- |
| 0 - 29     | Terlalu kering   | Ya              |
| 30 - 70    | Kelembapan cukup | Tidak           |
| 71 - 100   | Terlalu basah    | Ya              |

*Catatan: batas kelembapan merupakan aturan simulasi untuk keperluan pembelajaran, bukan standar perawatan universal bagi semua tanaman karnivora.*

---

## Cara Menjalankan Program

### 1. Persiapan

Pastikan Code::Blocks dengan compiler C++ (MinGW/GCC) sudah terpasang.

### 2. Clone Repository

```
git clone https://github.com/cpkazura-pixel/AZZAM-ZUHAIR_KELOMPOK26.git
```

### 3. Buka dan Jalankan

- **Code::Blocks:** buat proyek Console Application C++, ganti isi `main.cpp` dengan isi `index.cpp`, lalu tekan **F9** (Build and Run).
- **Terminal (g++):**

```
g++ index.cpp -o amimir
./amimir
```

Di Windows, jalankan dengan `amimir.exe`.

---

## Contoh Penggunaan

Pengguna memasukkan tiga data kelembapan: `20`, `50`, dan `85`.

```
====================================
       AMIMIR-GUARD SYSTEM
 Sistem Pemantauan Tanaman Karnivora
====================================
          KELOMPOK 26
====================================
Masukkan jumlah tanaman (1-5): 3

Tanaman ke-1
Masukkan kelembapan (0-100): 20
Kondisi: Terlalu kering
Rekomendasi: Periksa media tanam dan kebutuhan air.

Tanaman ke-2
Masukkan kelembapan (0-100): 50
Kondisi: Kelembapan cukup
Rekomendasi: Pertahankan kondisi media tanam.

Tanaman ke-3
Masukkan kelembapan (0-100): 85
Kondisi: Terlalu basah
Rekomendasi: Periksa drainase dan genangan air.

====================================
         LAPORAN PEMANTAUAN
====================================
Tanaman perlu perhatian: 2 tanaman
Watermark: KELOMPOK 26
```

---

## Struktur Repository

```
AZZAM_Modul4_Kel26/
├── README.md
└── Tugas Laporan Praktikum BAB V.cpp
```

---

## Identitas Kelompok

- **Kelompok:** 26
- **Mata Kuliah:** Praktikum Pemrograman Dasar
- **Tahun:** 2026
- **Bahasa Pemrograman:** C++

### Anggota Kelompok

1. ADWA FATTUR RAHMAN
2. MALIK FAJAR RUMALOLAS
3. AZZAM ZUHAIR

---

**AMIMIR-GUARD | Kelompok 26**
*Monitor the moisture, protect the plants.*
