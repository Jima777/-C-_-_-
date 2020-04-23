
#include "swap.h"
void reverse(int* A, int lo, int hi)
{
	while (lo < hi)
	{
		swap(A+lo-1, A+hi-1);
		lo++;
		hi--;
	}
}