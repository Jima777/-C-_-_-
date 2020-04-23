#include<iostream>
#include "bubblesort1A.h"
#include "sum.h"
#include "power2.h"
#include "reverse.h"
#include "PrintList.h"
#include "sum1.h"
#include "fib.h"
#include "fib2.h"
using namespace std;
int main()
{

	/*
	for (int i = 0; i <= n - 1; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	*/

	int n = 7;
	int A[7] = {5, 2, 7, 4, 6, 3, 1};

	/*  bubblesort1A
	cout << "original list" << endl;
    PrintList(A, 7);

	bubblesort1A(A, n);   // bubblesort1A
	cout << "bubblesort1A:  list" << endl;
	PrintList(A, 7);
	*/

	/*
	// sum
	cout << sum(A, 7) << endl;
	*/

	/* sum
	cout << power2(7) << endl;
	*/

	 /*
	cout << "original list" << endl;
	PrintList(A, 7);
	reverse(A, 1, 7);
	cout << "reversed list" << endl;
	PrintList(A, 7);
	 */

	 /*
	cout << "original list" << endl;
	PrintList(A, 7);
	cout << "sum1 list" << endl;
	cout << sum1(A, 1-1, 7-1) << endl;
	*/

	/* fib
	cout << fib(20) << endl;
	*/

	// fib2
	cout << fib2(50) << endl;


	return 0;
}