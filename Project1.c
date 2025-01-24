// n sum Multiples of 3 or 5 
#include <stdio.h>
#include <conio.h>
int main()
{
    long int T;

    // int *arr=(int *)malloc(T * sizeof(int));
    printf("Enter Test cases :");
    scanf("%ld", &T);
    long int a[T];
    printf("Enter n : \n");
    for (long int i = 0; i < T; i++)
    {
        scanf("%d", &a[i]);
    }
    // for (long int i = 0; i < T; i++)
    // {
    //     printf("\n %d", a[i]);
    // }
    for (long int i = 0; i < T; i++)
    {
        long int n = a[i];
        long int sum = 0;
        for (long int j = 0; j < n; j++)
        {
            if (j % 3 == 0 || j % 5 == 0)
            {
                sum += j;
            }
        }
        printf("\n%ld", sum);
    }
}