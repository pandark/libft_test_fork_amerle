#include "test.h"

int	ft_test_tolower2(int c)
{
	int	res;
	int	res2;
	int	res3;

	res = 0;
	res2 = ft_tolower(c);
	res3 = tolower(c);
	if (res2 != res3)
		++res;
	printf("Test : %c { %c | %c }", (char)c, (char)res2, (char)res3);
	ft_print_status(res);
	return (res);
}

int	ft_test_tolower(void)
{
	int	res;

	res = 0;
	ft_print_begin("ft_tolower");
	res += ft_test_tolower2('e');
	res += ft_test_tolower2('A');
	res += ft_test_tolower2('0');
	res += ft_test_tolower2('\n');
	return (ft_print_end(res));
}
