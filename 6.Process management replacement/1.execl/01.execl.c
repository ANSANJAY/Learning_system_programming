/*pid is the successor program being called by predecessor program execl
 */


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
printf("File:%s;	Pid:%d;		Ppid:%d;	Start\n",__FILE__,getpid(),getppid());

execl("./pid","pid",NULL);
printf("File:%s;	Pid:%d;		Ppid:%d;	End\n",__FILE__,getpid(),getppid());
exit(0);
}
