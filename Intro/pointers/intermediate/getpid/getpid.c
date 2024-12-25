#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	fprintf( stdout, "\nI am the process with PID: %d\n\n", getpid() );

	char *username = getenv("LOGNAME");
	
	fprintf( stdout, "\nUser name: %s\n\n", username );
}

