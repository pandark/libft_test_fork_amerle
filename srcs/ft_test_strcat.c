#include "test.h"

static int	ft_test_strcat2(char *s1, char const *s2, size_t len_buffer)
{
	int		res;
	char	*res2;
	char	*str2;

	res = 0;
	str2 = (char *)malloc(sizeof(char) * len_buffer);
	strcpy(str2, s1);
	res2 = ft_strcat(s1, s2);
	if (res2 != s1)
		++res;
	strcat(str2, s2);
	if (strcmp_bsd(str2, s1))
		++res;
	printf("Test : { \"%s\" }", s1);
	free(str2);
	ft_print_status(res);
	return (res);
}

int	ft_test_strcat(void)
{
	int		res;
	char	buf[100];

	res = 0;
	buf[0] = 0;
	ft_print_begin("ft_strcat");
	res += ft_test_strcat2(buf, "Hello", 100);
	res += ft_test_strcat2(buf, "world !", 100);
	res += ft_test_strcat2(buf, "", 100);
	return (ft_print_end(res));
}
