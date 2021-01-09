#include <stdio.h>
#include <stdlib.h>

void main()
{
   char* home = getenv("HOME");
   char* user = getenv("USER");
   char* shell = getenv("SHELL");

   printf("Login: %s ", user);
   printf("Home folder: %s \n", home);
   printf("Groups: \n");
   system("groups");
   printf("Shell: %s \n", shell);
}