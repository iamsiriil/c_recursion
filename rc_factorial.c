#include <stdio.h>

// Recursão linear

long	rc_factorial(int nbr)
{
	if (nbr == 0)
		return 1;
	else
		return nbr * rc_factorial(nbr - 1);
}

int	main(void)
{
	long	fact = rc_factorial(5);
	
	printf("fact : %ld\n", fact);
	return 0;
}
