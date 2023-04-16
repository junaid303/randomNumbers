#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int randomNumber;
    randomNumber = rand();
    printf("The Random Number : %d\n",randomNumber);
    return 0;
}

/*
Note : Rand by default is not random but to make it random we do srand(time(0)) or srand(time(NULL))
THEREFORE we get randomNumbers every time we compile them 
*/