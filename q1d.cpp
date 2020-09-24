#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
 {
    int f;
    f=fork();
    if(f<0)
     {
       printf("child process could not be created");
       exit(-1);
     }
     else if(f==0)
     {
       printf("CHILD PROCESS:MY ID IS %d\n",getpid());
     }
     else
     {
       wait(NULL);
       printf("PARENT PROCESS:MY ID IS %d\n",getpid());
     }
     return 0;
 }