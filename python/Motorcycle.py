from Vehicle import Vehicle


# Motorcycle : jenis motor, kapasitas tangki
class Motorcycle(Vehicle):
    __jenis_motor = ""
    __kapasitas_tangki = ""

    def __init__(self, jenis_motor, kapasitas_tangki, plat, merk, tahun, warna):
        # mengisi kontruktor parent
        super().__init__(plat, merk, tahun, warna)

        self.__jenis_motor = jenis_motor
        self.__kapasitas_tangki = kapasitas_tangki

    # getter setter
    def getJenisMotor(self):
        return self.__jenis_motor

    def setJenisMotor(self, jenis):
        self.__jenis_motor = jenis

    def getKapasitasTangki(self):
        return self.__kapasitas_tangki

    def setKapasitasTangki(self, kapasitas):
        self.__kapasitas_tangki = kapasitas
