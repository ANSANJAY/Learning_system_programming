#include"headers.h"
#include"declarations.h"


void* createfifo(void*);
void* openfile(void*);
void* writefifo(void*);
void* (*fptr[NOF])(void*);

int init()
{

#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif

fptr[0]=createfifo;
fptr[1]=openfile;
fptr[2]=writefifo;

#ifdef PRINT
        printf("%s : End \n",__func__);
#endif
	return 0;
}
