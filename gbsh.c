#include <stdio.h>
#include <stdlib.h>

char * usr; // username
char * host; // machine hostname
void exec_prompt(char * usr_name, char * host_name); // execute the main prompt
char * getHost(void); // returns 'machine hostname'
void strip_newline( char *str, int size ); // removes the '\0' character from commands
int isRoot(void); // checks if root

void strip_newline( char *str, int size )
{
    int i;

    // remove '\0'
    for (  i = 0; i < size; ++i )
    {
        if ( str[i] == '\n' )
        {
            str[i] = '\0';

            // all done
            return;
        }
    }
    // we are here? then no new line was found
}

void main(int argc, char *argv)
{
	// Initialization
	host = getHost();
	usr = getenv("USER");
	exec_prompt(usr, host);
}

void exec_prompt(char * usr_name, char * host_name)
{
    	char cmd[50]; // declaring the string for command input.
	if(isRoot() == 0) {
		printf("%s::%s:$", usr_name, host_name);
	} else {
		printf("%s::%s:#", usr_name, host_name);
	}
	fgets(cmd, 50, stdin); // fgets() is used for standard input.
	strip_newline(cmd, 50);
}

char * getHost()
{
	char hostname[1024];
        hostname[1023] = '\0';
        gethostname(hostname, 1023);

	return hostname;
}

int isRoot()
{
	if(geteuid() != 0)
		return 0;
	else
		return 1;
}
