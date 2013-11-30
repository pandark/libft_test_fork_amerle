#include "test.h"

static int	ft_test_isalpha2(const char c)
{
	int	res;
	int	res2;
	int	res3;

	res = 0;
	res2 = ft_isalpha(c);
	res3 = isalpha(c) || 0;
	if (res2 != res3)
		++res;
	printf("Test : \'%c\' (%d) { %d - %d }", c, c, res2, res3);
	ft_print_status(res);
	return (res);
}

int	ft_test_isalpha(void)
{
	int	res;
	int	c;

	c = 0;
	res = 0;
	ft_print_begin("ft_isalpha");
	while (c <= 127)
	{
		res += ft_test_isalpha2(c);
		c++;
	}
	return (ft_print_end(res));
}
