#include "apue.h"
#include <fcntl.h>

int main(void)
{
	if (rename("tempfile","rn_tempfile")<0)
		err_sys("rename error!");
	exit(0);
}
