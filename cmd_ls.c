// cmd_ls.c 					  //
// ---------- 					  //
// Contains functions to do with the ls command   //
// NO FLAGS OR PARAMETERS YET!			  //

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include "cmd_ls.h"

void do_ls()
{
	DIR *dp;
        struct dirent *ep;
     
        dp = opendir ("./");
        if (dp != NULL)
        {
		while (ep = readdir (dp))
                puts (ep->d_name);
                (void) closedir (dp);
        }
	else 
	{
		perror ("Couldn't open the directory");
	}
}
