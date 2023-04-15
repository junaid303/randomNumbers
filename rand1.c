#include<stdio.h>
#include<stdlib.h>
int main()
{
    int randomNumber;
    randomNumber = rand() % 10;
    printf("The Random Number : %d\n", randomNumber);
    return 0;
}