#include <stdio.h>
#include <stdlib.h>

int _strcmp(char *s1, char *s2)
{
	int flag = 0;
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = s1[i] - s2[i];
			break;
		}
	}
	return (flag);
}

char *_strcpy(char *dest, char *src)
{
	int len, x;
	len = 0;
	while (src[len] != '\0')
		len++;

	for (x = 0; x < len; x++)
		dest[x] = src[x];

	dest[x] = '\0';
	return (dest);
}

char *_strchr(char *s, char c)
{
	char *flag = NULL;
	if (s != NULL)
	{
		do
		{
			if (*s == c)
			{
				flag = s;
				break;
			}
		} while (*s++);
	}
	return (flag);
}

char *_strcat(char *dest, char *src)
{
	int i;
	int len1 = 0;
	int len2 = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len1++;
	for (i = 0; src[i] != '\0'; i++)
		len2++;
	for (i = 0; i <= len2; i++)
		dest[len1 + i] = src[i];
	dest[len1 + i] = '\0';
	return (dest);
}

int _strlen(char *s)
{
	int x = 0;
	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *old_ptr;
	char *new_ptr;

	if (new_size == old_size)
		return ptr;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	old_ptr == ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
