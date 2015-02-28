#include <stdio.h>

int
main(void)
{
	int k3,k5,k15;
	const static int n = 999;
	k3 =  n / 3;
	k5 =  n / 5 ;
	k15 = n / 15;

	k3 = 3 * k3 * (k3 + 1) / 2;
	k5 = 5 * k5 * (k5 + 1) / 2;
	k15 = 15 * k15 * (k15 + 1) / 2;

	printf("%d\n",k3 + k5 - k15 );

	return 0;
}
