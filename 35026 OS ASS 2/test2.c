// testb.c

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
  int length = strlen(argv[1]);
  printf("Program 2 value of n= \n ");
  for(int i=length - 1; i>=0; i--)
{
  printf("%d ", argv[1][i] - 48);
}
exit(EXIT_SUCCESS);
}
