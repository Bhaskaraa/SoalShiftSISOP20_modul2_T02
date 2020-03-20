#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <syslog.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[]) {
  if (argc != 5) {
     printf("Input Argumen Salah\n");
     exit(EXIT_FAILURE);
  }

  if (!(*argv[1] == '*' || (atoi(argv[1]) >= 0 && atoi(argv[1]) <= 59))) {
    printf("Input Argumen Salah\n");
    return 1;
  }
  if (!(*argv[2] == '*' || (atoi(argv[2]) >= 0 && atoi(argv[2]) <= 59))) {
    printf("Input Argumen Salah\n");
    return 1;
  }
  if (!(*argv[3] == '*' || (atoi(argv[3]) >= 0 && atoi(argv[3]) <= 23))) {
    printf("Input Argumen Salah\n");
    return 1;
  }
  if (access(argv[4], F_OK) == -1) {
    printf("Input File tidak ada\n");
    return 1;
  }

  struct tm t;
  time_t tm;

  pid_t pid, sid;        // Variabel untuk menyimpan PID

  pid = fork();     // Menyimpan PID dari Child Process

  /* Keluar saat fork gagal
  * (nilai variabel pid < 0) */
  if (pid < 0) {
    exit(EXIT_FAILURE);
  }

  /* Keluar saat fork berhasil
  * (nilai variabel pid adalah PID dari child process) */
  if (pid > 0) {
    exit(EXIT_SUCCESS);
  }

  umask(0);

  sid = setsid();
  if (sid < 0) {
    exit(EXIT_FAILURE);
  }

  close(STDIN_FILENO);
  close(STDOUT_FILENO);
  close(STDERR_FILENO);

 while (1) {
   int a, b, c;

   tm = time(NULL);
   t = *localtime(&tm);

   a = atoi(argv[3]);
   b = atoi(argv[2]);
   c = atoi(argv[1]);

    if ((t.tm_sec == atoi(argv[1])) || (strcmp(argv[1], "*") == 0) && (t.tm_min == atoi(argv[2])) || (strcmp(argv[2], "*") == 0) && (t.tm_hour == atoi(argv[3])) || (strcmp(argv[3], "*") == 0)) {

	if (fork() == 0) {
	   execl("/bin/bash", "bash", argv[4], NULL);
	}
    }
    sleep(1);
  }
}
