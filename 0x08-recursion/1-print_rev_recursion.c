int _putchar(int n);

/**
 * _print_rev_recursion - prints string in reverse using recursion
 * @s: pointer to string to be reversed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	s--;
	_putchar(*s);
	_print_rev_recursive(s);
}
