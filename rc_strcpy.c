#include <stdio.h>

char	*rc_strcpy(char *dst, char *src)
{
	if (*src == '\0') {
		*dst = '\0';
		return &dst[0];
	}
	*dst++ = *src++;
	return rc_strcpy(dst, src);
}

int	main(void)
{
	char	dst[1000];
	char	src[] = "this is a test string!";

	rc_strcpy(dst, src);

	printf("dst : %s\n", dst);
	return 0;
}
