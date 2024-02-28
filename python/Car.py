from Vehicle import Vehicle


class Car(Vehicle):
    __jumlah_kursi = ""
    __jumlah_pintu = ""

    # construktor
    def __init__(self, jumlah_kursi, jumlah_pintu, plat, merk, tahun, warna):
        # mengisi construktor parent didalam contructor anak (mobil)
        super().__init__(plat, merk, tahun, warna)
        self.__jumlah_kursi = jumlah_kursi
        self.__jumlah_pintu = jumlah_pintu

    # getter setter

    def getJumlahKursi(self):
        return self.__jumlah_kursi

    def setJumlahKursi(self, jumlah):
        self.__jumlah_kursi = jumlah

    def getJumlahPintu(self):
        return self.__jumlah_pintu

    def setJumlahPintu(self, jumlah):
        self.__jumlah_pintu = jumlah
