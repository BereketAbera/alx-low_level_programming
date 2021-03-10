/**
 * print_name - prints a name using the callback function
 * @name: a string to print
 * @f: a callback function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
