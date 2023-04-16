/*
rand() function will work when we use srand and time.h
Observation 1 : Now if you do percentile  with rand() you will get different random values 
Observation 2:we won't get 10 when we do % 10, we'll get  min 0 to max 9 values 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));

    int randomNumber;
    randomNumber = rand() % 10;
    printf("The Random Number : %d\n",randomNumber);
    return 0;
}