
void swap(int* a, int* b)
{
	/*
	int temp = *a;
	*a = *b;
	*b = temp;
	*/

	*a ^= *b;
	*b ^= *a;
	*a ^= *b;

}