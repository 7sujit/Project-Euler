#include <stdio.h>
#include <stdlib.h>

#define MAX_FACTOR 1000000
#define NUM 1000000000000

unsigned long long int primes[2000001];
int k;

int
IS_PRIME(int x)
{
	int i;

	for(i = 1; i <= k && primes[i] * primes[i] <= x; ++i)
		if(x % primes[i] == 0) return 0;

	return 1;

}

int
main(void)
{

	register unsigned long long int i;
	unsigned long long int n;
	int greatest_prime_factor = 2;


	primes[1] = 2;
	primes[2] = 3;



	for(k=2, i = 6; primes[k] * primes[k] <= 600851475143 ;i = i + 6)
	{
		if(IS_PRIME(i-1))
		{
			primes[++k] = i-1;
		}

		if(IS_PRIME(i+1))
		{
			primes[++k] = i+1;
		}
	}
	scanf("%llu",&n);

	// BINARY SEARCH CAN BE USED INSTEAD 
	for(i=1; i<=k && primes[i] <= n; ++i)
	{
		if( n % primes[i] == 0)
			greatest_prime_factor = primes[i];

	}


	printf("%d\n", greatest_prime_factor);


	return 0;
}
