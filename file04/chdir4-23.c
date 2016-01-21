#include "apue.h"
#include <fcntl.h>

int main(int argc,char *argv[])
{
	if (argc!=2)
		err_quit("usage: <pathname>");
	if(chdir(argv[1])<0)
		err_sys("chdir failed");
	printf("chdir to %s succeeded\n",argv[1]);
	exit(0);
}
