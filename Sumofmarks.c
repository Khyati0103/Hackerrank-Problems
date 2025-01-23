#include<stdio.h>
#include<stdlib.h>

int summarks(int *marks,int n,char gender){
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(gender=='b' && i%2==0)
        {
            sum+=marks[i];
        }
        else if(gender=='g' && i%2!=0)
        {
            sum+=marks[i];
        }
    }
    return sum;
}

int main()
{
    int n,sum=0,i;
    char gender;
      printf("Enter the number of students: ");
    scanf("%d", &n);

    
    int *marks = (int *)malloc(n * sizeof(int));
    if (marks == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the marks of students:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

   
    getchar();

    printf("What is the gender: ");
    scanf(" %c", &gender);

 
    printf("Gender is: %c\n", gender);

    sum=summarks(marks,n,gender);
    printf("%d",sum);

free(marks);
return 0;
}
