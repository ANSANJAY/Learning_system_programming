#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<unistd.h>

#ifndef PRINT
#define PRINT
#endif


int main()
{
int msgqid;


#ifdef PRINT
printf("%s : ******************BEGIN***********\n",__func__);
#endif

printf("%s : Creating Message queue\n",__func__);
msgqid = msgget((key_t)11,0666|IPC_CREAT);
if(msgqid == -1)
{
	perror("mssget");
	exit(EXIT_FAILURE);
}
printf("%s : Created message queue\n",__func__);
system("ipcs");

#ifdef PRINT
printf("%s : ******************END*****************\n",__func__);
#endif

return 0;
}
