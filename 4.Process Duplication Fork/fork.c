#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
printf("Begin");
printf("PID : %d\n",getpid());
printf("Parent PID : %d\n",getppid());

fork();

printf("PID : %d\n",getpid());
printf("Parent PID : %d\n",getppid());
printf("End\n");


return 0;
}
