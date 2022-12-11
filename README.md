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
    - Atau dapat melalui link https://github.com/adafruit/DHT-sensor-library dan upload pada libraries di direktori projek
4. Instal juga library **Adafruit unified sensor** by Adafruit
    - Atau dapat melalui link https://github.com/adafruit/Adafruit_Sensor dan upload pada libraries di direktori projek

Nb. Proses instalasi dapat dilewati jika libraries telah diinstal.
Atau download `libraries` dan upload pada direktori projek.

### Instalasi Servo Libraries

1. Buka Arduino IDE
2. Buka **Sketch** > **Include Library** > **Library Manager**
3. Cari **x** by x. Kemudian instal
4. Instal juga library **x** by x

Nb. Proses instalasi dapat dilewati jika libraries telah diinstal.
Atau download `libraries` dan upload pada direktori projek.

## Project A - Capacitive Touch Sensor

### Rangkaian & Instalasi

1. Siapkan ESP32 dan hubungkan ke Arduino IDE.
2. Buat rangkaian berikut.

<img src="https://cdn.discordapp.com/attachments/1043462519336996894/1051432306742661180/A._Rangkaian_Capacitive_Touch.png" width="480px">

3. Download dan jalankan kode dari source code sesuai project.
4. Buka serial monitor untuk melihat raw data. Ubah tampilan serial monitor menjadi Serial Plotter pada menu **Tools** > **Serial Plotter** untuk menampilkan grafik.

### Penjelasan

Pada saat idle, maka nilai dari pin touch0 atau GPIO4 berada di atas 64. Jika bagian konduktor pin tersebut disentuh maka nilainya akan turun dibawah 16. Begitu pula pada grafik dapat terlihat penurunan saat disentuh. Sehingga dapat ditentukan nilai treshold yaitu sekitar 25-30. Nilai dapat bervariasi tergantung noise dan perangkat.

### Keluaran

<img src="https://cdn.discordapp.com/attachments/1043462519336996894/1051435089067778078/A._Capacitive_Touch.png" width="480px">

### Tugas A no. 6

Berdasarkan nilai treshold yang sudah didapatkan yaitu sekitar 25-30, maka pada program dibuat perkondisian jika nilai dibawah treshold maka LED akan menyala dan sebaliknya.

<img src="https://cdn.discordapp.com/attachments/1043462519336996894/1051436607066083338/A._Capacitive_Sensor_Tugas_1.gif" width="480px">

### Tugas A no. 7

Pengembangan dari tugas no. 6, hasil dari LED menyala diubah menjadi blink setiap beberapa ms.

<img src="https://cdn.discordapp.com/attachments/1043462519336996894/1051438247378698291/A._Capacitive_Touch_Tugas2.gif" width="480px">

### Tugas A no. 8

Pengembangan dari tugas no. 6, yaitu dengan menambah sebuah variabel hitungan yang akan ditambahkan 1 setiap nilai dibawah treshold.

<img src="https://cdn.discordapp.com/attachments/1043462519336996894/1051438733628547083/A._Capacitive_Touch_Tugas3.png" width="480px">

### Tugas A no. 9

Pengembangan dari tugas no. 6, yaitu dengan mengubah kondisi LED agar menyala secara bergantian hingga satu rotasi penuh saat dibawah nilai treshold dan mematikan seluruh LED saat lebih tinggi dari treshold.

<img src="https://cdn.discordapp.com/attachments/1043462519336996894/1051440661116768276/A._Capacitive_Touch_Tugas4.gif" width="480px">

## Project B - Sensor DHT

### Rangkaian & Instalasi

1. Siapkan ESP32 dan hubungkan ke Arduino IDE.
2. Buat rangkaian berikut.

<img src="https://cdn.discordapp.com/attachments/1043462519336996894/1051441154102673469/B._Rangkaian_DHT.png" width="480px">

3. Download dan jalankan kode dari source code sesuai project.

### Penjelasan

Sensor DHT (yang digunakan adalah DHT11) akan membaca data berupa suhu ruangan, kelembapan, dan index suhu.

### Keluaran

<img src="https://cdn.discordapp.com/attachments/1043462519336996894/1051441808548302888/B._Sensor_DHT.png" width="480px">

### Tugas B no. 4

Pengembangan dari projek B, yaitu menambah perkondisian dengan parameter suhu celcius. Jika suhu diatas 30 derajat maka LED akan menyala merah dan buzzer berbunyi. Sebaliknya saat suhu dibawah 30 celcius maka buzzer mati dan LED membentuk running LED.

1. Dibawah 30 celcius

https://user-images.githubusercontent.com/49542850/206898685-5073100e-5814-4451-b6bf-74e835e68ad8.mp4

2. Diatas 30 celcius

https://user-images.githubusercontent.com/49542850/206898713-3ffcd6a4-ea9f-4853-8dfc-1a232c3f6ccf.mp4


