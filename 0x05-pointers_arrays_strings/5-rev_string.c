/**
 * rev_string - reverses the given string
 * @str: the string to be revered
 *
 * Return: nothing
 */
void rev_string(char *str)
{
	int l = 0;
	int i = 0;
	char temp;

	while (str[l] != '\0')
		l++;
	l--;
	while (l > i)
	{
		temp = str[l];
		str[l] = str[i];
		str[i] = temp;
		i++;
		l--;
	}
}
