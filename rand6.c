#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));

    int min = 15, max = 25;


    int randomNumber;
    
    for(int i=0; i<=100; i++)
    {
        randomNumber = (rand() % (max - min + 1)) + min;
    printf("The Random Number : %d\n",randomNumber);

    }
   // randomNumber = (rand() % max) + min;
    //printf("The Random Number : %d\n",randomNumber);
    return 0;
}