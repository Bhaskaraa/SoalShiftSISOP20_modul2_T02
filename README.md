# SoalShiftSISOP20_modul2_T02
Repository Sebagai Laporan Resmi Soal Shift Modul 2 Praktikum Sistem Operasi 2020 \
Disusun oleh :
- I Gde Made Bhaskara Jala Dhananjaya (05311840000007)
- Azmi (05311840000047)

# Daftar Isi
## [Soal 1]()
- [Penyelesaian Soal 1]()
- [Dokumentasi Output yang Dihasilkan]()

## [Soal 2]()
- [Penyelesaian Soal 2]()
- [Dokumentasi Output yang Dihasilkan]()

## [Soal 3]()
- [Penyelesaian Soal 3]()
- [Dokumentasi Output yang Dihasilkan]()

# Soal 1 - Crontab dalam Program C untuk Menjalankan Bash
Buatlah program C menyerupai crontab dengan ketentuan sebagai berikut. 

***a.*** Program hanya menerima 4 jenis argumen yakni : \
i. Detik : 0 - 59 atau * \
ii. Menit : 0 - 59 atau * \
iii. Jam   : 0 - 23 atau * \
iv. Path file .sh \
***b.*** Program akan eror jika argumen input tidak sesuai \
***c.*** Program hanya menerima 1 config cron \
***d.*** Program berjalan di background (daemon) \
***e.*** Tidak boleh menggunakan fungsi system()

Contoh argumen input : ./program \* 34 7 /home/somi/test.sh (script bash test.sh akan dijalankan setiap jam 07.34 waktu lokal)

File penyelesaian soal ini dapat dilihat link berikut : [Source Code]()

Untuk menyelesaikan persoalan nomor 1, kami menggunakan syntax code sebagai berikut.

# Soal 2 -

# Soal 3 - Proses Fork dalam Program C untuk Permasalahan Multiprocessing
Suatu hari jaya mendapat tugas yang banyak dengan rincian sebagai berikut.

***a.*** Jaya harus membuat program untuk membuat 2 direktori di ***/home/[user]/modul2***. Direktori yang pertama bernama ***"Indomie"*** dan 5 detik kemudian membuat direktori baru dengan nama ***"sedaap"***. \
***b.*** Kemudian meng-ekstrak file ***"jpg.zip"*** yang berada di ***/home/[user]/modul2***. \
***c.*** Kemudia hasil ekstrak dipindahkan sesuai dengan pengelompokan, jika bertipe file dipindah ke ***/home/[user]/modul2/sedaap*** sedangkan jika bertipe direktori dipindahkan ke ***/home/[user]/modul2/indomie***. \
***d.*** Untuk setiap direktori yang dipindah ke ***/home/[user]/modul2/indomie*** dibuatkan masing-masing 2 file kosong. File pertama diberi nama ***"coba1.txt"*** dan setelah 3 detik file kedua dibuat dengan nama ***"coba2.txt"***. 

Karena terlalu banyak masalah yang harus diselesaikan, mari bantu jaya agar tugasnya cepat selesai.

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
## Penyelesaian Soal Nomor 3
```
  int main(void) {
  pid_t anak_1, anak_2, anak_3, anak_4, anak_5, anak_6;
  int status;
```
- 
```
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
```
- 
```
if(anak_2==0) {
    sleep(5);
    char *argv[]={"mkdir", "-p", "sedaap", NULL};
    execv("/bin/mkdir", argv);
 }
```
-
```
if(anak_3==0) {
    char *argv[]={"unzip", "-q", "jpg.zip", NULL};
    execv("/usr/bin/unzip", argv);
 }
```
-
```
if(anak_4==0) {
    execl("/usr/bin/find", "find", "/home/bhaskarajd/Modul2/3/jpg", "-type", "f", "-name", "*", "-exec", "mv", "-t", "/home/bhaskarajd/Modul2/3/sedaap", "{}", "+", (char *) NULL);
  }
```
-
```
if(anak_5==0) {
    execl("/usr/bin/find", "find", "/home/bhaskarajd/Modul2/3/jpg", "-mindepth", "1", "-type", "d", "-name", "*", "-exec", "mv", "-t", "/home/bhaskarajd/Modul2/3/indomie", "{}", "+", (char *) NULL);
  }
```
-
```
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
```
-


## Kendala yang Dialami
***1.*** Banyak tugas yang lain yang membebani sehingga tidak fokus dalam mengerjakan soal shift. \
***2.*** Bobot soal shift yany sulit terutama soal nomor 2 sehingga penulis diharuskan untuk mencari banyak referensi agar bisa menjawab soal. \
***3.*** Penulis masih menyesuaikan diri dengan sistem operasi LINUX/Ubuntu sehingga ada beberapa kendala dalam menggunakan terminal. \
***4.*** Penulis masih menyesuaikan menggunakan program C dalam linux sehingga beberapa command baru susah untuk dimengerti.
