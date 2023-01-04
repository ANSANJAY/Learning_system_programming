#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
printf("PID : %d\n",getpid());
printf("Parent PID : %d\n",getppid());

printf("original program\n");

return 0;
}
