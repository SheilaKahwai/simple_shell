#include <stdio.h>
#include "shell.h"

void print_prompt1(void)
{
	fprint(stderr, "$ ");
}

void print_prompt2(void)
{
	fprint(stderr, "> ");
}
