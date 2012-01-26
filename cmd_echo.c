// cmd_echo.c 					  //
// ---------- 					  //
// Contains functions to do with the echo command //

#include "cmd_echo.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 128

void do_echo() 
{
	char string_to_echo[MAX_LEN];
	printf("Enter string to echo: ");
	fgets(string_to_echo, MAX_LEN, stdin);
	printf("%s", string_to_echo);
}
