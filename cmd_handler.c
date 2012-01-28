#include "cmd_handler.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Command Headers
#include "cmd_echo.h"
#include "cmd_help.h"
#include "cmd_ls.h"
#include "cmd_cd.h"
#include "cmd_pwd.h"

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
	else if(strcmp(command, "ls") == 0) // ls command
	{
		do_ls();
	}
	else if(strcmp(command, "cd") == 0) // cd command
	{
		do_cd();
	}
	else if(strcmp(command, "pwd") == 0) // pwd command
	{
		do_pwd();
	}
	else 
	{
		printf("Command not found!\n");
	}
}
