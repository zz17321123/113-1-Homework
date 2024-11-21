#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000

int main() 
{
    srand(time(0));

    int frequencies[13] = { 0 };

    for (int i = 0; i < ROLLS; i++) 
    {
        int die1 = (rand() % 6) + 1;
        int die2 = (rand() % 6) + 1;
        int sum = die1 + die2;
        frequencies[sum]++;
    }

    printf("Sum\tFrequency\tProbability\n");

    for (int sum = 2; sum <= 12; sum++) 
    {
        double probability = (double)frequencies[sum] / ROLLS;
        printf("%d\t%d\t\t%.2f%%\n", sum, frequencies[sum], probability * 100);
    }

    return 0;
}
