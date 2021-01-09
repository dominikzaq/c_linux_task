#include <stdio.h> 
int main(){ 
   int zakres,i,j; 
   int tab[1000]; 
   printf("Podaj zakres liczb (max 1000):"); 
   scanf("%d",&zakres); 

   for (i=1; i < zakres; i++) /*wygenerowanie tablicy liczb od 1 do zakres*/ 
      tab[i-1]=i; 
   tab[0]=0; /* jedynka nie jest liczba pierwsza*/ 
   for (i=1; i<zakres; i++){ /* glowna czesc programu */ 
      if ( tab[i]!=0 ){ 
         j=i+tab[i]; 
         while ( j < zakres ){ 
            tab[j]=0; 
            j=j+tab[i]; 
         } 
      } 
   } 
   printf("Liczby pierwsze z zakresu 1-%d\n",zakres); /* wyswietlenie sita */ 
   for (i=1;i<zakres;i++) 
      if(tab[i-1]!=0) 
         printf("%d ",tab[i-1]); 
   return 0;
} 
