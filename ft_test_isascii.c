#include "test.h"

int	ft_test_isascii2(char c)
{
	int	res;
	int	res2;
	int	res3;

	res = 0;
	res2 = ft_isascii(c);
	res3 = isascii(c);
	if (res2 != res3)
		++res;
	printf("Test : %c { %d - %d }", c, res2, res3);
	ft_print_status(res);
	return (res);
}

int	ft_test_isascii(void)
{
	int	res;

	res = 0;
	ft_print_begin("ft_isascii");
	res += ft_test_isascii2('e');
	res += ft_test_isascii2('A');
	res += ft_test_isascii2('0');
	res += ft_test_isascii2('\n');
	res += ft_test_isascii2(0xF2);
	return (ft_print_end(res));
}