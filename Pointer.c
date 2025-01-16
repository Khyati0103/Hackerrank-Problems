#include<stdio.h>
#include<stdlib.h>
void update(int *a,int *b)
{
    //  int *pa=&a,*pb=&b;
    // *a=*a + *b;
    // *b=abs(&a - &b);
    int sum=*a + *b;
    int diff=abs(*a - *b);
    *a=sum;
    *b=diff;
}

void main()
{
    int a,b;
    int *pa=&a,*pb=&b;
    printf("Enter value of a and b : ");
    scanf("%d %d",&a,&b);
    update(pa,pb);
    printf("\n %d %d",a,b);

}