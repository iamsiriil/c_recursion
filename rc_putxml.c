#include <stdio.h>

void	rc_putxml(char	*svec[], int *i)
{
	static int	l = 0;

	if (svec[*i] == NULL)
		return ;
	if (svec[*i][1] == '/') {
		printf("%*s%s\n", 2 * --l, "", svec[(*i)++]);
		return rc_putxml(svec, i);
	}
	printf("%*s%s\n", 2 * l++, "", svec[(*i)++]);
	return rc_putxml(svec, i);
}

int	main(void)
{
	char	*svec[] = {"<a>", "<b>", "</b>", "<d>", "<c>", "</c>", "</d>", "</a>", NULL};

	int	i = 0, *ptr = &i;
	rc_putxml(svec, ptr);

	return 0;
}

