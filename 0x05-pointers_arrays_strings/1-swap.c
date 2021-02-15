/**
 * swap_int - swaps the values of the two integers passed
 * @a: the first integer
 * @b: the second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
