#include"declarations.h"
#include"headers.h"

int main()
{
int rfd;

#ifdef PRINT
	printf("%s:	Begin\n	",__func__);
#endif

init();

(*fptr[0])(0);//=createfifo

rfd=*(int*)(*fptr[1])(0);//openfile
(*fptr[2])((void*)&rfd);//writefifo -- it's a pointer


#ifdef PRINT
        printf("%s:     End  \n ",__func__);
#endif
exit(EXIT_SUCCESS);
}
