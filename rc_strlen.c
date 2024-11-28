#include <stdio.h>

void	rc_strlen1(char *str, int *len)
{
	if (str[*len] == '\0')
		return ;
	*len += 1;
	rc_strlen1(str, len);
}

int	rc_strlen2(char *str, int i)
{
	if (str[i] == '\0')
		return (i);
	else
		return (rc_strlen2(str, ++i));	
}

int	main(void)
{
	{
		// rc_strlen1
		char	*str = "This is a string";
		int	len = 0;
		rc_strlen1(str, &len);
		
		printf("#1 len : %d\n", len);
	}
	{
		// rc_strlen2
		char	*str = "This is another string!";
		int	i = 0, len = rc_strlen2(str, i);

		printf("#2 len : %d\n", len);
	}

	return (0);
}	

