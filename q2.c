#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
 {
    int k;
    printf("\nKernel Version:\n");
    system("cat /proc/sys/kernel/osrelease");
    printf("\nCPU TYPE AND MODEL:\n");
    system("cat /proc/cpuinfo |awk 'NR==4,NR==5 {print}'");
    return 0;

 }