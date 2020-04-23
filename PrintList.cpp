#include<iostream>
int PrintList(int A[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		std::cout << A[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
