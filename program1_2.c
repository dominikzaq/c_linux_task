#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main()
{
	for(int i = 0; i < 3; i++)
	{		
		int result = fork();
		if(result == 0) /* akcja dla procesu potomnego */
		{
			printf("\nPID =: %d\n", getpid());
			printf("PPID =: %d\n\n", getppid());
		}
	}

	return 0;
}