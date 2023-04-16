#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));

    int min = 5, max = 10;


    int randomNumber;
    
    for(int i=0; i<=100; i++)
    {
        randomNumber = (rand() % max) + min;
    printf("The Random Number : %d\n",randomNumber);

    }
   // randomNumber = (rand() % max) + min;
    //printf("The Random Number : %d\n",randomNumber);
    return 0;
}

/*
Observation 1 : rand() % 10 is Min 0 Max 9

Observation 2 : (rand() % 10) + 1 is Min 1 Max 10

Conclusion 1 : rand() % max => 0-max
Conclusion 2 : (rand() % max) + 1; => 1-max
*/