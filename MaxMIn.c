#include<stdio.h>

int max_of_four(int a,int b,int c,int d)
{
    // In case of 10,4,2,60 the very first condition will be true so it 
    //will give 20 as anser but it will be wrong
//   if(a>b)
//   {
//     return a;
//   }
// else if(b>c)
// {
//     return b;
// }
// else if(c>d)
// {
//     return c;
// }
// else
// {
//     return d;
// }
int max = a;
if(b>max)
{
    max=b;
}
if(c>max)
{
    max=c;
}
if(d>max)
{
    max=d;
}
return max;
}

int min_of_four(int a,int b,int c,int d)
{
   int min = a;
if(b<min)
{
    min=b;
}
if(c<min)
{
    min=c;
}
if(d<min)
{
    min=d;
}
return min;
}


int main()
{
   int a,b,c,d;
   printf("Enter all numbers :");
   scanf("%d %d %d %d",&a,&b,&c,&d);
   int ans = max_of_four(a,b,c,d);
   printf("Maximum number is %d \n",ans); 
   int ans1 = min_of_four(a,b,c,d);
   printf("Minimum number is %d",ans1); 
   return 0;
}