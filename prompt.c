#include <stdio.h>
#include "shell.h"

/**
 * print_prompt1 - first prompt string
 */
void print_prompt1(void)
{
	fprintf(stderr, "$ ");
}

/**
 * print_prompt2 - second prompt string for multiline commands
 */
void print_prompt2(void)
{
	fprintf(stderr, "> ");
}
