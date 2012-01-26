#include "cmd_handler.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Command Headers
#include "cmd_echo.h"

void exec_cmd(char * command) 
{
	if(strcmp(command, "echo") == 0) // help command
	{
		do_echo();
	} 
	else 
	{
		printf("Command not found!\n");
	}
}
