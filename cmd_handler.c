#include "cmd_handler.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Command Headers
#include "cmd_echo.h"
#include "cmd_help.h"

void exec_cmd(char * command) 
{
	if(strcmp(command, "echo") == 0) // echo command
	{
		do_echo();
	}
	else if(strcmp(command, "exit") == 0) // exit command
	{
		exit(0);
	}
	else if(strcmp(command, "help") == 0) // help command
	{
		print_help();
	}
	else 
	{
		printf("Command not found!\n");
	}
}
