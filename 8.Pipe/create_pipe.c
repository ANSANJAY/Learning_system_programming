#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int ret;
	int arr[2];
	
	ret = pipe(arr);
	if(ret==-1)
	{
	printf("pipe");
	exit(EXIT_FAILURE);
	}

	printf("read fd = %d ; write fd = %d\n",arr[0],arr[1]);

	return 0;
}
