#include <stdio.h>

int main() {   
   int i, suma = 0;
   float srednia;
   int iloscLiczb = 11;

   for(i = 0; i < iloscLiczb; i++)
   	suma += i;
   
   srednia = suma / iloscLiczb;
   printf("Srednia liczb od 0 do 10 wynosi %lf \n", srednia);
   return 0;
}
