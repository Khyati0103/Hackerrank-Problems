#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int n;
    //int a[n] can not be declared in c as c required constant size of array
   long int *a=(int*)malloc(n*sizeof(int));
    printf("Enter n :");
    scanf("%ld",&n);
    printf("Enter array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }

    for(int i=0;i<n/2;i++)
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }

    printf("Reversed array : ");
    for(int i=0;i<n;i++)
    {
        printf(" %ld ",a[i]);
    }
   
    free(a);
    return 0;
}