#include <stdio.h>

int main() {   
   int i, suma = 0, liczba;
   float srednia;
   int iloscLiczb;

   printf("Podaj ilosc liczb ");
   scanf("%d", &iloscLiczb);

   for(i = 0; i < iloscLiczb; i++)
   {
   		printf("Podaj liczbe ");
   		scanf("%d", &liczba);
     	suma += liczba;
   }
   printf("suma wynosi %d ", suma);
   srednia = suma / iloscLiczb;
   printf("Srednia liczb wynosi %f \n", srednia);
   return 0;
}
