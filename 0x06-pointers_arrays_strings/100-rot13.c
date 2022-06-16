#include "main.h"

/**
 * rot13 -  a function that encodes a string using rot13.
 * @s: An input string to encode using rot13
 * Return: An encode string
 */
char *rot13(char *nath)
{
	int i = 0, j = 0;
	char string_rot13[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char string_alpha[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	while (nath[i] != '\0')
	{
		do {
			if (nath[i] == string_alpha[j])
			{
				nath[i] = string_rot13[j];
				break;
			}
			j++;
		} while (string_alpha[j] != '\0');
		j = 0;
		i++;
	}

	return (nath);
}
