#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  char *str = NULL;
  size_t size = 0;
  printf("Enter String : ");
  //  fgets(str,sizeof(str),stdin);
  getline(&str, &size, stdin);
  str[strcspn(str, "\n")] = '\0';

  char *token = strtok(str, " ");
  while (token != NULL)
  {
    printf("%s\n", token);
    token = strtok(NULL, " ");
  }
  free(str);
  return 0;
}