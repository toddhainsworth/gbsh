// cmd_pwd.c 					  //
// ---------- 					  //
// Contains functions to do with the pwd command  //

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "cmd_pwd.h"

char * getDir()
{
	char workDir[1024];
	char * newLine = "\n";
	if(getcwd(workDir, sizeof(workDir)) != NULL)
		if(strcmp(workDir, "/") == 0) {
			return workDir;
		}
		else {
			return workDir;
		}
	else
		printf("Unable to get current working directory!");
	return;
}

void do_pwd()
{
	char workDir[1024];
	if(getcwd(workDir, sizeof(workDir)) != NULL) {
		//if(strcmp(workDir, "/") == 0) {
			printf("%s\n", workDir);
		//}
		//else {
			//printf("%s", workDir);
		//}
	}
	else {
		printf("Unable to change directory!");
	}
}
