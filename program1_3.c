#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <errno.h>
#include<stdlib.h>
// process waiting
#include <sys/wait.h>


int main()
{
	system("cc -o ./program1_1 ./program1_1.c"); //kompilacja programu1

	for(int i = 0; i < 3; i++)
	{		
		int result = fork();
		if(result == 0) /* akcja dla procesu potomnego */
		{
			int result = execl("./program1_1","program1_1", NULL);
			if(result == -1)
			{
				perror("obluga wyjatku dla metody exectl:");
			}
		}
		else if(result == -1)
		{
			perror("obluga wyjatku dla metody fork: ");
		}
		else
		{
			int status;
			pid_t result = wait(&status);

			if(result == -1)
			{
				perror("obluga wyjatku dla metody wait: ");
			}
			else
			{
				printf("Process %d zakończył się z statusem %d \n", result, status >> 8);
			}
		}
	}

	return 0;
}