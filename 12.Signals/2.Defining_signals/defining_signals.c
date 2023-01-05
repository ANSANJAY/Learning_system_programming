#include<stdio.h>
#include<unistd.h>
#include<signal.h>

int flag =1;
void new_definition(int sig)
{
flag = 0;
}

int main()
{

(void) signal(SIGINT,new_definition);

while(1)
{
printf("hello world\n");
sleep(1);
if (flag==0)
{
	printf("Signal invoked with new definition\n");
}
}
}
