#include "main.h"

/**
 * check_slash - identifies if first char is a slash.
 * @cmd: first string
 * Return: 1 if yes 0 if no.
 */
int check_slash(char *cmd)
{
int i = 0;

while (cmd[i])
{
if (cmd[0] == '/')
{
printf("%c\n", cmd[0]);
return (1);
}

i++;
}
return (0);
}

/**
 * compareExit - identifies if first char is a slash.
 * @s1: first string
 * @s2: exit string
 * Return: 1 if yes 0 if no.
 */
int compareExit(char *s1, char *s2)
{
int i = 0;

for (; (*s2 != '\0' && *s1 != '\0') && *s1 == *s2; s1++)
{
if (i == 3)
break;
i++;
s2++;
}
return (*s1 - *s2);
}

/**
 * compareEnv - identifies if first char is a slash.
 * @s1: first string
 * @s2: exit string
 * Return: 1 if yes 0 if no.
 */
int compareEnv(char *s1, char *s2)
{
int i = 0;

for (; (*s2 != '\0' && *s1 != '\0') && *s1 == *s2; s1++)
{
if (i == 2)
break;
i++;
s2++;
}

return (*s1 - *s2);
}
/**
 * check_string - identify keyboard input.
 * @param: call prompt from another function (prompt)
 * Return: str
 **/
char **check_string(char *param)
{
char **buf = malloc(1024 * sizeof(char *));
char *split;
int i = 0;
char *delim = " \t\n";

split = strtok(param, delim);

while (split != NULL)
{
buf[i] = split;
i++;
split = strtok(NULL, delim);
}
_execute(buf);
return (buf);

}
/**
 * controlC - avoid close the shell
 * @sig: keep going shell
 **/
void  controlC(int sig)
{
(void) sig;
write(1, "\n$ ", 3);
}
