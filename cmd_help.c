// cmd_echo.c 					  //
// ---------- 					  //
// Contains functions to do with the echo command //

#include "cmd_help.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_help_commands();
void strip_newline_of_help( char *str, int size );

void strip_newline_of_help( char *str, int size )
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

void print_help() 
{
	char helpOp[50];
	printf("gbsh - General Help\n");
	printf("-------------------\n");
	printf("Commands Help: commands\n");
	printf("-------------------\n");
	printf(">> ");
	fgets(helpOp, 50, stdin);
	strip_newline_of_help(helpOp, 50);
	if(strcmp(helpOp, "commands") == 0) {
		print_help_commands();
	} else {
		return;
	}
}

void print_help_commands() 
{
	printf("gbsh - Available Commands\n");
	printf("-------------------------\n");
	printf("echo - Prints to the terminal\n");
	printf("help - Takes you to the help screen\n");
	printf("exit - Exits gbsh\n");
}