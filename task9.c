#include<sys/utsname.h>   /* Header for 'uname'  */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main()
{
	struct utsname uname_pointer;
	uname(&uname_pointer);

	char hostname[1024];
	gethostname(hostname, 1024);

	printf("Hostname: %s \n", hostname);
	printf("System operating: %s \n", uname_pointer.sysname);
	printf("Number version: %s \n", uname_pointer.version);
} 