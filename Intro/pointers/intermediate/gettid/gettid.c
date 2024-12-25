#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <stdio.h>

int main ( int argc , char * argv [ ] )
{
	printf (" Thread id %ld \n " , syscall ( SYS_gettid ) ) ;
	/* co ul d a l s o pa s s __NR_gettid */
	return 0 ;
}

