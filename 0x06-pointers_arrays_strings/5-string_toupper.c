/**
 * string_toupper - changes lower case latters to upper case
 * @s: string to convert
 *
 * Return: the converted string
 */
char *string_toupper(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		if (s[l] >= 97 && s[l] < 97 + 26)
			s[l] = s[l] - 32;
		l++;
	}
	return (s);
}
