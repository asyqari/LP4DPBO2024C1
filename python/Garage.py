# Garage : nama garasi, luas garasi, daftar kendaraan
from Car import Car


class Garage:
    __nama = ""
    __luas = -1
    __kapasitas = 0
    __jumlah_kendaraan = 0
    # list object kendaraan apa aja
    __daftar_kendaraan = []

    def __init__(self, nama, luas, kapasitas, jumlah_kendaraan):
        self.__nama = nama
        self.__luas = luas
        self.__kapasitas = kapasitas
        self.__daftar_kendaraan = []
        # jumlah kendaraan di set awal sebanyak data yang ada di daftar kendaraan
        self.__jumlah_kendaraan = len(self.__daftar_kendaraan)

    # setter getter

    def getNama(self):
        return self.__nama

    def setNama(self, nama):
        self.__nama = nama

    def getLuas(self):
        return self.__luas

    def setLuas(self, luas):
        self.__luas = luas

    def getKapasitas(self):
        return self.__kapasitas

    def setKapasitas(self, kapasitas):
        self.__kapasitas = kapasitas

    def getJumlahKendaraan(self):
        self.__jumlah_kendaraan

    def setJumlahKendaraan(self, jumlah):
        self.__jumlah_kendaraan = jumlah

    def getDaftarKendaraan(self):
        return len(self.__daftar_kendaraan)

    def setDaftarKendaraan(self, kendaraan):
        self.__daftar_kendaraan = kendaraan

    # methods

    # update jumlah naik (parkir)
    def addKendaraan(self, kendaraan):
        # cek apakah jumlah kendaraan udah mencapai kapasitas maksimum
        # kalo iya bisa parkir
        if len(self.__daftar_kendaraan) < self.__kapasitas:
            # masukin ke list (parkir)
            self.__daftar_kendaraan.append(kendaraan)
            # print(f"banyak: {len(self.__daftar_kendaraan)}")
            print(f"Memarkirkan kendaraan : {kendaraan.getPlat()}")
        # kalo engga, gabisa
        else:
            print("Garasi penuh mas..\n")

    # update jumlah turun
    def reduceKendaraan(self, kendaraan):
        self.__daftar_kendaraan.pop()
        self.__jumlah_kendaraan = len(self.__daftar_kendaraan)

    def tampilKendaraan(self):
        print(f"Kendaraan yang diparkir di garasi : {self.__nama}")
        for kendaraan in self.__daftar_kendaraan:
            print(
                f"Nomor Plat: {kendaraan.getPlat()}\n"  # Mencetak nomor plat
                f"Merk      : {kendaraan.getMerk()}\n"  # Mencetak merk
                f"Tahun     : {kendaraan.getTahunProduksi()}\n"  # Mencetak tahun
                f"Warna     : {kendaraan.getWarna()}\n"  # Mencetak warna
            )  # Mencetak warna kendaraan
