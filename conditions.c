//Sum of n
#include<stdio.h>
void main()
{
  long int n;
  int sum=0;
  printf("Enter a number :");
  scanf("%ld",&n);
//   for(int i=0;i<=n;i++)
while(n!=0)
  {
    int d=n%10;
    sum+=d;
    n/=10;
  }
  printf("%d",sum);

}