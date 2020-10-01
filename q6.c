#include <stdio.h>
int t=0;
void main()
{
  int a,b[50],i,j,c[50],tw=0,tar[50],tt=0;
  float avw,avt;
  printf("Enter The Number Of Processes:");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    printf("Enter The Burst Time of %dth Process: ",i);
    scanf("%d",&b[i]);
  }
for(i=1;i<=b[i];i++)
 {
    c[i]=t;
    for(j=1;j<=b[i];j++)
     {
        t++;
        if(j==b[i])
         tar[i]=t;
     }
 }
 for(i=1;i<=a;i++)
  {
     tw=tw+c[i];
  }
  avw=(float)tw/a;
  for(i=1;i<=a;i++)
   {
      tt=tt+tar[i];
   }
   avt=(float)tt/a;
   printf("\nWaiting And Turn Around Time");
   for(i=1;i<=a;i++)
    {
      printf("\nProcess %d-Waiting=%d,Turn Around=%d",i,c[i],tar[i]);
    }
    printf("\n Average Waiting Time=%f",avw);
    printf("\n Average Turn Around Time=%f\n",avt);
}
