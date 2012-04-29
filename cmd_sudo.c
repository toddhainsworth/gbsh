/*  
    --cmd_sudo.c--
    Copyright (C) 2012 GeissT

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    IMPLEMENTS THE MAKESHIFT SUDO COMMAND
*/

#include "cmd_sudo.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void sudo_up();
void sudo_down();
int get_userid();
void print_user();

int current_uid;
int current_euid;

void sudo_up()
{
	current_uid = getuid();
	current_euid = geteuid();
	
	setuid(0);
	seteuid(0);
}

void sudo_down()
{
	setuid(current_uid);
	seteuid(current_euid);
}

void print_user()
{
	printf("euid = %4d uid = %4d\n", geteuid(), getuid());
}
