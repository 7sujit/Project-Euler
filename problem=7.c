/*
	PROBLEM STATEMENT :
	-------------------
		prime 1 : 2
		prime 2 : 3
		prime 3 : 5
		prime 4 : 7
		prime 5 : 11
		prime 6 : 13
		|
		|
		|
		prime 10,001 : ?	

*/


#include <stdio.h>
#include <stdlib.h>


int primes[10003];
int k;

int
IS_PRIME(int x)
{
	int i;

	for(i = 1; i <= k && primes[i] * primes[i] <= x; ++i)
		if(x % primes[i] == 0) 
		  return 0;

	return 1;
}

int
main(void)
{
	clock_t begin, end;
	begin = clock();

	register int i;
	int n;
	int test_cases;
	primes[1] = 2;
	primes[2] = 3;

	for(k=2, i = 6; k <= 10001 ;i = i + 6)
	{
		if(IS_PRIME(i-1))
			primes[++k] = i-1;

		if(IS_PRIME(i+1))
			primes[++k] = i+1;
	}
	printf("%d\n", primes[10001]);
	return 0;
}
