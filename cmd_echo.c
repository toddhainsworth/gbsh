// cmd_echo.c 					  //
// ---------- 					  //
// Contains functions to do with the echo command //

#include "cmd_echo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 128

void do_echo() 
{
	char text[128];
	//char where[256];
	printf("Text: ");
	fgets(text, 128, stdin);
	//printf("Where [console]: ");
	//fgets(where, 50, stdin);
	
	printf("%s", text);
}
