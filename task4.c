#include <stdio.h>

float srednia()
{
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

}

int main() {   
  
   double wynik = srednia();
   printf("Srednia liczb wynosi %f \n", wynik);
   return 0;
}
