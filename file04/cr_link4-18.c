#include "apue.h"
#include <fcntl.h>

int main(void)
{
	char  buf_s='0';
	ssize_t  n;
	size_t  bufsize;
	char * buf=&buf_s;
	if (symlink("foo","l_foo")<0)
		err_quit("creat symlink errro!");
	if ((n=readlink("l_foo",buf,bufsize))<0)
		err_sys("read link error!");
	printf("the bytes of symlink is %ld\n",n);
	exit(0);
}
