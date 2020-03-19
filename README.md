# SoalShiftSISOP20_modul2_T02
Repository Sebagai Laporan Resmi Soal Shift Modul 2 Praktikum Sistem Operasi 2020 \
Disusun oleh :
- I Gde Made Bhaskara Jala Dhananjaya (05311840000007)
- Azmi (05311840000047)

# Daftar Isi
## [Soal 1](https://github.com/Bhaskaraa/SoalShiftSISOP20_modul2_T02#soal-1---crontab-dalam-program-c-untuk-menjalankan-bash)
- [Penyelesaian Soal 1](https://github.com/Bhaskaraa/SoalShiftSISOP20_modul2_T02#penyelesaian-soal-1)
- [Dokumentasi Output yang Dihasilkan](https://github.com/Bhaskaraa/SoalShiftSISOP20_modul2_T02#dokumentasi-penyelesaian-soal-1)

## [Soal 2]()
- [Penyelesaian Soal 2A]()
- [Dokumentasi Output yang Dihasilkan 2A]()
- [Penyelesaian Soal 2B]()
- [Dokumentasi Output yang Dihasilkan 2B]()
- [Penyelesaian Soal 2C]()
- [Dokumentasi Output yang Dihasilkan 2C]()
- [Penyelesaian Soal 2D]()
- [Dokumentasi Output yang Dihasilkan 2D]()

## [Soal 3](https://github.com/Bhaskaraa/SoalShiftSISOP20_modul2_T02#soal-3---proses-fork-dalam-program-c-untuk-permasalahan-multiprocessing)
- [Penyelesaian Soal 3A](https://github.com/Bhaskaraa/SoalShiftSISOP20_modul2_T02#3a---membuat-direktori-indomie-dan-sedaap)
- [Penyelesaian Soal 3B](https://github.com/Bhaskaraa/SoalShiftSISOP20_modul2_T02#3b---meng-ekstrak-file-jpgzip)
- [Dokumentasi Output yang Dihasilkan 3A dan 3B]()
- [Penyelesaian Soal 3C](https://github.com/Bhaskaraa/SoalShiftSISOP20_modul2_T02#3c---memisahkan-hasil-ekstrak-sesuai-dengan-pengelompokan-file--sedaap--direktori--indomie)
- [Dokumentasi Output yang Dihasilkan 3C](https://github.com/Bhaskaraa/SoalShiftSISOP20_modul2_T02#dokumentasi-penyelesaian-soal-3c)
- [Penyelesaian Soal 3D](https://github.com/Bhaskaraa/SoalShiftSISOP20_modul2_T02#3d---membuat-file-coba1txt-dan-coba2txt-di-semua-direktori-hasil-esktrak-yang-ada-di-indomie)
- [Dokumentasi Output yang Dihasilkan 3D](https://github.com/Bhaskaraa/SoalShiftSISOP20_modul2_T02#dokumentasi-penyelesaian-soal-3d)

# Soal 1 - Crontab dalam Program C untuk Menjalankan Bash
Buatlah program C menyerupai crontab dengan ketentuan sebagai berikut. 

***a.*** Program hanya menerima 4 jenis argumen yakni : 
```
i. Detik : 0 - 59 atau * 
ii. Menit : 0 - 59 atau * 
iii. Jam   : 0 - 23 atau * 
iv. Path file .sh 
```
***b.*** Program akan eror jika argumen input tidak sesuai \
***c.*** Program hanya menerima 1 config cron \
***d.*** Program berjalan di background (daemon) \
***e.*** Tidak boleh menggunakan fungsi system()

Contoh argumen input : `./program \* 34 7 /home/somi/test.sh` (script bash test.sh akan dijalankan setiap jam 07.34 waktu lokal)

File penyelesaian soal ini dapat dilihat link berikut : [Source Code]()

Untuk menyelesaikan persoalan nomor 1, kami menggunakan syntax code sebagai berikut.
```
```
## Penyelesaian Soal 1

## Dokumentasi Penyelesaian Soal 1
![](https://github.com/Bhaskaraa/SoalShiftSISOP20_modul2_T02/blob/master/Screenshoot/1/1.png)
![](https://github.com/Bhaskaraa/SoalShiftSISOP20_modul2_T02/blob/master/Screenshoot/1/2.png)

# Soal 2 -

File penyelesaian soal ini dapat dilihat link berikut : [Source Code]()

Untuk menyelesaikan persoalan nomor 2, kami menggunakan syntax code sebagai berikut.
```
```
## Penyelesaian Soal 2

## Dokumentasi Penyelesaian Soal 2

# Soal 3 - Proses Fork dalam Program C untuk Permasalahan Multiprocessing
Suatu hari Jaya mendapat tugas yang banyak dengan rincian sebagai berikut.

***a.*** Jaya harus membuat program untuk membuat 2 direktori di ***/home/[user]/modul2***. Direktori yang pertama bernama ***"Indomie"*** dan 5 detik kemudian membuat direktori baru dengan nama ***"sedaap"***. \
***b.*** Kemudian meng-ekstrak file ***"jpg.zip"*** yang berada di ***/home/[user]/modul2***. \
***c.*** Kemudia hasil ekstrak dipindahkan sesuai dengan pengelompokan, jika bertipe file dipindah ke ***/home/[user]/modul2/sedaap*** sedangkan jika bertipe direktori dipindahkan ke ***/home/[user]/modul2/indomie***. \
***d.*** Untuk setiap direktori yang dipindah ke ***/home/[user]/modul2/indomie*** dibuatkan masing-masing 2 file kosong. File pertama diberi nama ***"coba1.txt"*** dan setelah 3 detik file kedua dibuat dengan nama ***"coba2.txt"***. 

Karena terlalu banyak masalah yang harus diselesaikan, mari bantu Jaya agar tugasnya cepat selesai.

File penyelesaian soal ini dapat dilihat link berikut : [Source Code](https://github.com/Bhaskaraa/SoalShiftSISOP20_modul2_T02/blob/master/3/soal3.c)

Untuk menyelesaikan persoalan nomor 3, kami menggunakan syntax code sebagai berikut.
```
#include <stdio.h>
#include <stdlib.h>
#include <wait.h>
#include <unistd.h>
#include <string.h>
#include <syslog.h>
#include <dirent.h>

int main(void) {
  pid_t anak_1, anak_2, anak_3, anak_4, anak_5, anak_6;
  int status;

  anak_1 = fork();
  if(anak_1 < 0){
    exit(EXIT_FAILURE);
  }

  if(anak_1==0) {
    char *argv[]={"mkdir", "-p", "indomie", NULL};
    execv("/bin/mkdir", argv);
  }
  else {
    while((wait(&status)) > 0);
    anak_2 = fork();
  }
  if(anak_2<0) {
    exit(EXIT_FAILURE);
}
  if(anak_2==0) {
    sleep(5);
    char *argv[]={"mkdir", "-p", "sedaap", NULL};
    execv("/bin/mkdir", argv);
  }
  else {
    while((wait(&status))>0);
    anak_3 = fork();
}
  if(anak_3<0){
    exit(EXIT_FAILURE);
}
  if(anak_3==0) {
    char *argv[]={"unzip", "-q", "jpg.zip", NULL};
    execv("/usr/bin/unzip", argv);
}
  else {
    while((wait(&status))>0);
    anak_4 = fork();
}
  if(anak_4<0) {
    exit(EXIT_FAILURE);
}
  if(anak_4==0) {
    execl("/usr/bin/find", "find", "/home/bhaskarajd/Modul2/3/jpg", "-type", "f", "-name", "*", "-exec", "mv", "-t", "/home/bhaskarajd/Modul2/3/sedaap", "{}", "+", (char *) NULL);
  }
  else {
    while((wait(&status))>0);
    anak_5 = fork();
}
  if(anak_5<0) {
    exit(EXIT_FAILURE);
  }
  if(anak_5==0) {
    execl("/usr/bin/find", "find", "/home/bhaskarajd/Modul2/3/jpg", "-mindepth", "1", "-type", "d", "-name", "*", "-exec", "mv", "-t", "/home/bhaskarajd/Modul2/3/indomie", "{}", "+", (char *) NULL);
  }
  else {
    while((wait(&status))>0);
    anak_6 = fork();
}
  if(anak_6<0) {
    exit(EXIT_FAILURE);
  }
  if(anak_6==0) {
    char *argv[] = {"touch", "/home/bhaskarajd/Modul2/3/indomie/%s/coba1.txt", NULL};
    //execv("/usr/bin/touch", argv);
    execl("/usr/bin/find", "find", "/home/bhaskarajd/Modul2/3/indomie", "-mindepth", "1", "-type", "d", "-name", "*", "-exec", "sh", "-c", "for d; do touch $d/coba1.txt; done", "{}", "+", (char *) NULL);
  }
  else {
    while((wait(&status))>0);
    sleep(3);
    execl("/usr/bin/find", "find", "/home/bhaskarajd/Modul2/3/indomie", "-mindepth", "1", "-type", "d", "-name", "*", "-exec", "sh", "-c", "for d; do touch $d/coba2.txt; done", "{}", "+", (char *) NULL);
  }
}
```
## Penyelesaian Soal 3
```
#include <stdio.h>
#include <stdlib.h>
#include <wait.h>
#include <unistd.h>
#include <string.h>
#include <syslog.h>
#include <dirent.h>
```
- Diatas merupakan ***library*** yang digunakan untuk menunjang dan menjalankan program.
```
  int main(void) {
  pid_t anak_1, anak_2, anak_3, anak_4, anak_5, anak_6;
  int status;
```
- Fungsi diatas merupakan fungsi utama dari program. ` pid_t anak_1, anak_2, anak_3, anak_4, anak_5, anak_6;` berfungsi untuk menyimpan PID ***(Parent ID)*** di masing-masing variabel child. `int status` berfungsi untuk deklarasi variabel status bertipe ***integer***.
```
anak_1 = fork();
  if(anak_1 < 0){
    exit(EXIT_FAILURE);
  }
```
- ***anak_1*** dihasilkan oleh proses fork. Kemudian jika nilai ***PID*** dari anak lebih kecil dari 0, maka proses gagal dan keluar. ***(Proses ini berlaku pada semua transisi dari proses anak 1 ke proses anak setelahnya)***

## 3A - Membuat Direktori Indomie dan Sedaap
```
  if(anak_1==0) {
    char *argv[]={"mkdir", "-p", "indomie", NULL};
    execv("/bin/mkdir", argv);
  }
  else {
    while((wait(&status)) > 0);
    anak_2 = fork();
 }
```
- Jika nilai ***PID*** sama dengan , proses berjalan. `char *argv[]={"mkdir", "-p", "indomie", NULL};` berfungsi untuk membuat direktori ***indomie*** dan perintah tersebut disimpan dalam variabel ***argv***. `execv("/bin/mkdir", argv);` berfungsi untuk mengeksekusi ***argv***. Fungsi `while((wait(&status)) > 0);` berfungsi sebagai ***delay*** untuk menunggu proses ***anak_1** selesai terlebih dahulu, setelah itu menjalankan proses ***anak_2***. 
```
if(anak_2==0) {
    sleep(5);
    char *argv[]={"mkdir", "-p", "sedaap", NULL};
    execv("/bin/mkdir", argv);
 }
```
- Jika ***PID*** proses ***anak_2*** bernilai sama dengan 0, maka proses dijalankan. `sleep(5);` berfungsi untuk memberikan ***delay*** selama 5 detik sebagai transisi dari proses 1 ke proses 2 sesuai dengan permintaan soal. `char *argv[]={"mkdir", "-p", "sedaap", NULL};` berfungsi untuk membuat direktori ***sedaap*** dan perintah tersebut disimpan dalam variabel ***argv***. `execv("/bin/mkdir", argv);` berfungsi untuk mengeksekusi perintah dalam ***argv***.

## 3B - Meng-ekstrak File "jpg.zip"
```
if(anak_3==0) {
    char *argv[]={"unzip", "-q", "jpg.zip", NULL};
    execv("/usr/bin/unzip", argv);
 }
```
- Jika ***PID*** proses ***anak_3*** bernilai sama dengan 0, maka proses dijalankan. `char *argv[]={"unzip", "-q", "jpg.zip", NULL};` berfungsi untuk meng-ekstrak file ***jpg.zip*** dan perintah tersebut disimpan dalam variabel ***argv***. `execv("/bin/mkdir", argv);` berfungsi untuk mengeksekusi perintah dalam ***argv***.

## Dokumentasi Penyelesaian Soal 3A dan 3B
![](https://github.com/Bhaskaraa/SoalShiftSISOP20_modul2_T02/blob/master/Screenshoot/3/1.png)

## 3C - Memisahkan Hasil Ekstrak Sesuai dengan Pengelompokan (File >> Sedaap | Direktori >> Indomie)
```
if(anak_4==0) {
    execl("/usr/bin/find", "find", "/home/bhaskarajd/Modul2/3/jpg", "-type", "f", "-name", "*", "-exec", "mv", "-t", "/home/bhaskarajd/Modul2/3/sedaap", "{}", "+", (char *) NULL);
  }
```
- Jika ***PID*** proses ***anak_4*** bernilai sama dengan 0, maka proses dijalankan. `execl("/usr/bin/find", "find", "/home/bhaskarajd/Modul2/3/jpg", "-type", "f", "-name", "*"` berfungsi untuk mencari semua yang bertipe file dengan semua nama di direktori ***/home/bhaskarajd/Modul2/3/jpg*** dan `"-exec", "mv", "-t", "/home/bhaskarajd/Modul2/3/sedaap", "{}", "+", (char *) NULL);` berfungsi untuk memindahkannya ke direktori ***/home/bhaskarajd/Modul2/3/sedaap***.
```
if(anak_5==0) {
    execl("/usr/bin/find", "find", "/home/bhaskarajd/Modul2/3/jpg", "-mindepth", "1", "-type", "d", "-name", "*", "-exec", "mv", "-t", "/home/bhaskarajd/Modul2/3/indomie", "{}", "+", (char *) NULL);
  }
```
- Sama seperti proses sebelumnya, jika ***PID*** proses ***anak_5*** bernilai sama dengan 0, maka proses dijalankan. `execl("/usr/bin/find", "find", "/home/bhaskarajd/Modul2/3/jpg", "-mindepth", "1", "-type", "d", "-name", "*"` berfungsi untuk mencari semua yang bertipe direktori atau folder dengan semua nama di ***/home/bhaskarajd/Modul2/3/jpg*** dan `"-exec", "mv", "-t", "/home/bhaskarajd/Modul2/3/indomie", "{}", "+", (char *) NULL);` berfungsi untuk memindahkannya ke direktori ***/home/bhaskarajd/Modul2/3/indomie***.

## Dokumentasi Penyelesaian Soal 3C
![](https://github.com/Bhaskaraa/SoalShiftSISOP20_modul2_T02/blob/master/Screenshoot/3/4.png)
![](https://github.com/Bhaskaraa/SoalShiftSISOP20_modul2_T02/blob/master/Screenshoot/3/2.png)

## 3D - Membuat File coba1.txt dan coba2.txt di Semua Direktori Hasil Esktrak yang Ada di Indomie
```
if(anak_6==0) {
    char *argv[] = {"touch", "/home/bhaskarajd/Modul2/3/indomie/%s/coba1.txt", NULL};
    //execv("/usr/bin/touch", argv);
    execl("/usr/bin/find", "find", "/home/bhaskarajd/Modul2/3/indomie", "-mindepth", "1", "-type", "d", "-name", "*", "-exec", "sh", "-c", "for d; do touch $d/coba1.txt; done", "{}", "+", (char *) NULL);
  }
```  
- Jika ***PID*** proses ***anak_6*** bernilai sama dengan 0, maka proses dijalankan. `execl("/usr/bin/find", "find", "/home/bhaskarajd/Modul2/3/indomie", "-mindepth", "1", "-type", "d", "-name", "*"` berfungsi untuk mencari semua yang bertipe direktori atau folder dalam semua nama di ***/home/bhaskarajd/Modul2/3/indomie*** dan `"-exec", "sh", "-c", "for d; do touch $d/coba1.txt; done", "{}", "+", (char *) NULL);` berfungsi untuk membuat file ***coba1.txt*** di semua direktori yang ada.
```
  else {
    while((wait(&status))>0);
    sleep(3);
    execl("/usr/bin/find", "find", "/home/bhaskarajd/Modul2/3/indomie", "-mindepth", "1", "-type", "d", "-name", "*", "-exec", "sh", "-c", "for d; do touch $d/coba2.txt; done", "{}", "+", (char *) NULL);
  }
```
- `sleep(3);` berfungsi sebagai ***delay*** selama 3 detik sesuai dengan permintaan soal. `execl("/usr/bin/find", "find", "/home/bhaskarajd/Modul2/3/indomie", "-mindepth", "1", "-type", "d", "-name", "*"` berfungsi untuk mencari semua yang bertipe direktori atau folder dalam semua nama di ***/home/bhaskarajd/Modul2/3/indomie*** dan `"-exec", "sh", "-c", "for d; do touch $d/coba2.txt; done", "{}", "+", (char *) NULL);` berfungsi untuk membuat file ***coba2.txt*** di semua direktori yang ada.

## Dokumentasi Penyelesaian Soal 3D
![](https://github.com/Bhaskaraa/SoalShiftSISOP20_modul2_T02/blob/master/Screenshoot/3/3.png)

## Kendala yang Dialami
***1.*** Banyak tugas yang lain yang membebani sehingga tidak fokus dalam mengerjakan soal shift. \
***2.*** Bobot soal shift yang sulit terutama soal nomor 2 sehingga penulis diharuskan untuk mencari banyak referensi agar bisa menjawab soal. \
***3.*** Penulis masih menyesuaikan diri dengan sistem operasi LINUX/Ubuntu sehingga ada beberapa kendala dalam menggunakan terminal. \
***4.*** Penulis masih menyesuaikan menggunakan program C dalam linux sehingga beberapa command baru susah untuk dimengerti. \
***5.*** Sistem demo online sedikit rumit untuk dilakukan. \
***6.*** Karena disarankan untuk tidak keluar rumah dampak dari Covid-19, agak sulit untuk berkoordinasi dengan anggota kelompok.
