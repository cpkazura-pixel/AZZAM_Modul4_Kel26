# ============================================================
# Program Monitoring Baterai Drone Pertanian
# Watermark : Kelompok XX
# ============================================================

BATAS_KRITIS = 20


# ---------------------- FUNCTION ----------------------------
# Non-return tanpa parameter
def tampilkan_header():
    print("=" * 46)
    print("   MONITORING BATERAI DRONE PERTANIAN")
    print("   Kelompok XX")
    print("=" * 46)


# Non-return berparameter
def cetak_garis(panjang):
    print("-" * panjang)


# Return tanpa parameter
def ambil_batas_kritis():
    return BATAS_KRITIS


# Return berparameter (menggunakan pengkondisian)
def tentukan_status(persen):
    if persen >= 70:
        return "PENUH"
    elif persen >= 40:
        return "CUKUP"
    elif persen > ambil_batas_kritis():
        return "RENDAH"
    else:
        return "KRITIS"


# ------------------------ CLASS -----------------------------
class DroneBaterai:
    def __init__(self, kode, persen):
        self.kode = kode
        self.persen = persen

    # Method non-return tanpa parameter
    def tampilkan_info(self):
        status = tentukan_status(self.persen)
        print(f"Drone {self.kode} | Baterai {self.persen}% "
              f"| {status}")

    # Method non-return berparameter (perulangan while)
    def terbang(self, menit, konsumsi):
        print(f"Misi {self.kode} dimulai ({menit} menit)")
        menit_ke = 1
        while menit_ke <= menit and self.persen > 0:
            self.persen -= konsumsi
            if self.persen < 0:
                self.persen = 0
            print(f"  Menit {menit_ke}: sisa {self.persen}%")
            menit_ke += 1

    # Method return tanpa parameter
    def ambil_persen(self):
        return self.persen

    # Method return berparameter (menggunakan pengkondisian)
    def layak_terbang(self, batas_minimum):
        if self.persen >= batas_minimum:
            return True
        return False


# ------------------------- MAIN -----------------------------
tampilkan_header()

armada = [
    DroneBaterai("DR-01", 85),
    DroneBaterai("DR-02", 45),
    DroneBaterai("DR-03", 18),
]

print("Kondisi awal armada drone:")
cetak_garis(46)
for drone in armada:
    drone.tampilkan_info()

cetak_garis(46)
print("Pengecekan kelayakan terbang (minimum 30%):")
for drone in armada:
    if drone.layak_terbang(30):
        print(f"{drone.kode}: LAYAK terbang")
    else:
        print(f"{drone.kode}: TIDAK LAYAK, harus diisi ulang")

cetak_garis(46)
armada[1].terbang(3, 12)

cetak_garis(46)
print("Kondisi akhir armada drone:")
for drone in armada:
    drone.tampilkan_info()
total = 0
for drone in armada:
    total += drone.ambil_persen()
print(f"Rata-rata baterai armada: {total / len(armada):.1f}%")
