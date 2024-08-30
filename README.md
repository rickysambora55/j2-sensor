## 🚀 About Me

Nama : Ricky Sambora<br>
NIM : 4.31.20.1.21<br>
Kelas : TE-3B

# Jobsheet 2 Protokol Komunikasi dan Sensor

Pada jobsheet 2 terdapat 3 project yaitu simulasi capacitive touch, sensor DHT, dan sensor RFID.

### Alat dan Bahan

-   ESP32
-   Arduino IDE (Terinstal ESP32)
-   Library DHT dan Adafruit unified sensor
-   Breadboard
-   Kabel Jumper
-   Resistor < 220Ω
-   LED
-   Sensor DHT
-   RFID
-   Buzzer

### Instalasi ESP-32

1. Buka Arduino IDE
    - Masuk ke **Preferences**
    - Isikan board url dengan link : https://dl.espressif.com/dl/package_esp32_index.json dan simpan
    - Buka **Tools** > **Board** > **Boards Manager**
    - Cari ESP32, by Espressif. Kemudian instal
    - Pilih flash mode DIO/QIU menyesuaikan
2. Jalankan program .ino
3. Jika terdapat error saat uploading, tekan dan tahan tombol _Boot_ pada ESP32 saat upload, hingga _Connecting_ selesai

Nb. Proses instalasi dapat dilewati jika Arduino IDE sudah terintegrasi dengan ESP32.
Atau download `libraries` dan upload pada direktori projek.

### Instalasi DHT & Adafruit Libraries

1. Buka Arduino IDE
2. Buka **Sketch** > **Include Library** > **Library Manager**
3. Cari **DHT sensor library** by Adafruit. Kemudian instal.
    - Atau dapat melalui link [DHT Library](https://github.com/adafruit/DHT-sensor-library) dan upload pada libraries di direktori projek. Rename direktori menjadi **DHT_sensor_library**.
4. Instal juga library **Adafruit unified sensor** by Adafruit
    - Atau dapat melalui link [Adafruit Sensor](https://github.com/adafruit/Adafruit_Sensor) dan upload pada libraries di direktori projek. Rename direktori menjadi **Adafruit_Unified_Sensor**.

Nb. Proses instalasi dapat dilewati jika libraries telah diinstal.
Atau download `libraries` dan upload pada direktori projek.

### Instalasi Servo Libraries

1. Download [Servo Library](https://github.com/RoboticsBrno/ESP32-Arduino-Servo-Library/archive/master.zip) kemudian ekstrak.
2. Masukkan folder **ESP32-Arduino-Servo-Library-Master** ke dalam libraries projek dan rename menjadi **ESP32_Arduino_Servo_Library**
3. Buka ulang Arduino IDE.

Nb. Proses instalasi dapat dilewati jika libraries telah diinstal.
Atau download `libraries` dan upload pada direktori projek.

### Instalasi MFRC522 (RFID) Libraries

1. Buka Arduino IDE
2. Buka **Sketch** > **Include Library** > **Library Manager**
3. Cari **MFRC522** by GithubCommunity. Kemudian instal.

Nb. Proses instalasi dapat dilewati jika libraries telah diinstal.
Atau download `libraries` dan upload pada direktori projek.

## Project A - Capacitive Touch Sensor

### Rangkaian & Instalasi

1. Siapkan ESP32 dan hubungkan ke Arduino IDE.
2. Buat rangkaian berikut.

<img src="https://github.com/user-attachments/assets/09a1e853-461e-4980-ba1c-afedd9b4eac2" width="600px">

3. Download dan jalankan kode dari source code sesuai project.
4. Buka serial monitor untuk melihat raw data. Ubah tampilan serial monitor menjadi Serial Plotter pada menu **Tools** > **Serial Plotter** untuk menampilkan grafik.

### Penjelasan

Pada saat idle, maka nilai dari pin touch0 atau GPIO4 berada di atas 64. Jika bagian konduktor pin tersebut disentuh maka nilainya akan turun dibawah 16. Begitu pula pada grafik dapat terlihat penurunan saat disentuh. Sehingga dapat ditentukan nilai treshold yaitu sekitar 25-30. Nilai dapat bervariasi tergantung noise dan perangkat.

### Keluaran

<img src="https://github.com/user-attachments/assets/81522bfd-403a-42cd-984b-35173e8cae94" width="600px">

### Tugas A no. 6

Berdasarkan nilai treshold yang sudah didapatkan yaitu sekitar 25-30, maka pada program dibuat perkondisian jika nilai dibawah treshold maka LED akan menyala dan sebaliknya.

https://github.com/user-attachments/assets/09dcc16e-748b-4ef9-94cf-461fcf0fea1e

### Tugas A no. 7

Pengembangan dari tugas no. 6, hasil dari LED menyala diubah menjadi blink setiap beberapa ms.

https://github.com/user-attachments/assets/d130ce68-3f18-45ea-98e4-3cc6f6eb1262

### Tugas A no. 8

Pengembangan dari tugas no. 6, yaitu dengan menambah sebuah variabel hitungan yang akan ditambahkan 1 setiap nilai dibawah treshold.

<img src="https://github.com/user-attachments/assets/c5f57c23-5adf-41bf-a8cc-95babe8fdc88" width="600px">

### Tugas A no. 9

Pengembangan dari tugas no. 6, yaitu dengan mengubah kondisi LED agar menyala secara bergantian hingga satu rotasi penuh saat dibawah nilai treshold dan mematikan seluruh LED saat lebih tinggi dari treshold.

https://github.com/user-attachments/assets/d1cd627c-7164-41f8-8ec5-282d48874c16

## Project B - Sensor DHT

### Rangkaian & Instalasi

1. Siapkan ESP32 dan hubungkan ke Arduino IDE.
2. Buat rangkaian berikut.

<img src="https://github.com/user-attachments/assets/999d5069-33c2-444e-a88d-bd603b3fd20a" width="600px">

3. Download dan jalankan kode dari source code sesuai project.
4. Pastikan library DHT dan Adafruit sudah terinstal.

### Penjelasan

Sensor DHT (yang digunakan adalah DHT11) akan membaca data berupa suhu ruangan, kelembapan, dan index suhu.

### Keluaran

<img src="https://github.com/user-attachments/assets/315bab03-e865-427b-b2b0-a5b5ddc1e536" width="600px">

### Tugas B no. 4

Pengembangan dari projek B, yaitu menambah perkondisian dengan parameter suhu celcius. Jika suhu diatas 30 derajat maka LED akan menyala merah dan buzzer berbunyi. Sebaliknya saat suhu dibawah 30 celcius maka buzzer mati dan LED membentuk running LED.

1. Dibawah 30 celcius

https://github.com/user-attachments/assets/602f870f-f30e-4639-9ade-754af3004320

2. Diatas 30 celcius

https://github.com/user-attachments/assets/9dd3d72d-e1d9-41cb-8904-01019b882c57

## Project C - Sensor RFID

### Rangkaian & Instalasi

1. Siapkan ESP32 dan hubungkan ke Arduino IDE.
2. Buat rangkaian berikut.

<img src="https://github.com/user-attachments/assets/63118b40-1296-4282-8ae2-6a8e684bbc7d" width="600px">

3. Download dan jalankan kode dari source code sesuai project.
4. Pastikan library MFRC522 sudah terinstal.

### Penjelasan

Sensor RFID akan membaca kartu RFID yang masing-masing memiliki _unique mac address_. Dari _address_ ini kemudian dipakai untuk mengidentifikasi _address_ kartu yang diterima dan yang ditolak. Pada awal percobaan ini dilakukan pembacaan _address_ untuk mendaftarkan _address_ tersebut ke dalam kode (_hard coded_).

### Keluaran

<img src="https://github.com/user-attachments/assets/8b113aae-813a-481c-915f-50b80185de8f" width="600px">

https://github.com/user-attachments/assets/43ebe8c3-c8fd-4091-94da-8a96d1a8a291

### Tugas C no. 5

1. Buat rangkaian berikut.

<img src="https://github.com/user-attachments/assets/4a75a0ec-0e89-4993-8bcc-b43790d40162" width="600px">

2. Pastikan library servo sudah terinstal.

Setelah identitas kartu RFID didapatkan pada percobaan sebelumnya, maka address dimasukan pada kode sebagai address yang diterima sedangkan address lain akan ditolak. Sehingga didapatkan perkondisian baru. Pada perkondisian ini juga diberikan input LED dan servo.

Saat kartu RFID yang benar dibaca sensor, maka servo akan berputar dan LED menyala hijau. Sebaliknya hanya akan memberikan LED berwarna merah.

https://github.com/user-attachments/assets/d5f81f1b-b5a1-4b4b-be44-25ec3352b309

## Kesimpulan

-   ESP32 kompatibel dengan beberapa sensor seperti DHT dan RFID serta penggerak seperti servo. Akan tetapi, beberapa alat memerlukan library atau tool yang berbeda dengan arduino dan tidak kompatibel dengan ESP. Sehingga perlu melakukan import eksternal.
-   Beberapa pin ESP32 dapat mengukur nilai kapasitif dari pin tersebut. Sehingga dapat diperlakukan seperti touch sensor. Contoh pin yang dimaksud untuk ESP32 v1 adalah pin 21, 22, 24, 12, 13, 16, 17, 18, dan 20.
-   Sensor DHT mampu mengukur suhu dan kelembaban ruangan dan dapat divariasi menjadi satuan celcius maupun farenheit untuk suhunya. Serta terdapat heat index.
-   Sensor RFID mampu membaca chip atau lempengan yang terdapat pada kartu RFID atau pin dan lain sebagainya untuk diterjemahkan menjadi address/alamat. Address tiap kartu bersifat unik dan jarang ada kesamaan, address difungsikan seperti Mac pada perangkat jaringan.
-   Address pada kartu RFID dapat digunakan sebagai identifier kartu sehingga dapat memilah kartu yang akan diberikan akses dan ditolak.
-   Sistem RFID juga digunakan pada e-KTP dan e-Toll namun dengan frekuensi yang berbeda.
-   Perangkat servo dapat bergerak porosnya sejauh 180°. Poros harus digerakan sudut demi sudut.
