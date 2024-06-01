//testa.c

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<unistd.h>
#include<errno.h>
#include<sys/wait.h>
#define MAX 50

void main(int argc, char *argv[])
{
  int n;
  printf("Enter the number of elements : ");
  scanf("%d", &n);
  int arr[n];
  
  pid_t pid;
  int status;
  char *newenviron[]={NULL};
  char *newargv[20];  
  char charArray[256];
  char temp[50];
  
  charArray[0] = '\0';
  
for(int i=0; i<n; i++)
{
  printf("Enter element : ");
  scanf("%d",&arr[i]);
}

for(int i=0; i<n; i++)
{
sprintf(temp, "%d", arr[i]);
strcat(charArray, temp);
}

printf(" program 1 value of n %s \n", charArray);

newargv[0] = argv[1];
newargv[1] = charArray;
newargv[2]=NULL;

pid=fork();

if(pid==-1)
printf("Error on fork\n");

if(pid==0)
{
  //child process
  execve(argv[1], newargv, newenviron);
  printf("execve is successfully executed");
}
else if(pid>0)
  {
    printf("Parent process\n");
    wait(&status);
  }
}




