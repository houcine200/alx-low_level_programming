void print_times_table(int n)
{
	int i, j, r;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		putchar ('0');
		for (j = 1; j <= n; j++)
		{
			r = i * j;

			putchar (',');
			putchar (' ');


			if (r < 10)
			{

				putchar (' ');
				putchar (' ');

				putchar (r + '0');
			}
			if (r >= 10 && r < 100)
			{


				putchar (' ');

				putchar (r / 10 + '0');
				putchar (r % 10 + '0');

			}
			if (r >= 100)
			{
				putchar (r / 100 + '0');
				putchar ((r / 10) % 10 + '0');
				putchar (r % 10 + '0');
			}
		}
		putchar ('\n');
	}
}
