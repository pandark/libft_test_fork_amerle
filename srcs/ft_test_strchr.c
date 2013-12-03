#include "test.h"

static int	ft_test_strchr2(char const *s, int c)
{
	int		res;
	char	*res2;
	char	*res3;

	res = 0;
	res2 = ft_strchr(s, c);
	res3 = strchr(s, c);
	if (res2 != res3) {
		++res;
	}
	printf("Test : \'%c\' in \"%s\" { %p - %p}", c, s, res2,res3);
	ft_print_status(res);
	return (res);
}

int	ft_test_strchr(void)
{
	int			res;
	const char		str[] = "Hello world !";
	char		c;

	res = 0;
	ft_print_begin("ft_strchr");
	c = 'a';
	res += ft_test_strchr2(str, 'H');
	while (c <= 'z')
		res += ft_test_strchr2(str, c++);
	res += ft_test_strchr2(str, '!');
	res += ft_test_strchr2(str, 0);
	return (ft_print_end(res));
}
