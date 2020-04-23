
__int64 fib1(int n, __int64& prev)  // 缺失prevPrev部分代码实现
{
	if (0 == n)
	{
		prev = 1; 
		return 0;
	}
	else
	{
		__int64 prevPrev;
		prev = fib1(n - 1, prevPrev);
		return prevPrev + prev;
	}
}