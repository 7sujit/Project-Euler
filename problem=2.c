#include <stdio.h>

int
main(void)
{
	long int fib_1 = 1, fib_2 = 2;
	long int sum = 0;
	long int temp;
	while(fib_2 <= 4000000)
	{
		if(fib_2 % 2 == 0)
			sum = sum + fib_2;

		temp = fib_1;
		fib_1 = fib_2;
		fib_2 = fib_1 + temp;
	} 

	printf("%ld\n",sum );

	return 0;
}
