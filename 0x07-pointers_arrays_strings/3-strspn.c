char *removeChar(char s[], int i);

/**
 * _strspn - find number of charaters not found in accept
 * @s: the pointer to search the charaters from
 * @accept: the accepted characters
 *
 * Return: number of not found characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	int i, found;
	int ln = 0;

	while (s[ln] != '\0')
		ln++;
	while (s[l] != '\0')
	{
		i = 0;
		found = 0;
		if (accept[i] == '\0')
			break;
		while (accept[i] != '\0' && i <= ln)
		{
			if (accept[i] == s[l])
			{
				found = 1;
				break;
			}
			i++;
		}
		if (found)
		{
			accept = removeChar(accept, i);
		}
		l++;
	}
	return (l);
}


/**
 * removeChar - romoves char
 * @s: a string to remove char from
 * @i: the index to remove the char from
 *
 * Return: the string with the removed char
 */
char *removeChar(char *s, int i)
{
	int j = 0;
	int temp = i;
	static char t[100];

	i = 0;
	while (s[j] != '\0')
	{
		if (i == temp)
		{
			j++;
			continue;
		}
		t[i] = s[j];
		j++;
		i++;
	}
	t[i] = '\0';
	return (t);
}
