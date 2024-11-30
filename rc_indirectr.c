#include <stdio.h>

int	rc_recursionb(int n);

int	rc_recursiona(int n)
{
	printf("This is A\n");
	if (n >= 10)
		return (n);
	else
		return (rc_recursionb(n + 1));
}

int	rc_recursionb(int n)
{
	printf("This is B\n");
	if (n >= 10)
		return (n);
	else
		return (rc_recursiona(n + 1));
}

int	main(void)
{
	int	n = rc_recursiona(0);
	printf("%d\n", n);
	return (0);
}
