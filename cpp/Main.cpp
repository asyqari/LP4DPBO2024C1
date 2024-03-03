#pragma once
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "Car.cpp"
#include "Garage.cpp"
#include "Motorcycle.cpp"
#include "Vehicle.cpp"

using namespace std;

int main() {
  // Car car1 = Car("4", "2", "D123BA", "Honda", "2002", "Merah");
  // Motorcycle motor1 = Motorcycle("Sport", "10L", "BA221", "Suzuki", "1999",
  // "Silver");

  // kita buat instatiasi dari setiap objek yang kita inginkan tapi kita buat
  // bentuknya dalam bentuk pointer agar sama dengan parameternya
  //   pusing anjer tapi somehow jalan huahahahaha
  shared_ptr< Car > car1 =
      make_shared< Car >("4", "2", "D123BA", "Honda", "2002", "Merah");
  shared_ptr< Motorcycle > motor1 = make_shared< Motorcycle >(
      "Sport", "10L", "BA221", "Suzuki", "1999", "Silver");
  shared_ptr< Car > car2 =
      make_shared< Car >("4", "2", "D123BA", "Honda", "2002", "Merah");
  shared_ptr< Motorcycle > motor2 = make_shared< Motorcycle >(
      "Sport", "10L", "BA221", "Suzuki", "1999", "Silver");
  shared_ptr< Car > car3 =
      make_shared< Car >("4", "2", "D123BA", "Honda", "2002", "Merah");
  shared_ptr< Motorcycle > motor3 = make_shared< Motorcycle >(
      "PENUH", "PENUH", "PENUH", "PENUH", "PENUH", "PENUH");

  Garage garasi = Garage("Kori Hebat", 900, 5);

  garasi.addKendaraan(car1);
  garasi.addKendaraan(motor1);
  garasi.addKendaraan(car2);
  garasi.addKendaraan(motor2);
  garasi.addKendaraan(car3);
  // disini harusnya dah penuh
  garasi.addKendaraan(motor3);

  cout << endl;
  garasi.showKendaraan();
}