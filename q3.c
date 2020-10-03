#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
 {
    int k;
    printf("\nKernel Version:\n");
    system("cat /proc/sys/kernel/osrelease");
    printf("\nInformation on Configured Amount Of Free And Used Memory:\n");
    system("cat /proc/meminfo |awk 'NR==1,NR==2 {print}'");
    return 0;

 }