
__int64 fib2(int n)
{
	__int64 f = 1, g = 0;
	while (0 < n--)
	{
		g += f;
		f = g - f;
	}
	return g;
}