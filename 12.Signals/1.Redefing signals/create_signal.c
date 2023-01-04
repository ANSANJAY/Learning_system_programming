#include<stdio.h>
#include<unistd.h>
#include<signal.h>

/*function to create new definition
 * SIGINT (ctrl +c) ends the execution of program
 * but instead now it just prints signal re-defined/
 */


void new_signal(int sig)
{
printf("Signal SIGINT:%d  got re -defined\n",sig);
}


int main()
{
	(void) signal(SIGINT,new_signal);
	while(1)
	{
		printf("Program running\n");
		sleep(1);
	}
}
