from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage


def main():

    car1 = Car("4", "2", "D123BA", "Honda", "2002", "Merah")
    motor1 = Motorcycle("Sport", "10L", "BA221", "Suzuki", "1999", "Silver")

    garasi = Garage("Kori Hebat", 900, 5, 0)

    print("=============================\n")
    # menambahkan data ke garasi
    garasi.addKendaraan(car1)
    garasi.addKendaraan(motor1)

    garasi.addKendaraan(Car("8", "2", "D2233B", "Fuso", "2012", "Kuning"))
    garasi.addKendaraan(Motorcycle("Matic", "20L", "K221", "Yamaha", "2000", "Gold"))
    garasi.addKendaraan(Motorcycle("Manual", "9L", "Lkkd1", "Honda", "1921", "Hitam"))
    # DISINI harusnya udah gabisa karena penuh
    garasi.addKendaraan(
        Motorcycle("PENUH", "PENUH", "PENUH", "PENUH", "PENUH", "PENUH")
    )
    print("=============================\n")
    garasi.tampilKendaraan()


if __name__ == "__main__":
    main()
