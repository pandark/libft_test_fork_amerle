#include "test.h"

static int	ft_test_strrchr2(char const *s, int c)
{
	int		res;
	char	*res2;
	char	*res3;

	res = 0;
	res2 = ft_strrchr(s, c);
	res3 = strrchr(s, c);
	printf("Test : \'%c\' in \"%s\" { %p - %p }", c, s, res2, res3);
	if (res2 != res3) {
		++res;
	}
	ft_print_status(res);
	return (res);
}

int	ft_test_strrchr(void)
{
	int			res;
	const char	str[] = "Hello world !";
	int			c;

	res = 0;
	ft_print_begin("ft_strrchr");
	c = 'a';
	res += ft_test_strrchr2(str, 'H');
	while (c <= 'z')
		res += ft_test_strrchr2(str, c++);
	res += ft_test_strrchr2(str, '!');
	res += ft_test_strrchr2(str, 0);
	return (ft_print_end(res));
}
