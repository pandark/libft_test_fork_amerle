#include "test.h"

int	ft_test_isprint2(char c)
{
	int	res;
	int	res2;
	int	res3;

	res = 0;
	res3 = ft_isprint(c);
	res2 = isprint(c);
	if (res2 != res3)
		++res;
	printf("Test : %c { %d - %d }", c, res2, res3);
	ft_print_status(res);
	return (res);
}

int	ft_test_isprint(void)
{
	int	res;

	res = 0;
	ft_print_begin("ft_isprint");
	res += ft_test_isprint2('e');
	res += ft_test_isprint2('A');
	res += ft_test_isprint2('0');
	res += ft_test_isprint2('\n');
	res += ft_test_isprint2(0xF2);
	return (ft_print_end(res));
}
