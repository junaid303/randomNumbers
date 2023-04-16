#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int giveRandom(int min, int max);
int main()
{
    srand(time(NULL));

    printf("The Random Number : %d\n", giveRandom(10, 15));
    return 0;
}

int giveRandom(int min, int max)
{
    return (rand() % (max - min + 1) + min);
}
