#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
printf("PID : %d\n",getpid());
printf("Parent PID : %d\n",getppid());

printf("executing original program from another program\n");

system("./shell");

return 0;
}
