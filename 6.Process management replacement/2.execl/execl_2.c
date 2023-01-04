/*to pass argument from one program to another 
 *
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
printf("File: %s,PID: %d, PPID: %d\n",__FILE__,getpid(),getppid());
execl("./test","test","a","b","c",NULL);
printf("File: %s,PID: %d, PPID: %d\n",__FILE__,getpid(),getppid());

}
