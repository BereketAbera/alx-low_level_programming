/**
 * leet - replace characters
 * @s: the string to replace
 *
 * Return: the replaced string
 */
char *leet(char *s)
{
	int l = 0;
	int i;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	while (s[l] != '\0')
	{
		i = 0;
		while (letters[i] != '\0')
		{
			if (letters[i] == s[l])
			{
				s[l] = numbers[i];
				break;
			}
			i++;
		}
		l++;
	}
	return (s);
}
