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
