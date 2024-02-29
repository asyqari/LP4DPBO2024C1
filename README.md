# LP4DPBO2024C1


/_ Saya Asyqari NIM 2102204 mengerjakan soal LP 4 dalam mata kuliah DPBO untuk keberkahanNya
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. _/

PENJELASAN PROGRAM
1. DESAIN
   ![desainLP4 drawio](https://github.com/asyqari/LP4DPBO2024C1/assets/90365732/4a5e61ab-8d7d-4866-bdf5-6e87303e02ef)
   Program ini menggunakan beberapa kelas 
    a. Vehicle --> **Baseclass** untuk kelas Car dan Motorcycle dikarenakan car dan motorcycle merupakan kelas yang melanjutkan atau melengkapi (membedakan juga) dari kelas induk Vehicle yang masih bersifat umum
    b. Car --> **Derivedclass** merupakan anak dari parent Vehicle, Car ini memiliki atribut yang hanya dimiliki class Car untuk menjadi pembeda dari ibunya
    c. Motorcycle --> **Derivedclass** merupakan anak dari parent Vehicle, isinya atribut yang menjadi penanda atau pemberi info kalo ini tuh motor
    d. Garage --> **Baseclass** merupakan class sendiri yang berbeda dengan vehicle dan anak anaknya, disini akan ada hubungan **composite/has a** dimana garasi memiliki object vehicle
    **e. ParkingLot --> GAJADI DIPAKE**

## Garage dan ParkingLot
  Kedua kelas ini digabungkan karena dipandangan saya garasi dan parking lot itu masih bisa di buat dalam 1 kelas saja, karena dari atribut yang ada tidak begitu menjadikan mereka berbeda, dari cara kerja nya pun kurang lebih sama, hanya menjadi tempat dimana suatu kendaraan parkir tidak ada fungsi atau cara kerja yang berbeda, maka kedua class ini saya jadikan 1


A. Cara Kerja
  1. Program membuat object Car/Motorcycle
  2. Object ini akan dimasukan kedalam garasi, dimana garasi sudah memiliki atribut composit list yang isinya nanti adalah object dari kelas lain
  3. disaat dimasukan dengan method parkir dari garasi, akan melakukan pengecekan apakah garasi penuh atau belum
  4. jika penuh maka tidak akan masuk kedalam list daftar parkir di garasi
  5. jika belum maka object itu akan di masukan kedalam list yang ada di atribut garasi
  6. diakhir akan di tampilkan daftar object yang ada di dalam daftar parkir
![Screenshot 2024-02-28 at 21 18 23](https://github.com/asyqari/LP4DPBO2024C1/assets/90365732/8a3c404d-1b50-45bf-a6b4-c7d505ed78c8)
