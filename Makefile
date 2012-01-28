all:
	gcc gbsh.c cmd_echo.c cmd_pwd.c cmd_cd.c cmd_help.c cmd_ls.c cmd_handler.c -o gbsh
