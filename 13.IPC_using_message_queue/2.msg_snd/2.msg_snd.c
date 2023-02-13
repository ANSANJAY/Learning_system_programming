#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/wait.h>
#include<string.h>
#include<unistd.h>

#ifndef PRINT
#define PRINT
#endif

int main()
{

	int msgqid ,ret;
	struct
	{
	 	long msgtype;
		char msgtext[25];
	
	}wbuff;

#ifdef PRINT
printf("%s:**************** BEGIN ************ \n",__func__);
#endif

printf("%s : Craeting message queue \n",__func__);

msgqid = msgget((key_t)12,0666|IPC_CREAT);
if(msgqid == -1)
{
	perror("msgget");
	exit(EXIT_FAILURE);
}

printf("%s : Created message queue \n",__func__);

//*******PREPARE MESSAGE BLOCK***********

strcpy(wbuff.msgtext,"hello\0");
wbuff.msgtype =25;

if((msgsnd(msgqid,&wbuff,7,0))==-1)
{
	perror("msgsnd");
	exit(EXIT_FAILURE);

}

system("ipcs");



#ifdef PRINT
printf("%s:**************** END  ************ \n",__func__);
#endif

exit(EXIT_SUCCESS);


}

