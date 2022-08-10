#include "main.h"

/**
 * _execute - similar to puts in C
 * @cmd: a pointer the integer we want to set to 402
 */
void _execute(char **cmd)
{
char *param = (*(cmd + 1));
char *s, *slash = "/";
char *o;
char *vartoprint = *cmd;
char *argv[4];

if ((access(cmd[0], F_OK) == 0))
{
argv[0] = cmd[0];
argv[1] = param;
argv[2] = ".";
argv[3] = NULL;
if (execve(argv[0], argv, NULL) == -1)
{
perror("Error");
}
}
else
{
o = get_command(vartoprint);
slash = str_concat(o, slash);
s = str_concat(slash, *cmd);
argv[0] = s;
argv[1] = param;
argv[2] = ".";
argv[3] = NULL;
if (execve(argv[0], argv, NULL) == -1)
{
perror("Error");
}
}
}
