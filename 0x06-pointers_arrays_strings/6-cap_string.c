#include "holberton.h"

/**
 * cap_string - function that capitalizes all words
 * @caps: letters
 * Description: Capitalize properly
 * Return: string in caps
 */
char *cap_string(char *caps)
{
	/* declare counter variables */
	int iterate1;
	int iterate2;

	/* declare array for the separators */
	char *s = ",;.!?\"(){} \n\t\0";

	/* loop through the string until null byte */
	for (iterate1 = 0; caps[iterate1] != '\0'; iterate1++)
	{
		/* loop through the separators until null byte */
		for (iterate2 = 0; s[iterate2] != '\0'; iterate2++)
		{
			/* if at the first char or after a separator */
			if (iterate1 == 0 || (caps[iterate1 - 1] == s[iterate2]))
			{
				/* if it's a lowercase char */
				if (caps[iterate1] >= 'a' && caps[iterate1] <= 'z')
				{
					/* then, jump from 92 to 65 */
					caps[iterate1] = caps[iterate1] - 32;
				}
			}
		}
	}
	/* returns string in caps */
	return (caps);
}
