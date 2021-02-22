/**
 * _strspn - find number of charaters not found in accept
 * @s: the pointer to search the charaters from
 * @accept: the accepted characters
 *
 * Return: number of not found characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int l = 0;
	int i;
	unsigned int count = 0;
	int found;

	while (s[l] != '\0')
	{
		i = 0;
		found = 0;
		while (accept[i] != '\0')
		{
			if (accept[i] == s[l])
			{
				found = 1;
				break;
			}
			i++;
		}
		if (!found)
			count++;
		l++;
	}
	return (count);
}
