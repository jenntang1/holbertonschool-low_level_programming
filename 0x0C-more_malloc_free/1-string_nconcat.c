#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * @n: positive integers
 * Description: Lookup man strcat for reference
 * Return: NULL for fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* declare a pointer for the concatenate string */
	char *str;
	/* declare iteration variables */
	int len1 = 0, len2 = 0;
	int i1 = 0, i2 = 0;
	/* if strings are NULL, then return empty */
	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';
	/* find the length of the strings */
	for (; s2[len1] != '\0'; len1++)
	{
	}
	for (; s2[len2] != '\0'; len2++)
	{
	}
	/* allocate memory for the concatenate string */
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	/* return NULL if malloc fails */
	if (str == NULL)
		return (NULL);
	/* if strings are empty, then str will be too */
	if ((len1 + len2) == 0)
		str[0] = '\0';
	else if (len1 == 0)
		s1[0] = '\0';
	else if (len2 == 0)
		s2[0] = '\0';
	else
		/* iterate through strings and */
		/* copy them into the allocated memory */
		for (; i1 < len1; i1++)
		{
			str[i1] = s1[i1];
		}
		for (; i2 <= len2; i2++)
		{
			str[i1 + i2] = s2[i2];
		}
		/* returns pointer to string */
		return (str);
}
