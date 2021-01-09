#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

int tab[2][10];
int result = 0;

void *counter(void *vargp) 
{ 
	int index;
   	index = (int)vargp;
	int sum = 0;

	for(int i = 0; i < 10; i++) {
		sum += tab[index][i];
	}

    printf("Suma wiercza o indeksie %i wynosi: %d \n", index, sum); 
    return (void *) sum;
} 

int main()
{
	int i = 0;
	int sum1 = 0;
    int sum2 = 0;
   	time_t t;

    void *result1;
    void *result2;

	/* Intializes random number generator */
	srand((unsigned) time(&t));

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 10; j++) {
			tab[i][j] = rand() % 10; //loss value 0 to 10
		}
	}
	printf("Print array: \n");
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 10; j++) {
			printf("%d ", tab[i][j]);
		}
		printf("\n");
	}
	pthread_t thread_id_1; 
    pthread_t thread_id_2; 

    int index = 0;

    pthread_create(&thread_id_1, NULL, counter, (void *) index); 
    index++;
    pthread_create(&thread_id_2, NULL, counter, (void *) index); 
    

    pthread_join(thread_id_1, (void **)&result1); 
    pthread_join(thread_id_2, (void **)&result2); 

    int result = (int)result1 + (int)result2;

    printf("Suma tablic wynosi: %d \n\n", result);
	return 0;
}