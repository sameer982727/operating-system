#include<stdio.h>
int main()
 {
    int j,a,i,r,t,flag=0,t_quantum;
    int w_time=0,tar_time=0,at[20],bt[20],rt[20];
    printf("Enter Total Process:");
    scanf("%d",&a);
    r=a;
    for(i=0;i<a;i++)
     {
        printf("Enter The Arrival Time And Burst Time For Process Process Number%d:",i+1);
        scanf("%d",&at[i]);
        scanf("%d",&bt[i]);
        rt[i]=bt[i];
     }
     printf("Enter The Quantum:");
     scanf("%d",&t_quantum);
     printf("\n\nProcess\t|Turaround time|Waiting Time\n\n");
     for(t=0,i=0;r!=0;)
      {
         if(rt[i]<=t_quantum && rt[i]>0)
          {
             t+=rt[i];
             rt[i]=0;
             flag=1;

          }
          else if(rt[i]>0)
           {
              rt[i]=t_quantum;
              t+=t_quantum;
           }
           if(rt[i]==0 && flag==1)
            {
               r--;
               printf("P[%d]\t|\t%d\t|\t%d\n",i+1,t-at[i],t-at[i]-bt[i]);
               w_time+=t-at[i]-bt[i];
               tar_time+=t-at[i];
               flag=0;
            }
            if(i==a-1)           
               i=0; 
             else if(at[i+1]<=t)
               i++;
             else
               i=0;
      }


             printf("\nAverage Waiting Time=%f\n",w_time*1.0/a);
             printf("\nAverage Turnaround Time=%f\n",tar_time*1.0/a);
             return 0;
      }

