/**
 * cap_string - changes lower case latters to upper case
 * @s: string to convert
 *
 * Return: the converted string
 */
char *cap_string(char *s)
{
	int l = 0;
	int i;
	int cap = 1;
	char *separators = " \t\n,;.!?\"(){}";

	while (s[l] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (s[l] == separators[i])
			{
				cap = 1;
				break;
			}
		}
		if (cap && s[l] >= 97 && s[l] < 97 + 26)
		{
			s[l] = s[l] - 32;
			cap = 0;
		} else if (s[l] >= 65 && s[l] <= 90)
			cap = 0;
		l++;
	}
	return (s);
}
