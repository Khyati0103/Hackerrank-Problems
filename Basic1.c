//How to take string input from user in C
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
//     char s[100];
//     printf("Enter a string :"); 
//     // scanf("%99s",s);
//     fgets(s,sizeof(s),stdin);
   
//     printf("Hello,World! \n");
//     printf("%s",s);

 char ch,s[50];
 char str[100];
 printf("Enter a Character :");
 scanf("%c",&ch);
 getchar(); // Consume the mew line from the input Buffer
 printf("Enter a string :");
 scanf("%s",s);
  getchar();
 printf("Enter a string2 :");
 fgets(str,sizeof(str),stdin);
// scanf("%[^\n]s",str);
//  printf("%c \n %s \n %s",ch,s,str);
printf("%c \n",ch); // printing a character
printf("%s \n",s);   // printing a string
printf("%s",str);    // printing a sentence



}