/**
 * check - checks the input number from n to the base
 * @n: number is squared and compared with b
 * @b: b number to check
 * Return: natural square root of number b
 */
int check(int n, int b)
{
	if (n * n == b)
		return (n);
	if (n * n > b)
		return (-1);
	return (check(n + 1, b));
}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (check(1, n));
}
