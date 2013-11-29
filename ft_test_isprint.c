#include "test.h"

static int	ft_test_isprint2(char c)
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
	int c;

	res = 0;
	c = 0;
	ft_print_begin("ft_isprint");
  while (c <= 127)
  {
    res += ft_test_isprint2(c);
    c++;
  }
	return (ft_print_end(res));
}
