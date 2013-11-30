#include "test.h"

static int	ft_test_atoi2(const char *str)
{
	int	res;
	int	res2;
	int	res3;

	res = 0;
	res2 = ft_atoi(str);
	res3 = atoi(str);
	if (res2 != res3)
		++res;
	printf("Test : \"%s\" { %d | %d }", str, res2, res3);
	ft_print_status(res);
	return (res);
}

int	ft_test_atoi(void)
{
	int	res;

	res = 0;
	ft_print_begin("ft_atoi");
	res += ft_test_atoi2("125");
	res += ft_test_atoi2("0");
	res += ft_test_atoi2("2000000");
	res += ft_test_atoi2("\0\v\t\n\r\f2000000");
	res += ft_test_atoi2("-458");
	res += ft_test_atoi2("+123");
	res += ft_test_atoi2("154abcd");
	res += ft_test_atoi2("rwer");
	res += ft_test_atoi2("");
	return (ft_print_end(res));
}
