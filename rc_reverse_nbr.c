#include <stdio.h>

int	rc_reverse_nbr(int nbr, int rem, int sum)
{
	if (nbr == 0)
		return (sum);
	else
	{
		rem = nbr % 10;
		sum = sum * 10 + rem;
		return (rc_reverse_nbr(nbr/10, rem, sum));
	}
}

int main(void)
{
	int	nbr = 0, rem, sum;
	for (int i = 100; i < 200; i++)
	{
		rem = 0; sum = 0;
		nbr = rc_reverse_nbr(i, rem, sum);
		if (i == nbr)
			printf("%d\n", i);
	}
	return (0);
}
