// cmd_cd.c 					  //
// ---------- 					  //
// Contains functions to do with the cd command   //

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cmd_cd.h"

void strip_newline_from_dir( char *str, int size );

void strip_newline_from_dir( char *str, int size )
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

void do_cd()
{
	char dirName[512];
	printf("To what directory?");
	fgets(dirName, 512, stdin);
	strip_newline_of_help(dirName, 512);
	chdir(dirName);
}
