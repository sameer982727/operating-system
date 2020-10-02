#include<stdio.h>
#include<sys/stat.h>
#include<time.h>
int main(int argc,char * a[3])
 {
     int i;
     struct stat buff;
     printf("Enter The File Name=");
     for(i=0;i<argc;i++)
      {
         printf("file=%s\n",a[i]);
         if(stat(a[i],&buff)<0)
           printf("Error");
         else
          {
            printf("Ownered=%d\ngid=%d\n",buff.st_uid,buff.st_gid);
            printf("Access Permission=%d\n",buff.st_mode);
            printf("Access Time=%d\n",(time(&(buff.st_atime))));

          }  
      }
 }