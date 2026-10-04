#include <iostream>
#include <string>
using namespace std;
// FUNCTION NON-RETURN TANPA PARAMETER
void tampilkanHeader() {
    cout << "====================================\n";
    cout << "       AMIMIR-GUARD SYSTEM\n";
    cout << " Sistem Pemantauan Tanaman Karnivora\n";
    cout << "====================================\n";
    cout << "          KELOMPOK 26\n";
    cout << "====================================\n";
}
// FUNCTION RETURN DENGAN PARAMETER
string klasifikasiKelembapan(int kelembapan) {
    if (kelembapan < 30) {
        return "Terlalu kering";
    } else if (kelembapan <= 70) {
        return "Kelembapan cukup";
    } else {
        return "Terlalu basah";
    }
}

// CLASS UNTUK PEMANTAUAN TANAMAN
class PemantauTanaman {
private:
    int jumlahPerluPerhatian;

public:
    PemantauTanaman() {
        jumlahPerluPerhatian = 0;
    }

    // METHOD NON-RETURN DENGAN PARAMETER
    void tampilkanRekomendasi(int kelembapan) {
        if (kelembapan < 30) {
            cout << "Rekomendasi: Periksa media tanam "
                 << "dan kebutuhan air.\n";
        } else if (kelembapan <= 70) {
            cout << "Rekomendasi: Pertahankan kondisi "
                 << "media tanam.\n";
        } else {
            cout << "Rekomendasi: Periksa drainase "
                 << "dan genangan air.\n";
        }

        if (kelembapan < 30 || kelembapan > 70) {
            jumlahPerluPerhatian++;
        }
    }

    // METHOD RETURN TANPA PARAMETER
    int hitungPerluPerhatian() {
        return jumlahPerluPerhatian;
    }
};
int main() {
    tampilkanHeader();
    PemantauTanaman pemantau;
    int jumlahTanaman;
    int kelembapan;
    cout << "Masukkan jumlah tanaman (1-5): ";
    cin >> jumlahTanaman;
    if (jumlahTanaman < 1 || jumlahTanaman > 5) {
        cout << "Jumlah tanaman tidak valid!\n";
        return 0;
    }
    for (int i = 1; i <= jumlahTanaman; i++) {
        cout << "\nTanaman ke-" << i << endl;
        cout << "Masukkan kelembapan (0-100): ";
        cin >> kelembapan;
        if (kelembapan < 0 || kelembapan > 100) {
            cout << "Data kelembapan tidak valid!\n";
            continue;
        }
        cout << "Kondisi: "
             << klasifikasiKelembapan(kelembapan) << endl;

        pemantau.tampilkanRekomendasi(kelembapan);
    }
    cout << "\n====================================\n";
    cout << "         LAPORAN PEMANTAUAN\n";
    cout << "====================================\n";
    cout << "Tanaman perlu perhatian: "
         << pemantau.hitungPerluPerhatian()
         << " tanaman\n";
    cout << "Watermark: KELOMPOK 26\n";
    return 0;
}
