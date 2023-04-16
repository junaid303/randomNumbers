/*Obser 1 : we can get min 1 to max 10
           because when we are getting 0, +1 is getting added
Obser 2 : rand() % 10 +1 gives Min 1 Max 10
          rand() % 10 + 2 gives Min 2 Max 11
            */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int randomNumber;

    for (int i=0; i<=10000; i++)
    {
        randomNumber = rand() % 10 + 2;
    printf("The Random Number : %d\n",randomNumber);
    }
   // randomNumber = rand() % 10 + 1;
   // printf("The Random Number : %d\n",randomNumber);
    return 0;
}