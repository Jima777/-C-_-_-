
__int64 fib1(int n, __int64& prev)  // ȱʧprevPrev���ִ���ʵ��
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