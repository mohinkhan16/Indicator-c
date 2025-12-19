#include <stdio.h>

void array(int (*ptr)[10], int size)
{
    int a, b;

    for (a = 0; a < size; a++)
    {
        for (b = 0; b < size; b++)
        {
            printf("%d ", ptr[a][b] * ptr[a][b] * ptr[a][b]);
        }
        printf("\n");
    }
}

int main()
{
    int size, a, b;
    int arr[10][10];

    printf("Enter array's size: ");
    scanf("%d", &size);

    printf("\nEnter array elements:\n");
    for (a = 0; a < size; a++)
    {
        for (b = 0; b < size; b++)
        {
            printf("a[%d][%d] = ", a, b);
            scanf("%d", &arr[a][b]);
        }
    }

    printf("\nCubes of all elements:\n");
    array(arr, size);

    return 0;
}