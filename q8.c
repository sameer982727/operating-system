#include <stdio.h>
int main()
{
  int b[50],a[50],w[50],tat[50],i,j,c,tot=0,pos,temp;
  float avwt,avt;
  printf("Enter the Number of Process:");
  scanf("%d",&c);
  printf("\nEnter The Burst Time:\n");
  for(i=0;i<c;i++)
   {
     printf("Enter the the burst of process %d:",i+1);
     scanf("%d",&b[i]);
     a[i]=i+1;
   }
   for(i=0;i<c;i++)
    {
      pos=i;
     for(j=i+1;j<c;j++)
    {
      if(b[j]<b[pos])
      pos=j;
    } 
     temp=b[i];
     b[i]=b[pos];
     b[pos]=temp;
     temp=a[i];
     a[i]=a[pos];
     a[pos]=temp;
    }
      w[0]=0;
      for(i=1;i<c;i++)
       {
        w[i]=0;
         for(j=0;j<i;j++)
          w[i]+=b[j];
          tot+=w[i];
       }
    avwt=(float)tot/c;
    tot=0;
    printf("\nProcess\tBurstTime\tWaiting Time\tTurnaround Time");
    for(i=0;i<c;i++)
     {
      tat[i]=b[i]+w[i];
      tot+=tat[i];
      printf("\np%d\t\t\t %d\t\t\t %d\t\t\t%d",a[i],b[i],w[i],tat[i]);
     }
     avt=(float)tot/c;
     printf("\n\nAverage Waiting Time=%f",avwt);
     printf("\nAverage Turnaround Time=%f",avt);
     return 0;
    } 