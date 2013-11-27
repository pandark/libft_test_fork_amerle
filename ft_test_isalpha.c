#include "test.h"

int	ft_test_isalpha2(char c)
{
	int	res;
	int	res2;
	int	res3;

	res = 0;
	res2 = ft_isalpha(c);
	res3 = isalpha(c);
	if (res2 != res3)
		++res;
	printf("Test : %c { %d - %d }", c, res2, res3);
	ft_print_status(res);
	return (res);
}

int	ft_test_isalpha(void)
{
	int	res;

	res = 0;
	ft_print_begin("ft_isalpha");
	res += ft_test_isalpha2('e');
	res += ft_test_isalpha2('A');
	res += ft_test_isalpha2('0');
	res += ft_test_isalpha2('\n');
	return (ft_print_end(res));
}