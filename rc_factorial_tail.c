#include <stdio.h>

long	rc_factorial_t(long prd, int nbr)
{
	if (nbr == 0)
		return (prd);
	else
		return (rc_factorial_t(prd * nbr, nbr - 1));
}

int	main(void)
{
	long	fact = rc_factorial_t(1, 5);
	
	printf("fact : %ld\n", fact);
	return (0);
}
