#include "test.h"

int	ft_test_isalnum2(char c)
{
	int	res;
	int	res2;
	int	res3;

	res = 0;
	res2 = ft_isalnum(c);
	res3 = isalnum(c);
	if (res2 != res3)
		++res;
	printf("Test : %c { %d - %d }", c, res2, res3);
	ft_print_status(res);
	return (res);
}

int	ft_test_isalnum(void)
{
	int	res;

	res = 0;
	ft_print_begin("ft_isalnum");
	res += ft_test_isalnum2('e');
	res += ft_test_isalnum2('A');
	res += ft_test_isalnum2('0');
	res += ft_test_isalnum2('\n');
	return (ft_print_end(res));
}