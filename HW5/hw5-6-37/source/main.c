#include <stdio.h>
#include <stdlib.h>

int recursiveMaximum(int array[], int size) 
{
    if (size == 1) 
        return array[0];

    int maxOfRest = recursiveMaximum(array, size - 1);

    return (array[size - 1] > maxOfRest) ? array[size - 1] : maxOfRest;
}

int main() {
    int array[100], size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);

    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &array[i]);
    }

    int max = recursiveMaximum(array, size);
    printf("The maximum value in the array is: %d\n", max);

    return 0;
}