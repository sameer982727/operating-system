#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
  {
     int f;
     f=fork();
     if(f<0)
      {
        printf("child process could not be created");
        exit(-1);
      }
      else 
      {
        printf("MY ID IS %d,MY PARENT IS %d\n",getpid(),getppid());
      }
      return 0;
  }