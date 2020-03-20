#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

int main() {
	pid_t anak_1, anak_2, anak_3, anak_4;

	int status;

	anak_2 = fork();

	if (anak_2 < 0) {
		exit(EXIT_FAILURE); // Jika gagal membuat proses baru, program akan berhenti
	}

	if (anak_2 == 0) {
		char *argv[] = {"mkdir", "-p", "khusus", NULL};
	  	execv("/bin/mkdir", argv);
	}
	char str[50], url[100], file[100], save[100];
	int a; // untuk t=(t%1000)+100
	time_t t, w;
	t = time(NULL);
	//printf("%ld\n", t); coba print bisa apa g
	struct tm *tm, *wm;
	tm = localtime(&t);
	strftime(str, 50, "khusus/%Y-%m-%d_%H:%M:%S", tm);
	//printf("%s\n", str);

	anak_3 = fork();

	if (anak_3 < 0) {
		exit(EXIT_FAILURE); // Jika gagal membuat proses baru, program akan berhenti
	}

	if (anak_3== 0) {
		char *argv[] = {"mkdir", "-p", str, NULL};
	  	execv("/bin/mkdir", argv);
	}

	//sleep (5);

anak_4 = fork();

	if (anak_4 < 0) {
	exit(EXIT_FAILURE);
	}

	int i;
	for (i=0;i<20;i++) {
		w = time(NULL);
		wm = localtime(&w);
		//char *argv[] = {"mkdir", "-p", "khusus", NULL};
		a = (w%1000)+100;
		sprintf (url, "https://picsum.photos/%d", a);
		strftime(file, 50, "%Y-%m-%d_%H:%M:%S", wm);
		sprintf (save, "%s/%s", str, file);
		char *args[] = {"wget", "-O", save, url, NULL};

		strftime(str, 50, "khusus/%Y-%m-%d_%H:%M:%S", wm);
		if (fork()==0) execv("/usr/bin/wget", args);
	  	//execv("/bin/mkdir", argv);
		sleep(5);
	}

}
