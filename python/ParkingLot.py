# ParkingLot : kapasitas, jumlah kendaraan saat ini


class ParkingLot:
    __kapasitas = 0
    __jumlah_kendaraan = 0

    def __init__(self, kapasitas, jumlah_kendaraan):
        self.__kapasitas = kapasitas
        self.__jumlah_kendaraan = jumlah_kendaraan

    # setter getter
    def getKapasitas(self):
        return self.__kapasitas

    def setKapasitas(self, kapasitas):
        self.__kapasitas = kapasitas

    def getJumlahKendaraan(self):
        return self.__jumlah_kendaraan

    def setJumlahKendaraan(self, jumlah_kendaraan):
        self.__jumlah_kendaraan = jumlah_kendaraan

    # methods
    def addKendaraan(self, n):
        self.__jumlah_kendaraan = self.__jumlah_kendaraan + n

    def reduceKendaraan(self, n):
        self.__jumlah_kendaraan = self.__jumlah_kendaraan + n

    def isFull(self):
        if self.__jumlah_kendaraan < self.__kapasitas:
            return False
        else:
            return True
