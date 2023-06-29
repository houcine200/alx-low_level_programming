void reverse_array(int *a, int n);
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to reverse
 * @n: size of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j, swap;

	for (i = 0; i < n / 2; i++)
	{
		j = n - i - 1;

		swap = a[i];
		a[i] = a[j];
		a[j] = swap;
	}
}
