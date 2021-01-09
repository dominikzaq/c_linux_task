#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main()
{
	pid_t PID = getpid();
	pid_t PPID = getppid();
	pid_t UID = getuid();
	pid_t GID = getgid();

	printf("PID =: %d\n", PID);
	printf("PPID =: %d\n", PPID);
	printf("UID =: %d\n", UID);
	printf("GID =: %d\n\n", GID);
}