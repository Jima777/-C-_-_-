
int sum1(int A[], int lo, int hi)
{
	if (lo == hi)
	{
		return A[lo];
	}
	else
	{
		int mi = (lo + hi) >> 1;
		return sum1(A, lo, mi) + sum1(A, mi + 1, hi);
	}
}