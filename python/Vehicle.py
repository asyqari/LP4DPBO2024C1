# Vehicle : plat nomor, merk, tahun produksi, warna
class Vehicle:
    __plat_nomor = ""
    __merk = ""
    __tahun_produksi = ""
    __warna = ""

    # contructor
    def __init__(self, plat_nomor, merk, tahun_produksi, warna):
        self.__plat_nomor = plat_nomor
        self.__merk = merk
        self.__tahun_produksi = tahun_produksi
        self.__warna = warna

    # getter setter
    def getPlat(self):
        return self.__plat_nomor

    def setPlat(self, plat):
        self.__plat_nomor = plat

    def getMerk(self):
        return self.__merk

    def setMerk(self, merk):
        self.__merk = merk

    def getTahunProduksi(self):
        return self.__tahun_produksi

    def setTahunProduksi(self, tahun_produksi):
        self.__tahun_produksi = tahun_produksi

    def getWarna(self):
        return self.__warna

    def setWarna(self, warna):
        self.__warna = warna

    # methods of all vehicle

    def start():
        print("Broom Broom")

    def stop():
        print("Stopping")
