/**
 * rot13 - rotate letters
 * @s: string to rotate
 *
 * Return: the rotated string
 */
char *rot13(char *s)
{
	int l = 0;
	int i;
	char *lower = "abcdefghijklmnopqrstuvwxyz";
	char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (s[l] != '\0')
	{
		i = 0;
		while (i < 26)
		{
			if (lower[i] == s[l])
			{
				s[l] = lower[(i + 13) % 26];
				break;
			} else if (upper[i] == s[l])
			{
				s[l] = upper[(i + 13) % 26];
				break;
			}
			i++;
		}
		l++;
	}
	return (s);
}
