/**
 * int_index - search for an integer
 * @array: the array to search
 * @size: the size of the array
 * @cmp: the callback func
 *
 * Return: the index of the integer or -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			break;
	}

	if (i == size)
		return (-1);
	return (i);
}
