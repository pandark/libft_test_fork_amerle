#include "test.h"

static int	ft_test_isdigit2(const char c)
{
	int	res;
	int	res2;
	int	res3;

	res = 0;
	res2 = ft_isdigit(c);
	res3 = isdigit(c) || 0;
	if (res2 != res3)
		++res;
	printf("Test : \'%c\' (%d) { %d - %d }", c, c, res2, res3);
	ft_print_status(res);
	return (res);
}

int	ft_test_isdigit(void)
{
	int	res;

	res = 0;
	ft_print_begin("ft_isdigit");
	res += ft_test_isdigit2('e');
	res += ft_test_isdigit2('A');
	res += ft_test_isdigit2('0');
	res += ft_test_isdigit2('\n');
	return (ft_print_end(res));
}
