//Sum of n numbers
#include<stdio.h>

int sum(int n,int a,int b,int c)
{
   if(n==1) return a;
   if(n==2) return b;
   if(n==3) return c;
   return sum(n-1,a,b,c) + sum(n-2,a,b,c) + sum(n-3,a,b,c);
}   


void main()
{
     int n,a,b,c;
     printf("Enter the number (n):");
     scanf("%d",&n);
     printf("Enter the a,b,c:");
     scanf("%d %d %d",&a,&b,&c);
     int ans =sum(n,a,b,c);
     printf("sum is %d",ans);

}